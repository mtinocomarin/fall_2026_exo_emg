"""
EMG + Video replay viewer (PyQt5 + pyqtgraph), optimized coloring.

Folder layout (per session):

ROOT/
  SESSION_YYYYmmdd_HHMMSS/
    trial_1.txt
    trial_2.txt
    ...
    video_1.avi
    video_2.avi
    ...
    predictions/
      trial_1.txt
      trial_2.txt
      ...

EMG file:  header, then "timestamp ch1 ch2 ch3 ..."
Pred file: header, then "timestamp class window"

Class meaning:
  1 -> HOLD    (bright pink)
  2 -> RELEASE (bright blue)
  other -> OTHER (bright green)

Features:
  - EMG over time
    * base in light gray
    * overlaid bright pink / blue / green segments per prediction
  - Sliding neutral-gray highlight window showing current time window
  - Moving cursor line synced with video frames
  - Replay button
  - Play/Pause button
  - Back button (step backward by ~1 window)
  - Mark button: drops a vertical marker at current cursor time
  - "Load Trial..." button to pick another trial in same session
  - Info label on top: EMG windows & prediction coverage
  - Zoom/pan via pyqtgraph (mouse wheel, drag)
  - Legend (labels for colors) OUTSIDE the plot
"""

from __future__ import annotations

import sys
from dataclasses import dataclass
from datetime import datetime
from pathlib import Path
from typing import List, Tuple

import cv2
import numpy as np

from PyQt5 import QtCore, QtGui, QtWidgets
import pyqtgraph as pg


# ==========================
# Timestamp parsing
# ==========================

TIME_FORMATS = [
    "%H:%M:%S.%f",            # e.g. 15:11:16.686
    "%Y-%m-%d %H:%M:%S.%f",   # e.g. 2025-12-08 15:11:16.686
]


def parse_time(ts_str: str) -> datetime:
    ts_str = ts_str.strip()

    # If it's a full line with tabs/spaces, take ONLY the first token
    # (this is safe for both "HH:MM:SS.mmm" and "YYYY-mm-dd HH:MM:SS.mmm")
    ts_str = ts_str.split()[0] if "\t" in ts_str else ts_str.split()[0]

    for fmt in TIME_FORMATS:
        try:
            return datetime.strptime(ts_str, fmt)
        except ValueError:
            continue

    raise ValueError(f"Timestamp {ts_str!r} does not match expected formats.")



# ==========================
# Data containers
# ==========================

@dataclass
class EMGData:
    t: np.ndarray        # shape (N,) – relative seconds
    ch: np.ndarray       # shape (N, 3) – EMG channels
    t0_abs: datetime     # absolute timestamp of first sample
    path: Path           # file path (for info)


@dataclass
class PredData:
    t: np.ndarray        # shape (M,) – relative seconds
    cls: np.ndarray      # shape (M,) – int or str
    win: np.ndarray      # shape (M,) – window indices


# ==========================
# Loaders
# ==========================

def load_emg(session_dir: Path, trial_idx: int) -> EMGData:
    """
    Load EMG data for a trial.
    trial_X.txt:
      header line
      timestamp ch1 ch2 ch3 ...
    """
    emg_path = session_dir / f"trial_{trial_idx}.txt"
    if not emg_path.exists():
        raise FileNotFoundError(f"EMG file not found: {emg_path}")

    times_dt: List[datetime] = []
    ch1_vals: List[float] = []
    ch2_vals: List[float] = []
    ch3_vals: List[float] = []

    with open(emg_path, "r") as f:
        _ = f.readline()  # skip header
        for line in f:
            line = line.strip()
            if not line:
                continue

            parts = line.split()
            if len(parts) < 4:
                continue

            ts_str = parts[0]
            ch1, ch2, ch3 = parts[1:4]

            dt = parse_time(ts_str)
            times_dt.append(dt)
            ch1_vals.append(float(ch1))
            ch2_vals.append(float(ch2))
            ch3_vals.append(float(ch3))

    if not times_dt:
        raise RuntimeError(f"No EMG samples in {emg_path}")

    # 1) Build channel matrix FIRST
    ch = np.column_stack(
        [
            np.array(ch1_vals, dtype=float),
            np.array(ch2_vals, dtype=float),
            np.array(ch3_vals, dtype=float),
        ]
    )  # shape (N, 3)

    # 2) Convert times to array for sorting
    times_arr = np.array(times_dt, dtype="datetime64[us]")

    # 3) Sort BOTH timestamps and channels using the same order
    order = np.argsort(times_arr)
    times_arr = times_arr[order]
    ch = ch[order, :]

    # 4) Build relative time from sorted times
    t0_abs = times_arr[0].astype("datetime64[us]").astype(object)  # back to python datetime
    t_rel = np.array([(t.astype(object) - t0_abs).total_seconds() for t in times_arr], dtype=float)

    # 5) Sanity check
    if np.any(np.diff(t_rel) < 0):
        print("⚠️ EMG timestamps are not monotonic (still) after sorting — unexpected.")

    return EMGData(t=t_rel, ch=ch, t0_abs=t0_abs, path=emg_path)


def load_predictions(session_dir: Path, trial_idx: int, emg_t0_abs: datetime) -> PredData:
    """
    Load prediction timestamps, classes, and window indices for a trial.
    predictions/trial_X.txt:
      header
      timestamp class window
    """
    pred_path = session_dir / "predictions" / f"trial_{trial_idx}.txt"
    if not pred_path.exists():
        raise FileNotFoundError(f"Prediction file not found: {pred_path}")

    times_dt: List[datetime] = []
    classes: List[object] = []
    windows: List[int] = []

    with open(pred_path, "r") as f:
        _ = f.readline()  # header
        for line in f:
            line = line.strip()
            if not line:
                continue

            parts = line.split()
            if len(parts) < 3:
                continue

            ts_str, cls_str, win_str = parts[:3]
            dt = parse_time(ts_str)

            # class can be int or "?"
            try:
                cls_val: object = int(cls_str)
            except ValueError:
                cls_val = cls_str

            try:
                win_val = int(win_str)
            except ValueError:
                win_val = 0

            times_dt.append(dt)
            classes.append(cls_val)
            windows.append(win_val)

    if not times_dt:
        raise RuntimeError(f"No predictions in {pred_path}")

    pred_t = np.array([(t - emg_t0_abs).total_seconds() for t in times_dt], dtype=float)
    order = np.argsort(pred_t)

    pred_t = pred_t[order]
    pred_cls = np.array(classes, dtype=object)[order]
    pred_win = np.array(windows, dtype=int)[order]

    return PredData(t=pred_t, cls=pred_cls, win=pred_win)


def open_video(session_dir: Path, trial_idx: int) -> Tuple[cv2.VideoCapture, float, int]:
    """
    Open video for a trial.
    Returns: (cap, fps, total_frames)
    """
    video_path = session_dir / f"video_{trial_idx}.avi"
    if not video_path.exists():
        raise FileNotFoundError(f"Video file not found: {video_path}")

    cap = cv2.VideoCapture(str(video_path))
    if not cap.isOpened():
        raise RuntimeError(f"Could not open video: {video_path}")

    fps = cap.get(cv2.CAP_PROP_FPS)
    if fps <= 0:
        fps = 30.0

    total_frames = int(cap.get(cv2.CAP_PROP_FRAME_COUNT))
    return cap, fps, total_frames


# ==========================
# GUI: EMG + Video Viewer
# ==========================

class EMGVideoViewer(QtWidgets.QMainWindow):
    """
    PyQt5 + pyqtgraph viewer:

      - Info label on top
      - Legend row
      - Video frame (QLabel)
      - EMG plot (pyqtgraph)
      - Control buttons (Load, Back, Play/Pause, Replay, Mark)

    Prediction classes:
      1 = Hold (bright pink)
      2 = Release (bright blue)
      other = Other (bright green)
    """

    def __init__(
        self,
        session_dir: Path,
        trial_idx: int,
        window_sec: float = 0.16,
        parent=None,
    ):
        super().__init__(parent)

        self.session_dir = session_dir
        self.trial_idx = trial_idx
        self.window_sec = float(window_sec)

        # --- Load initial data ---
        self.emg = load_emg(session_dir, trial_idx)
        self.pred = load_predictions(session_dir, trial_idx, self.emg.t0_abs)
        self.sample_cls = self._compute_sample_classes()
        self.cap, self.fps, self.total_frames = open_video(session_dir, trial_idx)

        # ===== SYNC DEBUG (temporary) =====
        print("===== SYNC DEBUG =====")
        print("Session:", self.session_dir.name, "trial:", self.trial_idx)

        print("EMG duration (s):", round(self.emg.t[-1], 3))
        print("Video duration (s):", round((self.total_frames - 1) / self.fps, 3))

        if len(self.pred.t) > 0:
            print(
                "Prediction time range (s):",
                round(self.pred.t[0], 3),
                "→",
                round(self.pred.t[-1], 3),
            )
        else:
            print("No predictions loaded")

        print("======================")


        # Frame time for each frame index
        self.frame_times = np.arange(self.total_frames, dtype=float) / self.fps

        # Map frame -> last prediction index with pred_t <= frame_time
        self.frame_pred_idx = self._build_frame_to_pred_index()

        # Playback state
        self.current_frame_idx = 0  # we will consume frame 0 immediately

        # --- Timer for video playback ---
        self.timer = QtCore.QTimer(self)
        self.timer.timeout.connect(self._on_timer_tick)
        self.timer.setInterval(int(1000 / self.fps))

        # Store marker lines
        self.marker_lines: List[pg.InfiniteLine] = []

        # GUI
        self._init_ui()

        # Show the first frame immediately (frame index 0) using sequential read
        ret, frame = self.cap.read()
        if ret:
            self._update_for_frame(0, frame)
            self.current_frame_idx = 1  # next frame to read

        # Start playback, so Play/Pause starts in "Pause" mode (currently playing)
        self.timer.start()
        self.play_pause_button.setText("Pause")

    # ---------------- GUI setup ----------------

    def _init_ui(self):
        self.setWindowTitle(
            f"EMG + Video Viewer - {self.session_dir.name} - trial_{self.trial_idx}"
        )

        central = QtWidgets.QWidget(self)
        vlayout = QtWidgets.QVBoxLayout(central)
        vlayout.setContentsMargins(8, 8, 8, 8)
        vlayout.setSpacing(6)

        # ----- Info label (windows + prediction coverage) -----
        self.info_label = QtWidgets.QLabel(self)
        self.info_label.setText("")
        vlayout.addWidget(self.info_label)
        # (text is set after plot is built; we call _update_info_label() at end)

        # ----- Legend panel (labels OUTSIDE the plot) -----
        legend_widget = QtWidgets.QWidget(self)
        legend_layout = QtWidgets.QHBoxLayout(legend_widget)
        legend_layout.setContentsMargins(0, 0, 0, 0)
        legend_layout.setSpacing(12)

        legend_layout.addWidget(self._make_color_legend("Hold (1)", QtGui.QColor(255, 50, 180)))
        legend_layout.addWidget(self._make_color_legend("Release (2)", QtGui.QColor(60, 120, 255)))
        legend_layout.addWidget(self._make_color_legend("Other", QtGui.QColor(0, 200, 80)))
        legend_layout.addStretch(1)

        vlayout.addWidget(legend_widget)

        # ----- Video label -----
        self.video_label = QtWidgets.QLabel(self)
        self.video_label.setFixedHeight(300)
        self.video_label.setAlignment(QtCore.Qt.AlignCenter)
        self.video_label.setStyleSheet("background-color: black;")
        vlayout.addWidget(self.video_label)

        # ----- EMG plot (pyqtgraph) -----
        pg.setConfigOptions(antialias=True)
        self.plot_widget = pg.PlotWidget(self)
        self.plot_widget.setBackground("w")
        self.plot_widget.showGrid(x=True, y=True, alpha=0.2)
        self.plot_widget.setLabel("bottom", "Time (s)")
        self.plot_widget.setLabel("left", "Voltage (V)")
        vlayout.addWidget(self.plot_widget, stretch=1)

        # EMG + prediction-colored segments
        self._setup_emg_plot()

        # Moving cursor line
        self.cursor_line = pg.InfiniteLine(
            pos=self.emg.t[0],
            angle=90,
            pen=pg.mkPen("k", width=2),
        )
        self.plot_widget.addItem(self.cursor_line)

        # Sliding highlight window (neutral gray)
        self.window_region = pg.LinearRegionItem(
            values=(self.emg.t[0], self.emg.t[0] + self.window_sec),
            brush=(180, 180, 180, 60),
            movable=False,
        )
        self.window_region.setZValue(10)
        self.plot_widget.addItem(self.window_region)

        # Prediction text label (top-left inside plot)
        self.pred_text_item = pg.TextItem(
            text="Pred: -",
            color="k",
            anchor=(0, 1),
        )
        self.plot_widget.addItem(self.pred_text_item)
        y_top = float(self.emg.ch.max()) + 0.02 * (
            self.emg.ch.max() - self.emg.ch.min() + 1e-6
        )
        self.pred_text_item.setPos(self.emg.t[0], y_top)

        # ----- Buttons -----
        btn_row = QtWidgets.QHBoxLayout()
        btn_row.setSpacing(10)

        self.load_button = QtWidgets.QPushButton("Load Trial...")
        self.load_button.clicked.connect(self.on_load_trial_clicked)

        self.back_button = QtWidgets.QPushButton("⟲ Back")
        self.back_button.clicked.connect(self.on_back_clicked)

        self.play_pause_button = QtWidgets.QPushButton("Pause")
        self.play_pause_button.clicked.connect(self.on_play_pause_clicked)

        self.replay_button = QtWidgets.QPushButton("Replay")
        self.replay_button.clicked.connect(self.on_replay_clicked)

        self.mark_button = QtWidgets.QPushButton("Mark current time")
        self.mark_button.clicked.connect(self.on_mark_clicked)

        btn_row.addWidget(self.load_button)
        btn_row.addStretch(1)
        btn_row.addWidget(self.back_button)
        btn_row.addWidget(self.play_pause_button)
        btn_row.addWidget(self.replay_button)
        btn_row.addWidget(self.mark_button)

        vlayout.addLayout(btn_row)

        self.setCentralWidget(central)

        # Now that GUI elements exist, update info label
        self._update_info_label()

    def _make_color_legend(self, text: str, color: QtGui.QColor) -> QtWidgets.QWidget:
        """
        Small colored square + label. Used for legend outside the plot.
        """
        widget = QtWidgets.QWidget(self)
        layout = QtWidgets.QHBoxLayout(widget)
        layout.setContentsMargins(0, 0, 0, 0)
        layout.setSpacing(5)

        color_box = QtWidgets.QLabel(self)
        color_box.setFixedSize(14, 14)
        pix = QtGui.QPixmap(14, 14)
        pix.fill(color)
        color_box.setPixmap(pix)

        label = QtWidgets.QLabel(text, self)

        layout.addWidget(color_box)
        layout.addWidget(label)

        return widget

    # ---------------- Info label (windows) ----------------

    def _update_info_label(self):
        """
        Show:
          - number of EMG samples
          - EMG windows (WL, INC)
          - how many prediction windows are reported
        """
        N = len(self.emg.t)
        wl = 100
        inc = 50

        if N >= wl:
            total_win = N // inc - (wl // inc - 1)
        else:
            total_win = 0

        # Unique prediction windows with valid index > 0
        unique_pred_windows = sorted(set(int(w) for w in self.pred.win if int(w) > 0))
        matched = len(unique_pred_windows)

        text = (
            f"EMG samples: {N} | "
            f"EMG windows (WL={wl}, INC={inc}): {total_win} | "
            f"prediction windows reported: {matched}"
        )

        if total_win > 0:
            ratio = matched / total_win
            text += f" ({matched}/{total_win} = {ratio:.1%})"

        self.info_label.setText(text)

    # ---------------- Colors for classes ----------------

    def _class_color_rgb(self, cls) -> Tuple[int, int, int]:
        """
        Return (R,G,B) for class:
          1 -> bright pink
          2 -> bright blue
          other -> bright green
        """
        if isinstance(cls, int):
            if cls == 1:
                return (255, 50, 180)    # hold: pink
            if cls == 2:
                return (60, 120, 255)    # release: blue

        return (0, 200, 80)              # other: green

    # ---------------- Per-sample class mapping ----------------

    def _compute_sample_classes(self) -> np.ndarray:
        """
        For each EMG sample time t[i], find which prediction is active:
        class from the last prediction with pred_t <= t[i].
        Returns an array sample_cls of shape (N,) with class values or None.
        """
        t = self.emg.t
        if self.pred.t.size == 0:
            return np.array([None] * len(t), dtype=object)

        # For each EMG time, find index of last prediction <= t[i]
        idx = np.searchsorted(self.pred.t, t, side="right") - 1
        sample_cls = np.array([None] * len(t), dtype=object)

        valid_mask = idx >= 0
        sample_cls[valid_mask] = self.pred.cls[idx[valid_mask]]
        return sample_cls

    # ---------------- EMG / Prediction plotting ----------------

    def _setup_emg_plot(self):
        """
        Plot EMG base traces (gray) and overlay colored segments directly
        on the EMG lines using the per-sample classes (sample_cls).
        """
        t = self.emg.t
        ch = self.emg.ch
        sample_cls = self.sample_cls  # shape (N,)

        # 1) Base EMG in light gray so predictions stand out
        base_pen = pg.mkPen((200, 200, 200), width=1.0)
        self.plot_widget.plot(t, ch[:, 0], pen=base_pen)
        self.plot_widget.plot(t, ch[:, 1], pen=base_pen)
        self.plot_widget.plot(t, ch[:, 2], pen=base_pen)

        # 2) Determine y-range
        ymin = float(ch.min())
        ymax = float(ch.max())
        margin = 0.08 * (ymax - ymin + 1e-6)
        self.plot_widget.setYRange(ymin - margin, ymax + 2 * margin)
        self.plot_widget.setXRange(t[0], t[-1])

        # 3) Overlay colored EMG segments per class (using contiguous runs)
        n = len(t)
        if n == 0:
            return

        for ch_idx in range(3):
            i = 0
            while i < n:
                cls = sample_cls[i]
                # Skip "no prediction" segments: base gray already drawn
                if cls is None:
                    j = i + 1
                    while j < n and sample_cls[j] is None:
                        j += 1
                    i = j
                    continue

                color = self._class_color_rgb(cls)
                pen_seg = pg.mkPen(color, width=2.0)

                # Find end of this contiguous region with same class
                j = i + 1
                while j < n and sample_cls[j] == cls:
                    j += 1

                # Plot this contiguous colored segment
                self.plot_widget.plot(
                    t[i:j],
                    ch[i:j, ch_idx],
                    pen=pen_seg,
                )

                i = j

    # ---------------- Frame <-> prediction mapping ----------------

    def _build_frame_to_pred_index(self) -> np.ndarray:
        """
        For each video frame time, find the index of the last prediction with pred_t <= frame_time.
        If no prediction yet, index = -1.
        """
        if self.pred.t.size == 0:
            return np.full(self.total_frames, -1, dtype=int)

        idx = np.searchsorted(self.pred.t, self.frame_times, side="right") - 1
        idx[idx < 0] = -1
        return idx.astype(int)

    # ---------------- Playback / Timer ----------------

    def _on_timer_tick(self):
        """Called on each timer tick to grab next frame and update UI."""
        if self.current_frame_idx >= self.total_frames:
            self.timer.stop()
            return

        ret, frame = self.cap.read()
        if not ret:
            self.timer.stop()
            return

        frame_idx = self.current_frame_idx
        self.current_frame_idx += 1

        self._update_for_frame(frame_idx, frame)

    def _update_for_frame(self, frame_idx: int, frame: np.ndarray):
        """
        Update video QLabel and EMG cursor/highlight for given frame index.
        """
        # --- Video display ---
        frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        h, w, ch = frame_rgb.shape
        bytes_per_line = ch * w
        qimg = QtGui.QImage(
            frame_rgb.data,
            w,
            h,
            bytes_per_line,
            QtGui.QImage.Format_RGB888,
        )
        pixmap = QtGui.QPixmap.fromImage(qimg)
        self.video_label.setPixmap(
            pixmap.scaled(
                self.video_label.size(),
                QtCore.Qt.KeepAspectRatio,
                QtCore.Qt.SmoothTransformation,
            )
        )

        # --- EMG sync ---
        t = self.frame_times[frame_idx]
        t = max(self.emg.t[0], min(self.emg.t[-1], t))

        # Move cursor and sliding window
        self.cursor_line.setPos(t)
        self.window_region.setRegion(
            (max(self.emg.t[0], t - self.window_sec), t)
        )

        # Prediction at this time
        pred_idx = self.frame_pred_idx[frame_idx]
        if pred_idx >= 0:
            cls = self.pred.cls[pred_idx]
            self.pred_text_item.setText(f"Pred: {cls}")
        else:
            cls = None
            self.pred_text_item.setText("Pred: -")

        # Keep pred label near top-left
        y_top = float(self.emg.ch.max()) + 0.02 * (
            self.emg.ch.max() - self.emg.ch.min() + 1e-6
        )
        self.pred_text_item.setPos(t, y_top)

    # ---------------- Button handlers & marking ----------------

    def on_replay_clicked(self):
        """Replay button: reset playback and restart."""
        self.timer.stop()
        self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
        self.current_frame_idx = 0

        # Show first frame again
        ret, frame = self.cap.read()
        if ret:
            self._update_for_frame(0, frame)
            self.current_frame_idx = 1

        self.timer.start()
        self.play_pause_button.setText("Pause")

    def on_play_pause_clicked(self):
        """Toggle between play and pause."""
        if self.timer.isActive():
            self.timer.stop()
            self.play_pause_button.setText("Play")
        else:
            self.timer.start()
            self.play_pause_button.setText("Pause")

    def on_back_clicked(self):
        """
        Step backward by approximately one EMG window (window_sec) in time.
        """
        if self.total_frames <= 0:
            return

        # How many frames correspond to one window duration
        step_frames = max(1, int(self.fps * self.window_sec))

        # current_frame_idx is the NEXT frame to be read, so "current" shown is current_frame_idx - 1
        current = max(0, self.current_frame_idx - 1)
        new_idx = max(0, current - step_frames)

        # Seek and show that frame
        self.cap.set(cv2.CAP_PROP_POS_FRAMES, new_idx)
        ret, frame = self.cap.read()
        if not ret:
            return

        self._update_for_frame(new_idx, frame)
        self.current_frame_idx = new_idx + 1

    def on_mark_clicked(self, checked: bool = False):
        """
        Mark button: drop a visible vertical marker where the cursor currently is.
        """
        # Current cursor time
        t = float(self.cursor_line.value())

        # Ignore if outside EMG range (shouldn't really happen)
        if t < self.emg.t[0] or t > self.emg.t[-1]:
            return

        # Bright, thick red vertical line
        line = pg.InfiniteLine(
            pos=t,
            angle=90,
            pen=pg.mkPen((255, 0, 0), width=3),  # thicker & bright red
        )
        self.plot_widget.addItem(line)
        self.marker_lines.append(line)

    def on_load_trial_clicked(self):
        """
        Open a file dialog to choose another trial_X.txt in the same session,
        then reload EMG, predictions, video, and reset markers and playback.
        """
        self.timer.stop()

        start_dir = str(self.session_dir)
        fname, _ = QtWidgets.QFileDialog.getOpenFileName(
            self,
            "Select trial file",
            start_dir,
            "Trial files (trial_*.txt);;All files (*)",
        )
        if not fname:
            # User cancelled → resume if desired
            self.timer.start()
            self.play_pause_button.setText("Pause")
            return

        trial_path = Path(fname)
        new_session_dir = trial_path.parent
        # Expect filename "trial_X"
        try:
            stem = trial_path.stem  # "trial_X"
            new_trial_idx = int(stem.split("_")[1])
        except Exception:
            QtWidgets.QMessageBox.warning(
                self,
                "Error",
                f"Could not parse trial index from: {trial_path.name}",
            )
            self.timer.start()
            self.play_pause_button.setText("Pause")
            return

        self._load_new_trial(new_session_dir, new_trial_idx)
        self.timer.start()
        self.play_pause_button.setText("Pause")

    # ---------------- Load new trial in same window ----------------

    def _load_new_trial(self, session_dir: Path, trial_idx: int):
        """
        Reload viewer state for a new trial in (possibly) new session_dir.
        Clears marks, reloads EMG + predictions + video, and resets playback.
        """
        # Release old video
        if self.cap is not None:
            self.cap.release()

        self.session_dir = session_dir
        self.trial_idx = trial_idx

        # Load new data
        self.emg = load_emg(session_dir, trial_idx)
        self.pred = load_predictions(session_dir, trial_idx, self.emg.t0_abs)
        self.sample_cls = self._compute_sample_classes()
        self.cap, self.fps, self.total_frames = open_video(session_dir, trial_idx)

        # Rebuild frame times and mapping
        self.frame_times = np.arange(self.total_frames, dtype=float) / self.fps
        self.frame_pred_idx = self._build_frame_to_pred_index()

        # Clear plot and markers
        self.plot_widget.clear()
        for line in self.marker_lines:
            self.plot_widget.removeItem(line)
        self.marker_lines.clear()

        # Rebuild EMG plot and overlays
        self._setup_emg_plot()

        self.cursor_line = pg.InfiniteLine(
            pos=self.emg.t[0],
            angle=90,
            pen=pg.mkPen("k", width=2),
        )
        self.plot_widget.addItem(self.cursor_line)

        self.window_region = pg.LinearRegionItem(
            values=(self.emg.t[0], self.emg.t[0] + self.window_sec),
            brush=(180, 180, 180, 60),
            movable=False,
        )
        self.window_region.setZValue(10)
        self.plot_widget.addItem(self.window_region)

        self.pred_text_item = pg.TextItem(
            text="Pred: -",
            color="k",
            anchor=(0, 1),
        )
        self.plot_widget.addItem(self.pred_text_item)
        y_top = float(self.emg.ch.max()) + 0.02 * (
            self.emg.ch.max() - self.emg.ch.min() + 1e-6
        )
        self.pred_text_item.setPos(self.emg.t[0], y_top)

        # Update info label with new window counts
        self._update_info_label()

        # Reset playback timer based on new fps
        self.timer.setInterval(int(1000 / self.fps))
        self.current_frame_idx = 0

        # Show first frame of new video
        ret, frame = self.cap.read()
        if ret:
            self._update_for_frame(0, frame)
            self.current_frame_idx = 1

        # Update window title
        self.setWindowTitle(
            f"EMG + Video Viewer - {self.session_dir.name} - trial_{self.trial_idx}"
        )

    # ---------------- Cleanup ----------------

    def closeEvent(self, event: QtGui.QCloseEvent):
        """Make sure video capture is released when window closes."""
        if self.cap is not None:
            self.cap.release()
        event.accept()


# ==========================
# CLI: Choose session/trial
# ==========================

def choose_session_and_trial(root: Path) -> Tuple[Path, int]:
    """
    Command line helper to choose a SESSION_* folder and trial_X.
    """
    if not root.exists():
        raise SystemExit(f"[ERROR] Root folder {root} not found.")

    sessions = sorted(d for d in root.glob("SESSION_*") if d.is_dir())
    if not sessions:
        raise SystemExit(f"[ERROR] No SESSION_* folders in {root}")

    print("Available sessions:")
    for i, s in enumerate(sessions, start=1):
        print(f"  {i}: {s.name}")

    while True:
        try:
            sess_idx = int(input("Select session number: "))
            if 1 <= sess_idx <= len(sessions):
                break
        except ValueError:
            pass
        print("Invalid selection, try again.")

    session_dir = sessions[sess_idx - 1]
    print(f"\nUsing session: {session_dir}\n")

    trial_files = sorted(session_dir.glob("trial_*.txt"))
    if not trial_files:
        raise SystemExit(f"[ERROR] No trial_*.txt files found in {session_dir}")

    trial_numbers: List[int] = []
    print("Available trials in this session:")
    for i, p in enumerate(trial_files, start=1):
        try:
            num = int(p.stem.split("_")[1])
        except Exception:
            num = None
        trial_numbers.append(num if num is not None else -1)
        print(f"  {i}: {p.name}")

    while True:
        try:
            trial_choice = int(input("Select trial number from this list: "))
            if 1 <= trial_choice <= len(trial_files):
                break
        except ValueError:
            pass
        print("Invalid selection, try again.")

    chosen_trial_num = trial_numbers[trial_choice - 1]
    if chosen_trial_num < 0:
        raise SystemExit("[ERROR] Could not parse trial number from filename.")

    print(f"\nReplaying trial_{chosen_trial_num} in {session_dir}\n")
    return session_dir, chosen_trial_num


# ==========================
# Main
# ==========================

def main():
    ROOT = Path("realtimetest")

    session_dir, trial_idx = choose_session_and_trial(ROOT)

    app = QtWidgets.QApplication(sys.argv)
    viewer = EMGVideoViewer(session_dir, trial_idx, window_sec=0.16)
    
    viewer.resize(1200, 800)
    viewer.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
