import sys, os, re, subprocess, math
from datetime import datetime, date, timedelta
import numpy as np
import pandas as pd
import cv2

from PyQt5 import QtCore, QtGui, QtWidgets
import pyqtgraph as pg

# -----------------------------
# Config you can tweak quickly:
# -----------------------------
DEFAULT_DATE_FOR_EMG = date.today()       # Used if EMG timestamps have no date
INITIAL_OFFSET_SEC = 0.0                   # Global time = EMG time + offset
EMG_DOWNSAMPLE_FOR_PLOT = 2                # Plot every Nth point for speed
FFMPEG_PATH = "ffmpeg"                     # If ffmpeg is in PATH, leave as "ffmpeg"

def parse_time_of_day(s):
    # supports "HH:MM:SS.mmm" or "HH:MM:SS" (mmm optional)
    # returns a datetime.time
    # Example: "16:04:11.572"
    return datetime.strptime(s, "%H:%M:%S.%f").time() if "." in s else datetime.strptime(s, "%H:%M:%S").time()

def try_parse_video_start_from_filename(path):
    """
    Try to parse a start datetime from filename patterns like:
    video_2025-08-12_16-04-11.avi
    or 20250812_160411.avi
    Returns datetime or None.
    """
    name = os.path.basename(path)
    # pattern 1: YYYY-mm-dd_HH-MM-SS
    m = re.search(r"(20\d{2}-\d{2}-\d{2})[_\-](\d{2})[-_](\d{2})[-_](\d{2})", name)
    if m:
        dstr, hh, mm, ss = m.group(1), m.group(2), m.group(3), m.group(4)
        return datetime.strptime(f"{dstr} {hh}:{mm}:{ss}", "%Y-%m-%d %H:%M:%S")
    # pattern 2: YYYYmmdd_HHMMSS
    m = re.search(r"(20\d{6})[_\-](\d{6})", name)
    if m:
        dstr, tstr = m.group(1), m.group(2)
        return datetime.strptime(dstr + tstr, "%Y%m%d%H%M%S")
    return None

def load_emg_txt(emg_path, assume_date=DEFAULT_DATE_FOR_EMG):
    """
    Loads EMG file with columns:
    timestamp ch1 ch2 ch3
    Delimiters: space or tab.
    Returns DataFrame with columns ['ts','ch1','ch2','ch3'] and:
      - ts: absolute datetime64[ns]
    """
    # Read as whitespace-delimited
    df = pd.read_csv(emg_path, sep=r"\s+", engine="python", header=None)
    if df.shape[1] < 4:
        raise ValueError("Expected 4 columns: timestamp ch1 ch2 ch3")
    df.columns = ["ts_str", "ch1", "ch2", "ch3"]

    # Parse time-of-day; anchor to assume_date
    times = df["ts_str"].apply(parse_time_of_day)
    ts_abs = [
        datetime.combine(assume_date, t) for t in times
    ]
    df["ts"] = pd.to_datetime(ts_abs)
    df.drop(columns=["ts_str"], inplace=True)
    return df[["ts","ch1","ch2","ch3"]]

class VideoReader:
    def __init__(self, path):
        self.cap = cv2.VideoCapture(path)
        if not self.cap.isOpened():
            raise RuntimeError(f"Cannot open video: {path}")
        self.path = path
        self.fps = self.cap.get(cv2.CAP_PROP_FPS) or 30.0
        self.n_frames = int(self.cap.get(cv2.CAP_PROP_FRAME_COUNT))
        self.width = int(self.cap.get(cv2.CAP_PROP_FRAME_WIDTH))
        self.height = int(self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
        self.duration = self.n_frames / self.fps
        self.start_ts = try_parse_video_start_from_filename(path)  # may be None

    def read_frame_at_time(self, t_sec):
        # clamp to [0, duration)
        t_sec = max(0.0, min(self.duration - 1.0/self.fps, t_sec))
        frame_idx = int(round(t_sec * self.fps))
        frame_idx = max(0, min(self.n_frames-1, frame_idx))
        self.cap.set(cv2.CAP_PROP_POS_FRAMES, frame_idx)
        ok, frame = self.cap.read()
        if not ok:
            return None, frame_idx
        return frame, frame_idx

    def release(self):
        self.cap.release()

class EMGVideoSnipper(QtWidgets.QMainWindow):
    def __init__(self, emg_path, video_path, out_dir, video_start_ts=None, emg_date=DEFAULT_DATE_FOR_EMG):
        super().__init__()
        self.setWindowTitle("EMG + Video Snipper")

        # Load data
        self.emg = load_emg_txt(emg_path, assume_date=emg_date)
        self.vid = VideoReader(video_path)

        # Resolve starts
        self.emg_start_ts = self.emg["ts"].iloc[0]  # absolute
        self.video_start_ts = video_start_ts or self.vid.start_ts
        if self.video_start_ts is None:
            # Fall back: pretend video also starts at emg first ts + INITIAL_OFFSET
            self.video_start_ts = (pd.Timestamp(self.emg_start_ts) - pd.to_timedelta(INITIAL_OFFSET_SEC, unit="s")).to_pydatetime()

        # Offsets & state
        self.offset_sec = INITIAL_OFFSET_SEC  # global_time = emg_time + offset
        self.playing = False
        self.play_rate = 1.0
        self.global_time_sec = 0.0  # seconds since EMG start (after offset)
        self.in_mark = None
        self.out_mark = None
        self.out_dir = out_dir
        os.makedirs(self.out_dir, exist_ok=True)

        # UI
        cw = QtWidgets.QWidget(self)
        self.setCentralWidget(cw)
        layout = QtWidgets.QHBoxLayout(cw)

        # LEFT: Video panel
        left = QtWidgets.QVBoxLayout()
        layout.addLayout(left, 1)

        self.video_label = QtWidgets.QLabel("Video")
        self.video_label.setMinimumSize(480, 270)
        self.video_label.setAlignment(QtCore.Qt.AlignCenter)
        self.video_label.setStyleSheet("background:#111; color:#ddd;")
        left.addWidget(self.video_label, stretch=1)

        controls = QtWidgets.QHBoxLayout()
        left.addLayout(controls)

        self.play_btn = QtWidgets.QPushButton("Play/Pause (Space)")
        self.rewind_btn = QtWidgets.QPushButton("<< 1s")
        self.forward_btn = QtWidgets.QPushButton("1s >>")
        self.export_btn = QtWidgets.QPushButton("Export (E)")

        controls.addWidget(self.rewind_btn)
        controls.addWidget(self.play_btn)
        controls.addWidget(self.forward_btn)
        controls.addStretch(1)
        controls.addWidget(self.export_btn)

        # RIGHT: EMG plot
        right = QtWidgets.QVBoxLayout()
        layout.addLayout(right, 1)

        self.plot = pg.PlotWidget(title="EMG (3 channels)")
        self.plot.showGrid(x=True, y=True, alpha=0.3)
        right.addWidget(self.plot, stretch=1)

        # Prepare time axis as seconds from emg_start
        t_sec_full = (self.emg["ts"] - self.emg_start_ts).dt.total_seconds().to_numpy()
        # Optional downsample for plotting speed
        ds = EMG_DOWNSAMPLE_FOR_PLOT
        self.t_plot = t_sec_full[::ds]
        self.ch_data = [
            self.emg["ch1"].to_numpy()[::ds],
            self.emg["ch2"].to_numpy()[::ds],
            self.emg["ch3"].to_numpy()[::ds],
        ]
        colors = [pg.mkPen(width=1.5), pg.mkPen(width=1.5), pg.mkPen(width=1.5)]
        self.curves = [self.plot.plot(self.t_plot, self.ch_data[i], pen=colors[i]) for i in range(3)]

        # Marker lines
        self.cursor_line = pg.InfiniteLine(angle=90, movable=False, pen=pg.mkPen((200,200,50), width=2))
        self.in_line = pg.InfiniteLine(angle=90, movable=False, pen=pg.mkPen((50,200,50), width=2))
        self.out_line = pg.InfiniteLine(angle=90, movable=False, pen=pg.mkPen((200,50,50), width=2))
        self.plot.addItem(self.cursor_line)

        # Mouse click on plot sets cursor/in/out depending on mode (toggle with buttons, but for now: Shift=IN, Ctrl=OUT, plain=cursor)
        self.plot.scene().sigMouseClicked.connect(self.on_plot_clicked)

        # Signals
        self.play_btn.clicked.connect(self.toggle_play)
        self.rewind_btn.clicked.connect(lambda: self.seek_by(-1.0))
        self.forward_btn.clicked.connect(lambda: self.seek_by(+1.0))
        self.export_btn.clicked.connect(self.export_snip)

        # Timer
        self.timer = QtCore.QTimer(self)
        self.timer.setInterval(int(1000/30))
        self.timer.timeout.connect(self.on_tick)
        self.timer.start()

        # Keyboard shortcuts
        self._setup_shortcuts()

        # Initial render
        self.update_visuals()

    # ------------- Timing helpers -------------
    def emg_time_to_abs(self, emg_sec):
        return self.emg_start_ts + pd.to_timedelta(emg_sec, unit="s")

    def abs_to_emg_time(self, abs_ts):
        return (pd.Timestamp(abs_ts) - self.emg_start_ts).total_seconds()

    def video_abs_to_time_sec(self, abs_ts):
        return (pd.Timestamp(abs_ts) - pd.Timestamp(self.video_start_ts)).total_seconds()

    def global_to_video_time(self, global_emg_sec):
        # global = emg_time + offset  => emg_time = global - offset
        emg_time = global_emg_sec - self.offset_sec
        abs_ts = self.emg_time_to_abs(emg_time)
        return max(0.0, self.video_abs_to_time_sec(abs_ts))

    # ------------- UI logic -------------
    def _setup_shortcuts(self):
        # Space: play/pause
        QtWidgets.QShortcut(QtGui.QKeySequence("Space"), self, activated=self.toggle_play)
        # I/O: mark in/out at current cursor
        QtWidgets.QShortcut(QtGui.QKeySequence("I"), self, activated=self.mark_in_here)
        QtWidgets.QShortcut(QtGui.QKeySequence("O"), self, activated=self.mark_out_here)
        # E: export
        QtWidgets.QShortcut(QtGui.QKeySequence("E"), self, activated=self.export_snip)
        # Arrows: jog
        QtWidgets.QShortcut(QtGui.QKeySequence(QtCore.Qt.Key_Left), self, activated=lambda: self.seek_by(-0.05))
        QtWidgets.QShortcut(QtGui.QKeySequence(QtCore.Qt.Key_Right), self, activated=lambda: self.seek_by(+0.05))
        # [ / ] adjust sync offset by ±20ms
        QtWidgets.QShortcut(QtGui.QKeySequence("["), self, activated=lambda: self.adjust_offset(-0.02))
        QtWidgets.QShortcut(QtGui.QKeySequence("]"), self, activated=lambda: self.adjust_offset(+0.02))

    def toggle_play(self):
        self.playing = not self.playing

    def seek_by(self, delta):
        self.global_time_sec = max(0.0, self.global_time_sec + delta)
        self.update_visuals()

    def adjust_offset(self, delta):
        self.offset_sec += delta
        # keep global_time the same visual position, but video mapping changes
        self.statusBar().showMessage(f"Offset: {self.offset_sec:+.3f} s", 2000)
        self.update_visuals()

    def mark_in_here(self):
        self.in_mark = self.global_time_sec
        if self.in_line not in self.plot.items:
            self.plot.addItem(self.in_line)
        self.in_line.setPos(self.in_mark)
        self.statusBar().showMessage(f"IN set: {self.in_mark:.3f}s", 1500)

    def mark_out_here(self):
        self.out_mark = self.global_time_sec
        if self.out_line not in self.plot.items:
            self.plot.addItem(self.out_line)
        self.out_line.setPos(self.out_mark)
        self.statusBar().showMessage(f"OUT set: {self.out_mark:.3f}s", 1500)

    def on_plot_clicked(self, ev):
        if not self.plot.sceneBoundingRect().contains(ev.scenePos()):
            return
        mousePoint = self.plot.getPlotItem().vb.mapSceneToView(ev.scenePos())
        t_clicked = mousePoint.x()
        modifiers = QtWidgets.QApplication.keyboardModifiers()
        if modifiers & QtCore.Qt.ShiftModifier:
            self.in_mark = max(0.0, float(t_clicked))
            if self.in_line not in self.plot.items:
                self.plot.addItem(self.in_line)
            self.in_line.setPos(self.in_mark)
        elif modifiers & QtCore.Qt.ControlModifier:
            self.out_mark = max(0.0, float(t_clicked))
            if self.out_line not in self.plot.items:
                self.plot.addItem(self.out_line)
            self.out_line.setPos(self.out_mark)
        else:
            # just move cursor & sync video
            self.global_time_sec = max(0.0, float(t_clicked))
        self.update_visuals()

    def on_tick(self):
        if self.playing:
            self.global_time_sec += (self.timer.interval()/1000.0)*self.play_rate
            # clamp to EMG range
            total_emg_span = (self.emg["ts"].iloc[-1] - self.emg_start_ts).total_seconds()
            if self.global_time_sec > total_emg_span:
                self.global_time_sec = total_emg_span
                self.playing = False
        self.update_visuals()

    def update_visuals(self):
        # Update cursor line
        self.cursor_line.setPos(self.global_time_sec)

        # Render video frame matching current global time
        v_t = self.global_to_video_time(self.global_time_sec)
        frame, idx = self.vid.read_frame_at_time(v_t)
        if frame is None:
            return
        # Overlay current time
        display = frame.copy()
        text = f"t={self.global_time_sec:6.3f}s  off={self.offset_sec:+.3f}s  frame={idx}/{self.vid.n_frames}"
        cv2.putText(display, text, (10, 24), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (255,255,255), 2, cv2.LINE_AA)
        if self.in_mark is not None:
            cv2.putText(display, f"IN={self.in_mark:.3f}s", (10, 50), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (50,255,50), 2, cv2.LINE_AA)
        if self.out_mark is not None:
            cv2.putText(display, f"OUT={self.out_mark:.3f}s", (10, 76), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (50,50,255), 2, cv2.LINE_AA)

        # Convert to QImage
        rgb = cv2.cvtColor(display, cv2.COLOR_BGR2RGB)
        h, w, ch = rgb.shape
        qimg = QtGui.QImage(rgb.data, w, h, ch*w, QtGui.QImage.Format_RGB888)
        pix = QtGui.QPixmap.fromImage(qimg).scaled(self.video_label.width(), self.video_label.height(), QtCore.Qt.KeepAspectRatio, QtCore.Qt.SmoothTransformation)
        self.video_label.setPixmap(pix)

    # ------------- Export -------------
    def export_snip(self):
        if self.in_mark is None or self.out_mark is None:
            QtWidgets.QMessageBox.warning(self, "Missing markers", "Set IN (I) and OUT (O) markers first.")
            return
        t0, t1 = sorted([self.in_mark, self.out_mark])
        if t1 - t0 < 1e-3:
            QtWidgets.QMessageBox.warning(self, "Window too small", "IN and OUT are too close.")
            return

        # EMG slice by absolute times
        abs0 = self.emg_start_ts + pd.to_timedelta(t0 - self.offset_sec, unit="s")
        abs1 = self.emg_start_ts + pd.to_timedelta(t1 - self.offset_sec, unit="s")

        emg_slice = self.emg[(self.emg["ts"] >= abs0) & (self.emg["ts"] <= abs1)].copy()
        if emg_slice.empty:
            QtWidgets.QMessageBox.warning(self, "No EMG in range", "The chosen window has no EMG samples (check offset?).")
            return

        # Ask for label & destination names
        label, ok = QtWidgets.QInputDialog.getText(self, "Name this gesture", "Label (used in filenames):", text="gesture1")
        if not ok or not label:
            return

        emg_out_path = os.path.join(self.out_dir, f"gesture_{label}_emg.txt")
        vid_out_path = os.path.join(self.out_dir, f"gesture_{label}_video.avi")

        # Save EMG text
        # Keep the same columns and timestamp format:
        out_df = emg_slice.copy()
        out_df["timestamp"] = out_df["ts"].dt.strftime("%H:%M:%S.%f").str[:-3]  # back to ms
        out_df = out_df[["timestamp","ch1","ch2","ch3"]]
        out_df.to_csv(emg_out_path, sep="\t", index=False, header=False)

        # Trim video using absolute mapping
        v_start_sec = self.global_to_video_time(t0)
        v_end_sec   = self.global_to_video_time(t1)
        v_start_sec = max(0.0, min(self.vid.duration, v_start_sec))
        v_end_sec   = max(0.0, min(self.vid.duration, v_end_sec))
        if v_end_sec <= v_start_sec + (1.0/self.vid.fps):
            QtWidgets.QMessageBox.warning(self, "No Video in range", "The chosen window has no video (check offset?).")
            return

        # Try ffmpeg stream copy
        ok = self.trim_with_ffmpeg(self.vid.path, vid_out_path, v_start_sec, v_end_sec)
        if not ok:
            # fallback to OpenCV
            self.trim_with_opencv(self.vid.path, vid_out_path, v_start_sec, v_end_sec)

        QtWidgets.QMessageBox.information(self, "Exported",
            f"Saved:\n{emg_out_path}\n{vid_out_path}")

    def trim_with_ffmpeg(self, in_path, out_path, t0, t1):
        try:
            dur = max(0.0, t1 - t0)
            cmd = [
                FFMPEG_PATH, "-y",
                "-ss", f"{t0:.3f}",
                "-i", in_path,
                "-t", f"{dur:.3f}",
                "-c", "copy",
                out_path
            ]
            proc = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            return proc.returncode == 0 and os.path.exists(out_path)
        except Exception:
            return False

    def trim_with_opencv(self, in_path, out_path, t0, t1):
        cap = cv2.VideoCapture(in_path)
        if not cap.isOpened():
            return False
        fps = cap.get(cv2.CAP_PROP_FPS) or 30.0
        w = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
        h = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))

        fourcc = cv2.VideoWriter_fourcc(*"XVID")
        out = cv2.VideoWriter(out_path, fourcc, fps, (w, h))

        start_idx = int(round(t0 * fps))
        end_idx   = int(round(t1 * fps))
        start_idx = max(0, start_idx)
        end_idx   = max(start_idx+1, end_idx)

        cap.set(cv2.CAP_PROP_POS_FRAMES, start_idx)
        for i in range(start_idx, end_idx):
            ok, frame = cap.read()
            if not ok:
                break
            out.write(frame)

        out.release()
        cap.release()
        return True


def main():
    import argparse
    ap = argparse.ArgumentParser("EMG + Video Snipper")
    ap.add_argument("--emg", required=True, help="Path to EMG txt (timestamp ch1 ch2 ch3)")
    ap.add_argument("--video", required=True, help="Path to AVI video")
    ap.add_argument("--out", required=True, help="Output folder")
    ap.add_argument("--emg_date", default=None, help="YYYY-mm-dd if EMG times are time-of-day only")
    ap.add_argument("--video_start", default=None, help="YYYY-mm-dd HH:MM:SS if video start not in filename")
    ap.add_argument("--offset", type=float, default=INITIAL_OFFSET_SEC, help="Initial offset seconds (global = emg + offset)")
    args = ap.parse_args()

    emg_date = DEFAULT_DATE_FOR_EMG
    if args.emg_date:
        emg_date = datetime.strptime(args.emg_date, "%Y-%m-%d").date()

    video_start_ts = None
    if args.video_start:
        video_start_ts = datetime.strptime(args.video_start, "%Y-%m-%d %H:%M:%S")

    app = QtWidgets.QApplication(sys.argv)
    w = EMGVideoSnipper(args.emg, args.video, args.out, video_start_ts=video_start_ts, emg_date=emg_date)
    w.offset_sec = args.offset
    w.resize(1200, 650)
    w.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
