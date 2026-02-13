import sys
import os
import glob
import cv2
import numpy as np
from datetime import datetime

from PyQt5.QtWidgets import (
    QApplication, QWidget, QLabel, QVBoxLayout,
    QPushButton, QHBoxLayout
)
from PyQt5.QtGui import QImage, QPixmap
from PyQt5.QtCore import QTimer, Qt

import pyqtgraph as pg


# ----------------------------- EMG LOADING ----------------------------------

def load_emg_file(emg_path):
    """
    Load EMG text file with format:
    timestamp   ch1 ch2 ch3

    Returns:
        times_sec: 1D numpy array of time (seconds) relative to first sample
        emg:       2D numpy array shape (N, 3) for ch1,ch2,ch3
    """
    timestamps = []
    ch1 = []
    ch2 = []
    ch3 = []

    with open(emg_path, "r") as f:
        header = f.readline()  # skip header line
        for line in f:
            line = line.strip()
            if not line:
                continue
            parts = line.split()  # split on any whitespace (tab/space)
            if len(parts) < 4:
                continue
            ts_str, v1_str, v2_str, v3_str = parts[:4]

            # Parse timestamp like "14:14:49.200"
            t = datetime.strptime(ts_str, "%H:%M:%S.%f")
            timestamps.append(t)
            ch1.append(float(v1_str))
            ch2.append(float(v2_str))
            ch3.append(float(v3_str))

    if not timestamps:
        raise ValueError(f"No data found in {emg_path}")

    # Convert to seconds relative to first timestamp
    t0 = timestamps[0]
    times_sec = np.array([(t - t0).total_seconds() for t in timestamps], dtype=float)
    emg = np.column_stack([ch1, ch2, ch3]).astype(float)

    return times_sec, emg


# ----------------------------- VIEWER CLASS ---------------------------------

class EMGVideoViewer(QWidget):
    def __init__(self, video_path, emg_times, emg_data, parent=None):
        super().__init__(parent)

        self.video_path = video_path
        self.emg_times = emg_times
        self.emg_data = emg_data  # shape (N, 3)

        # Open video
        self.cap = cv2.VideoCapture(self.video_path)
        if not self.cap.isOpened():
            raise RuntimeError(f"Could not open video: {self.video_path}")

        self.fps = self.cap.get(cv2.CAP_PROP_FPS)
        if self.fps <= 0:
            self.fps = 30.0  # fallback

        self.frame_idx = 0
        self.is_paused = False

        # ------------------ UI SETUP ------------------
        layout = QVBoxLayout(self)

        # Video label
        self.video_label = QLabel("Video")
        self.video_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(self.video_label)

        # EMG plot
        self.plot_widget = pg.PlotWidget()
        self.plot_widget.showGrid(x=True, y=True)
        self.plot_widget.setLabel('left', 'EMG (V)')
        self.plot_widget.setLabel('bottom', 'Time (s)')
        layout.addWidget(self.plot_widget)

        # Three curves for channels
        self.curve_ch1 = self.plot_widget.plot(pen='r', name="ch1")
        self.curve_ch2 = self.plot_widget.plot(pen='g', name="ch2")
        self.curve_ch3 = self.plot_widget.plot(pen='b', name="ch3")

        # Match video & EMG durations roughly
        self.plot_widget.setXRange(0, self.emg_times[-1], padding=0)

        # ---- Control buttons ----
        btn_layout = QHBoxLayout()
        self.btn_play_pause = QPushButton("Pause")   # starts playing, so label = Pause
        self.btn_replay = QPushButton("Replay")
        btn_layout.addWidget(self.btn_play_pause)
        btn_layout.addWidget(self.btn_replay)
        layout.addLayout(btn_layout)

        self.btn_play_pause.clicked.connect(self.toggle_play_pause)
        self.btn_replay.clicked.connect(self.replay)

        # Timer for video/plot updates
        self.timer = QTimer(self)
        self.interval_ms = int(1000 / self.fps)
        self.timer.timeout.connect(self._update_frame)
        self.timer.start(self.interval_ms)

    def toggle_play_pause(self):
        """Toggle between playing and pausing the video/EMG."""
        if self.is_paused:
            # resume
            self.timer.start(self.interval_ms)
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
        else:
            # pause
            self.timer.stop()
            self.is_paused = True
            self.btn_play_pause.setText("Play")

    def replay(self):
        """Restart video and EMG from the beginning."""
        # Reset video to first frame
        self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
        self.frame_idx = 0

        # Clear EMG curves
        self.curve_ch1.clear()
        self.curve_ch2.clear()
        self.curve_ch3.clear()

        # Make sure we are playing
        if self.is_paused:
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
        self.timer.start(self.interval_ms)

    def _update_frame(self):
        ret, frame = self.cap.read()
        if not ret:
            # Reached end of video
            self.timer.stop()
            # Reset to beginning so user can just hit Play or Replay
            self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
            self.frame_idx = 0
            self.is_paused = True
            self.btn_play_pause.setText("Play")
            return

        self.frame_idx += 1
        current_time_sec = self.frame_idx / self.fps

        # ---- update video ----
        frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        h, w, ch = frame_rgb.shape
        bytes_per_line = ch * w
        qimg = QImage(frame_rgb.data, w, h, bytes_per_line, QImage.Format_RGB888)
        self.video_label.setPixmap(QPixmap.fromImage(qimg))

        # ---- update EMG plot ----
        # find how many EMG points fall up to current video time
        idx = np.searchsorted(self.emg_times, current_time_sec, side="right")

        if idx > 0:
            t = self.emg_times[:idx]
            y1 = self.emg_data[:idx, 0]
            y2 = self.emg_data[:idx, 1]
            y3 = self.emg_data[:idx, 2]

            self.curve_ch1.setData(t, y1)
            self.curve_ch2.setData(t, y2)
            self.curve_ch3.setData(t, y3)


# ----------------------------- MAIN SCRIPT ----------------------------------

def main():
    # Ask for folder path
    folder = input("Enter path to folder (e.g. ...\\finalemg\\set1\\act1): ").strip()
    if not folder:
        print("No folder given.")
        return
    if not os.path.isdir(folder):
        print("Folder does not exist.")
        return

    # Find available trial/video numbers
    txt_files = glob.glob(os.path.join(folder, "trial_*.txt"))
    video_files = glob.glob(os.path.join(folder, "video_*.avi"))

    def extract_num(path, prefix):
        base = os.path.basename(path)
        name, _ = os.path.splitext(base)
        # e.g. "trial_3" -> "3"
        return int(name.replace(prefix, ""))

    txt_nums = {extract_num(p, "trial_"): p for p in txt_files}
    vid_nums = {extract_num(p, "video_"): p for p in video_files}

    common_trials = sorted(set(txt_nums.keys()) & set(vid_nums.keys()))
    if not common_trials:
        print("No matching trial_X.txt and video_X.avi found.")
        return

    print("Available trials:", common_trials)
    while True:
        try:
            n = int(input("Which trial number do you want to view? "))
        except ValueError:
            print("Please enter a valid integer.")
            continue
        if n not in common_trials:
            print("That trial does not exist. Choose one of:", common_trials)
        else:
            break

    emg_path = txt_nums[n]
    video_path = vid_nums[n]

    print(f"Using EMG file:   {emg_path}")
    print(f"Using VIDEO file: {video_path}")

    # Load EMG data
    emg_times, emg_data = load_emg_file(emg_path)

    # Run Qt app
    app = QApplication(sys.argv)
    viewer = EMGVideoViewer(video_path, emg_times, emg_data)
    viewer.setWindowTitle(f"Trial {n} - EMG + Video")
    viewer.resize(900, 700)
    viewer.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
