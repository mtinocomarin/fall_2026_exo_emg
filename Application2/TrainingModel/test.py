# -*- coding: utf-8 -*-
from __future__ import annotations

import csv
from datetime import datetime
from pathlib import Path
from typing import Optional, Tuple

import numpy as np
import cv2

from PyQt5.QtWidgets import (
    QApplication, QWidget, QLabel, QPushButton, QHBoxLayout, QVBoxLayout, QSplitter
)
from PyQt5.QtCore import QTimer, Qt, QPointF
from PyQt5.QtGui import QImage, QPixmap

import pyqtgraph as pg


class EMGVideoSyncPlayer:
    """
    Full, self-contained class to play a video (.avi) and plot EMG (.txt) in sync.

    Usage:
        player = EMGVideoSyncPlayer(
            folder=r"C:\\path\\to\\finalemg\\set2\\act1",
            preferred_name="video_1",    # optional (will add .avi/.txt as needed)
            video_path=None,             # pass a Path/str to override auto-detect
            emg_path=None,               # pass a Path/str to override auto-detect
            scale=0.9,                   # video display scale
            downsample=1,                # EMG downsample factor for plotting
            time_offset=0.0              # seconds; + means EMG lags video
        )
        player.run()

    Controls:
      Buttons: « 5s | ‹ 1f | Play/Pause | 1f › | 5s » | Offset -0.1s | Offset +0.1s
      Keys:    Space(play/pause), Esc(quit), Left/Right(±5s), A/D(±1 frame),
               J/K (EMG offset −/+ 0.1s)

    Plot interaction:
      - Click on the EMG plot to seek the video to that time.
    """

    # --------- public API ---------
    def __init__(
        self,
        folder: Optional[str | Path] = None,
        preferred_name: Optional[str] = None,
        video_path: Optional[str | Path] = None,
        emg_path: Optional[str | Path] = None,
        scale: float = 1.0,
        downsample: int = 1,
        time_offset: float = 0.0,
        view_span: float = 10.0,
    ):
        self.folder = Path(folder) if folder else None
        self.preferred_name = preferred_name
        self.scale = float(scale)
        self.downsample = int(max(1, downsample))
        self.time_offset = float(time_offset)  # seconds (EMG relative to video)
        self.view_span = float(view_span)      # seconds visible around cursor

        # Resolve paths (explicit beats auto)
        self.video_path = Path(video_path) if video_path else None
        self.emg_path = Path(emg_path) if emg_path else None

        self._mark_times = []      # EMG times (sec) for up to 2 marks
        self._mark_lines = []      # pg.InfiniteLine objects
        self._mark_span = None     # pg.LinearRegionItem (shaded region)
        self.sel_times = None      # (t0, t1)
        self.sel_indices = None    # (i0, i1)


        if self.video_path is None and self.folder is not None:
            self.video_path = self._auto_find(self.folder, ".avi")
        if self.emg_path is None and self.folder is not None:
            self.emg_path = self._auto_find(self.folder, ".txt")

        if self.video_path is None or not Path(self.video_path).exists():
            raise FileNotFoundError("Video file not found. Provide video_path or folder with .avi.")
        if self.emg_path is None or not Path(self.emg_path).exists():
            raise FileNotFoundError("EMG file not found. Provide emg_path or folder with .txt.")

        # Load EMG once
        self.t_emg, self.X_emg = self._load_emg_txt(self.emg_path, self.downsample)
        if self.X_emg.ndim != 2 or self.X_emg.shape[0] != self.t_emg.size:
            raise ValueError("EMG data shape mismatch.")
        self.n_ch = self.X_emg.shape[1]

        # Qt/Video state (created in _build_ui)
        self._app = None
        self._owns_app = False
        self._timer: Optional[QTimer] = None
        self._playing = True
        self._cap: Optional[cv2.VideoCapture] = None
        self._fps: float = 30.0
        self._total_frames: int = 0
        self._delay_ms: int = 33

        # Widgets
        self._w: Optional[QWidget] = None
        self._video_label: Optional[QLabel] = None
        self._plot: Optional[pg.PlotWidget] = None
        self._cursor: Optional[pg.InfiniteLine] = None
        self._curves: list = []

    def run(self):
        """Start the GUI player."""
        self._ensure_app()
        self._build_ui()
        self._w.show()
        if self._owns_app:
            self._app.exec_()


    def mark_here(self):
        """
        Mark current position (video time + offset) on the EMG plot.
        First press sets start; second press sets end and shades the span.
        If both already set, prints a hint to press Redo.
        """
        import numpy as np
        import pyqtgraph as pg
        from PyQt5.QtCore import Qt

        if self._plot is None:
            return

        # Current EMG time from cursor (video time + offset), clamped to EMG range
        t_vid = self._current_video_time() + self.time_offset
        t_min, t_max = float(self.t_emg[0]), float(self.t_emg[-1])
        t = max(t_min, min(t_vid, t_max))

        # Already have 2 marks?
        if len(self._mark_times) >= 2:
            print("Two marks already set. Click 'Redo' to clear.")
            return

        # Create a dashed vertical line
        pen = pg.mkPen((255, 215, 0), width=1.5, style=Qt.DashLine)
        vline = pg.InfiniteLine(pos=t, angle=90, pen=pen)
        vline.setZValue(15)
        self._plot.addItem(vline)

        # Save state
        self._mark_times.append(float(t))
        self._mark_lines.append(vline)

        # If we now have two, create the shaded span and compute indices
        if len(self._mark_times) == 2:
            t0, t1 = sorted(self._mark_times)
            # Shaded span (not draggable)
            self._mark_span = pg.LinearRegionItem(values=(t0, t1), brush=(255, 215, 0, 60))
            self._mark_span.setMovable(False)
            self._mark_span.setZValue(9)
            self._plot.addItem(self._mark_span)

            # Convert to indices
            i0 = int(np.searchsorted(self.t_emg, t0, side="left"))
            i1 = int(np.searchsorted(self.t_emg, t1, side="right")) - 1
            i0 = max(0, min(i0, len(self.t_emg) - 1))
            i1 = max(0, min(i1, len(self.t_emg) - 1))
            if i0 > i1:
                i0, i1 = i1, i0

            self.sel_times = (t0, t1)
            self.sel_indices = (i0, i1)

            print(f"[mark] t=({t0:.3f}s, {t1:.3f}s)  idx=({i0}, {i1})  n={i1-i0+1}")
        else:
            print(f"[mark] t=({t:.3f}s) — set second mark to complete range.")


    def redo_marks(self):
        """Clear both marks and the shaded span."""
        if self._plot is None:
            return
        # Remove lines
        for ln in self._mark_lines:
            try:
                self._plot.removeItem(ln)
            except Exception:
                pass
        self._mark_lines.clear()
        self._mark_times.clear()

        # Remove span
        if self._mark_span is not None:
            try:
                self._plot.removeItem(self._mark_span)
            except Exception:
                pass
            self._mark_span = None

        # Clear selection info
        self.sel_times = None
        self.sel_indices = None
        print("[mark] cleared.")


    def add_two_markers(self, t0: float | None = None, t1: float | None = None):
        """
        Add a draggable two-handle region (two marks) on the EMG plot.
        - Drag the handles to set start/end.
        - Stores selection in:
            self.sel_times   = (t_start_sec, t_end_sec)
            self.sel_indices = (i_start, i_end)  # indices into self.X_emg
        Prints updates whenever the region moves.
        Call this AFTER the UI is built (e.g., at end of _build_ui()).
        """
        import numpy as np
        import pyqtgraph as pg

        if self._plot is None:
            raise RuntimeError("EMG plot not initialized yet. Call after _build_ui().")

        t_min, t_max = float(self.t_emg[0]), float(self.t_emg[-1])
        if t0 is None or t1 is None:
            # default region centered, ~1/5 of visible span
            span = max(1e-6, (t_max - t_min) * 0.2)
            center = (t_min + t_max) * 0.5
            t0 = max(t_min, center - span * 0.5)
            t1 = min(t_max, center + span * 0.5)

        # clamp & order
        t0 = max(t_min, min(t0, t_max))
        t1 = max(t_min, min(t1, t_max))
        if t0 > t1:
            t0, t1 = t1, t0

        # remove previous region if any
        if hasattr(self, "_marker_region") and self._marker_region is not None:
            try:
                self._plot.removeItem(self._marker_region)
            except Exception:
                pass

        # create region (two draggable markers with shaded span)
        self._marker_region = pg.LinearRegionItem(values=(t0, t1), brush=(255, 215, 0, 50))
        self._marker_region.setZValue(10)  # draw above curves
        self._plot.addItem(self._marker_region)

        def _update_selection():
            r0, r1 = self._marker_region.getRegion()
            # clamp to EMG time range
            r0 = max(t_min, min(r0, t_max))
            r1 = max(t_min, min(r1, t_max))
            if r0 > r1:
                r0, r1 = r1, r0

            # convert to sample indices
            i0 = int(np.searchsorted(self.t_emg, r0, side="left"))
            i1 = int(np.searchsorted(self.t_emg, r1, side="right")) - 1
            i0 = max(0, min(i0, len(self.t_emg) - 1))
            i1 = max(0, min(i1, len(self.t_emg) - 1))
            if i0 > i1:
                i0, i1 = i1, i0

            # store
            self.sel_times = (float(r0), float(r1))
            self.sel_indices = (int(i0), int(i1))

            print(f"[markers] t=({self.sel_times[0]:.3f}s, {self.sel_times[1]:.3f}s) "
                f"idx=({self.sel_indices[0]}, {self.sel_indices[1]}) "
                f"n={self.sel_indices[1]-self.sel_indices[0]+1}")

        self._marker_region.sigRegionChanged.connect(_update_selection)
        _update_selection()


    # --------- internals: path & emg loading ---------
    def _auto_find(self, folder: Path, suffix: str) -> Optional[Path]:
        """Find file by preferred_name or first match (non-recursive, then recursive)."""
        if not folder.exists() or not folder.is_dir():
            return None

        # Preferred
        if self.preferred_name:
            p = folder / self.preferred_name
            if p.suffix.lower() != suffix.lower():
                p = p.with_suffix(suffix)
            if p.exists():
                return p

        # Non-recursive
        matches = list(folder.glob(f"*{suffix}"))
        if matches:
            return matches[0]

        # Recursive
        matches = list(folder.rglob(f"*{suffix}"))
        if matches:
            return matches[0]

        return None

    from datetime import datetime

    @staticmethod
    def _parse_time_to_seconds(s: str) -> float:
        s = s.strip().replace(',', '.')
        for fmt in ("%Y-%m-%d %H:%M:%S.%f",
                    "%Y-%m-%d %H:%M:%S",
                    "%H:%M:%S.%f",
                    "%H:%M:%S"):
            try:
                t = datetime.strptime(s, fmt)
                return t.hour * 3600 + t.minute * 60 + t.second + (t.microsecond / 1e6)
            except Exception:
                pass
        return float(s)


    def _load_emg_txt(self, path: Path, downsample: int):
        import re
        import numpy as np

        times = []
        rows = []

        # quick patterns to detect date/time tokenization
        date_re = re.compile(r"^\d{4}-\d{2}-\d{2}$")
        time_re = re.compile(r"^\d{2}:\d{2}:\d{2}(?:[.,]\d+)?$")

        with open(path, "r", encoding="utf-8", errors="ignore", newline="") as f:
            for line in f:
                s = line.strip()
                if not s:
                    continue

                # skip header
                if s.lower().startswith("timestamp"):
                    continue

                parts = s.replace('\ufeff', '').replace('\xa0', ' ').split()
                if not parts:
                    continue

                # Handle 'YYYY-MM-DD' 'HH:MM:SS.mmm' split across two columns
                ts_str = None
                start_idx = 1
                if len(parts) >= 5 and date_re.match(parts[0]) and time_re.match(parts[1]):
                    ts_str = parts[0] + " " + parts[1]
                    start_idx = 2  # data starts after the two timestamp tokens
                elif len(parts) >= 4:
                    ts_str = parts[0]
                    start_idx = 1
                else:
                    continue  # not enough columns

                try:
                    tsec = self._parse_time_to_seconds(ts_str)
                    v1 = float(parts[start_idx + 0])
                    v2 = float(parts[start_idx + 1])
                    v3 = float(parts[start_idx + 2])
                except Exception:
                    continue

                times.append(tsec)
                rows.append((v1, v2, v3))

        if not times:
            raise ValueError(f"Could not parse EMG data from {path}")

        t = np.asarray(times, dtype=float)
        X = np.asarray(rows, dtype=float)

        # enforce non-decreasing time
        keep = np.concatenate(([True], np.diff(t) >= 0))
        if not np.all(keep):
            t = t[keep]; X = X[keep]

        # normalize start to 0
        t = t - t[0]

        # estimate fs
        if t.size > 1:
            dt = np.diff(t)
            dt = dt[dt > 0]
            self.emg_fs = float(1.0 / np.median(dt)) if dt.size else float("nan")
        else:
            self.emg_fs = float("nan")

        # optional downsample
        if downsample > 1:
            t = t[::downsample]
            X = X[::downsample, :]

        # fill NaNs with per-channel mean
        if np.isnan(X).any():
            col_means = np.nanmean(X, axis=0)
            inds = np.where(np.isnan(X))
            X[inds] = np.take(col_means, inds[1])

        return t, X

    # --------- internals: Qt / video / plotting ---------
    def _ensure_app(self):
        self._app = QApplication.instance()
        if self._app is None:
            self._app = QApplication([])
            self._owns_app = True

    def _build_ui(self):
        # Window
        self._w = _RootWindow(self)
        self._w.setWindowTitle(f"{Path(self.video_path).name}   |   {Path(self.emg_path).name}")
        self._w.setMinimumSize(900, 650)

        # Video
        self._video_label = QLabel("Loading…")
        self._video_label.setAlignment(Qt.AlignCenter)
        self._video_label.setMinimumHeight(220)

        # Controls
        btn_mark = QPushButton("Mark")
        btn_redo = QPushButton("Redo")
        btn_back5 = QPushButton("« 5s")
        btn_prev1 = QPushButton("‹ 1f")
        btn_play  = QPushButton("Pause")
        btn_next1 = QPushButton("1f ›")
        btn_fwd5  = QPushButton("5s »")
        btn_off_m = QPushButton("Offset -0.1s")
        btn_off_p = QPushButton("Offset +0.1s")
        btn_clip = QPushButton("Clip")


        ctl = QHBoxLayout()
        ctl.addStretch(1)
        for b in (btn_back5, btn_prev1, btn_play, btn_next1, btn_fwd5,
                btn_off_m, btn_off_p, btn_mark, btn_redo, btn_clip):
            ctl.addWidget(b)

        ctl.addStretch(1)

        # Plot
        pg.setConfigOptions(antialias=True)
        self._plot = pg.PlotWidget(title="EMG")
        self._plot.showGrid(x=True, y=True, alpha=0.2)
        self._plot.setLabel("bottom", "Time", units="s")
        self._plot.setLabel("left", "Amplitude")

        # Curves (auto-colors)
        self._curves = []
        for ch in range(self.n_ch):
            c = self._plot.plot(self.t_emg, self.X_emg[:, ch], pen=pg.mkPen(width=1))
            self._curves.append(c)

        # Cursor
        self._cursor = pg.InfiniteLine(angle=90, movable=False)
        self._plot.addItem(self._cursor)

        # Click-to-seek
        self._plot.scene().sigMouseClicked.connect(self._on_plot_click)

        # Layout
        splitter = QSplitter(Qt.Vertical)
        top = QWidget()
        top_layout = QVBoxLayout(top)
        top_layout.addWidget(self._video_label)
        splitter.addWidget(top)
        splitter.addWidget(self._plot)
        splitter.setSizes([420, 300])

        main = QVBoxLayout(self._w)
        main.addWidget(splitter)
        main.addLayout(ctl)

        # Video capture
        self._cap = cv2.VideoCapture(str(self.video_path))
        if not self._cap.isOpened():
            raise RuntimeError(f"Could not open video: {self.video_path}")

        self._fps = float(self._cap.get(cv2.CAP_PROP_FPS) or 0.0)
        if self._fps <= 1e-3:
            self._fps = 30.0
        self._total_frames = int(self._cap.get(cv2.CAP_PROP_FRAME_COUNT) or 0)
        self._delay_ms = max(1, int(1000 / self._fps))

        # Timer
        self._timer = QTimer(self._w)
        self._timer.timeout.connect(self._on_next_frame)
        self._playing = True
        self._timer.start(self._delay_ms)

        # Wire controls
        
        btn_mark.clicked.connect(self.mark_here)
        btn_redo.clicked.connect(self.redo_marks)

        btn_back5.clicked.connect(lambda: self._seek_seconds(-5))
        btn_prev1.clicked.connect(lambda: self._seek_frames(-1))
        btn_play.clicked.connect(lambda: self._toggle_play(btn_play))
        btn_next1.clicked.connect(lambda: self._seek_frames(+1))
        btn_fwd5.clicked.connect(lambda: self._seek_seconds(+5))
        btn_off_m.clicked.connect(lambda: self._adjust_offset(-0.1))
        btn_clip.clicked.connect(self.clip_current_selection)
        btn_off_p.clicked.connect(lambda: self._adjust_offset(+0.1))

        # Initial paint
        self._refresh_frame(paused=True)
        self._update_cursor_and_view()

        # Initial paint
        self._refresh_frame(paused=True)
        self._update_cursor_and_view()


    # ---- plot click -> seek video ----
    def _on_plot_click(self, ev):
        if ev.button() != Qt.LeftButton:
            return
        vb = self._plot.getViewBox()
        mouse_point = vb.mapSceneToView(ev.scenePos())
        if not isinstance(mouse_point, QPointF):
            return
        t = float(mouse_point.x())
        # Clamp to EMG range
        t = max(float(self.t_emg[0]), min(t, float(self.t_emg[-1])))
        # Convert EMG time to video time (reverse offset)
        t_video = t - self.time_offset
        self._seek_to_time(max(0.0, t_video))

    # ---- keyboard handling ----
    def _key_press(self, key: int, btn_play: Optional[QPushButton] = None):
        if key == Qt.Key_Space:
            self._toggle_play(btn_play)
        elif key == Qt.Key_Escape:
            self._cleanup_and_close()
        elif key == Qt.Key_Left:
            self._seek_seconds(-5)
        elif key == Qt.Key_Right:
            self._seek_seconds(+5)
        elif key == Qt.Key_A:
            self._seek_frames(-1)
        elif key == Qt.Key_D:
            self._seek_frames(+1)
        elif key == Qt.Key_J:
            self._adjust_offset(-0.1)
        elif key == Qt.Key_K:
            self._adjust_offset(+0.1)
        elif key == Qt.Key_C:
            self.clip_current_selection()


        elif key == Qt.Key_M:            # ← add
            self.mark_here()
        elif key == Qt.Key_R:            # ← add
            self.redo_marks()

    # ---- playback helpers ----
    def _current_frame_index(self) -> int:
        return int(self._cap.get(cv2.CAP_PROP_POS_FRAMES))

    def _current_video_time(self) -> float:
        t_ms = self._cap.get(cv2.CAP_PROP_POS_MSEC)
        if t_ms and t_ms > 0:
            return t_ms / 1000.0
        idx = self._current_frame_index()
        return idx / self._fps

    def _toggle_play(self, btn_play: Optional[QPushButton]):
        self._playing = not self._playing
        if btn_play is not None:
            btn_play.setText("Play" if not self._playing else "Pause")
        if self._playing:
            self._timer.start(self._delay_ms)
        else:
            self._timer.stop()
            self._refresh_frame(paused=True)
            self._update_cursor_and_view()

    def _seek_frames(self, delta: int):
        idx = self._current_frame_index()
        target = max(0, min(idx + delta, self._total_frames - 1))
        self._cap.set(cv2.CAP_PROP_POS_FRAMES, target)
        if self._playing:
            self._on_next_frame()
        else:
            self._refresh_frame(paused=True)
            self._update_cursor_and_view()

    def _seek_seconds(self, seconds: float):
        idx = self._current_frame_index()
        target = max(0, min(idx + int(round(seconds * self._fps)), self._total_frames - 1))
        self._cap.set(cv2.CAP_PROP_POS_FRAMES, target)
        if self._playing:
            self._on_next_frame()
        else:
            self._refresh_frame(paused=True)
            self._update_cursor_and_view()

    def _seek_to_time(self, seconds: float):
        target = int(round(seconds * self._fps))
        target = max(0, min(target, self._total_frames - 1))
        self._cap.set(cv2.CAP_PROP_POS_FRAMES, target)
        if self._playing:
            self._on_next_frame()
        else:
            self._refresh_frame(paused=True)
            self._update_cursor_and_view()

    def _on_next_frame(self):
        ok, frame = self._cap.read()
        if not ok:
            self._timer.stop()
            return
        self._display_frame(frame)
        self._update_cursor_and_view()

    def _refresh_frame(self, paused: bool = False):
        pos = self._current_frame_index()
        ok, frame = self._cap.read()
        if not ok:
            return
        self._display_frame(frame)
        # Rewind so we don't advance when paused
        if paused:
            self._cap.set(cv2.CAP_PROP_POS_FRAMES, pos)

    def _display_frame(self, frame: np.ndarray):
        if self.scale != 1.0:
            h, w = frame.shape[:2]
            frame = cv2.resize(frame, (int(w * self.scale), int(h * self.scale)))
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        h, w, ch = rgb.shape
        img = QImage(rgb.data, w, h, ch * w, QImage.Format_RGB888).copy()
        self._video_label.setPixmap(QPixmap.fromImage(img))

    # ---- EMG cursor + view window ----
    def _update_cursor_and_view(self):
        t_vid = self._current_video_time() + self.time_offset
        t_min, t_max = float(self.t_emg[0]), float(self.t_emg[-1])
        t_clamped = max(t_min, min(t_vid, t_max))
        self._cursor.setPos(t_clamped)
        half = self.view_span / 2.0
        self._plot.setXRange(max(t_min, t_clamped - half), min(t_max, t_clamped + half), padding=0.02)

        # Update window title with current offset
        self._w.setWindowTitle(
            f"{Path(self.video_path).name}   |   {Path(self.emg_path).name}   (offset={self.time_offset:+.3f}s)"
        )

    def _adjust_offset(self, delta: float):
        self.time_offset += float(delta)
        self._update_cursor_and_view()

    # ---- teardown ----
    def _cleanup_and_close(self):
        try:
            if self._timer:
                self._timer.stop()
        except Exception:
            pass
        if self._cap is not None:
            self._cap.release()
        self._w.close()

    def clip_current_selection(self, folder_name: str | None = None):
        """
        Save the marked segment to a folder in the SAME directory as this program.
        - Folder auto-names: clip1, clip2, ... (or <folder_name>, <folder_name>1, <folder_name>2, ...)
        - EMG slice -> <emg_stem>_clip.txt  (tab-delimited, time_s from selection start)
        - Video clip -> <video_stem>_clip.avi  (tries source FOURCC, else XVID)
        Requires exactly two marks (self.sel_times / self.sel_indices).
        """
        import sys
        from pathlib import Path
        import numpy as np
        import cv2

        # --- preconditions ---
        if not getattr(self, "sel_times", None) or not getattr(self, "sel_indices", None):
            print("[clip] Set two marks first (use Mark twice).")
            return
        t0, t1 = self.sel_times
        i0, i1 = self.sel_indices
        if i0 > i1 or t0 > t1:
            print("[clip] Invalid selection.")
            return

        # --- program directory (where this .py lives); fallback to CWD if __file__ is missing ---
        try:
            prog_dir = Path(__file__).resolve().parent
        except NameError:
            # e.g., in interactive/packaged contexts
            prog_dir = Path(sys.argv[0]).resolve().parent if sys.argv and sys.argv[0] else Path.cwd()

        # --- choose output folder name (auto-increment if exists) ---
        base = (folder_name.strip() if folder_name else "clip")
        # default behavior starts at clip1/charlie (not "clip" without number)
        n = 1
        out_dir = prog_dir / f"{base}{n}"
        while out_dir.exists():
            n += 1
            out_dir = prog_dir / f"{base}{n}"
        out_dir.mkdir(parents=True, exist_ok=False)
        print(f"[clip] Writing to: {out_dir}")

        # --- EMG slice (tab-delimited .txt) ---
        emg_stem = Path(self.emg_path).stem
        emg_out = out_dir / f"{emg_stem}_clip.txt"

        Xseg = self.X_emg[i0:i1 + 1, :]
        tseg_abs = self.t_emg[i0:i1 + 1]             # absolute seconds from EMG file start
        tseg = tseg_abs - tseg_abs[0]                # re-zero so selection starts at 0.0s

        with open(emg_out, "w", encoding="utf-8") as f:
            cols = [f"ch{c+1}" for c in range(self.n_ch)]
            f.write("time_s\t" + "\t".join(cols) + "\n")
            for ts, row in zip(tseg, Xseg):
                vals = "\t".join(f"{v:.6f}" for v in row)
                f.write(f"{ts:.6f}\t{vals}\n")
        print(f"[clip] EMG saved: {emg_out}")

        # --- Video clip (AVI) ---
        # EMG_time = Video_time + time_offset  ->  Video_time = EMG_time - time_offset
        tv0 = max(0.0, t0 - self.time_offset)
        tv1 = max(0.0, t1 - self.time_offset)
        if tv0 > tv1:
            tv0, tv1 = tv1, tv0

        cap = cv2.VideoCapture(str(self.video_path))
        if not cap.isOpened():
            print("[clip] Could not re-open video for clipping.")
            return

        fps = cap.get(cv2.CAP_PROP_FPS) or self._fps or 30.0
        total = int(cap.get(cv2.CAP_PROP_FRAME_COUNT) or self._total_frames or 0)
        w = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH) or 0)
        h = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT) or 0)

        start_f = max(0, min(int(round(tv0 * fps)), max(0, total - 1)))
        end_f   = max(0, min(int(round(tv1 * fps)), max(0, total - 1)))
        if end_f < start_f:
            start_f, end_f = end_f, start_f

        # Try to preserve source FOURCC; fallback to XVID if invalid
        fourcc_int = int(cap.get(cv2.CAP_PROP_FOURCC) or 0)
        fourcc_str = "".join([chr((fourcc_int >> (8 * i)) & 0xFF) for i in range(4)])
        if not fourcc_str.strip() or any(ord(c) < 32 or ord(c) > 126 for c in fourcc_str):
            fourcc_str = "XVID"
        fourcc = cv2.VideoWriter_fourcc(*fourcc_str)

        vid_stem = Path(self.video_path).stem
        vid_out = out_dir / f"{vid_stem}_clip.avi"
        writer = cv2.VideoWriter(str(vid_out), fourcc, fps, (w, h))

        cap.set(cv2.CAP_PROP_POS_FRAMES, start_f)
        written = 0
        frame_idx = start_f
        while frame_idx <= end_f:
            ok, frame = cap.read()
            if not ok:
                break
            writer.write(frame)
            written += 1
            frame_idx += 1

        writer.release()
        cap.release()

        if written == 0:
            print("[clip] No frames written (selection may be out of video range).")
            try:
                vid_out.unlink(missing_ok=True)
            except Exception:
                pass
            return

        print(f"[clip] Video saved: {vid_out}  (frames: {written}, fps: {fps:.3f}, fourcc='{fourcc_str}')")



class _RootWindow(QWidget):
    """Small helper to route key events back to the player."""
    def __init__(self, player: EMGVideoSyncPlayer):
        super().__init__()
        self._player = player

    def keyPressEvent(self, e):
        self._player._key_press(e.key())
        super().keyPressEvent(e)

    def closeEvent(self, e):
        # Ensure video/timer are torn down
        try:
            if self._player._timer:
                self._player._timer.stop()
        except Exception:
            pass
        if self._player._cap is not None:
            self._player._cap.release()
        super().closeEvent(e)



if __name__ == "__main__":
    # Example: auto-find under folder using preferred base name (no extension needed)
    player = EMGVideoSyncPlayer(
        folder=r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\session_20251111_163323\set1\act1",
        preferred_name="video_1",
        scale=0.9,
        downsample=2,
        time_offset=0.0,
    )
    player.run()
