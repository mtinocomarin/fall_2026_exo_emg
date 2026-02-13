
import sys
import os
import glob
import cv2
import numpy as np
from datetime import datetime

from PyQt5.QtWidgets import (
    QApplication, QWidget, QLabel, QVBoxLayout,
    QPushButton, QHBoxLayout, QLineEdit, QInputDialog
)
from PyQt5.QtGui import QImage, QPixmap
from PyQt5.QtCore import QTimer, Qt

import pyqtgraph as pg


# ----------------------------- EMG LOADING ----------------------------------

def load_emg_file(emg_path):
    """
    Load EMG text file.

    Supports two line formats (after header):
    1) time-only:
         16:04:11.572   1.29 1.32 1.31
    2) date + time:
         2025-07-30 16:04:11.572   1.29 1.32 1.31

    Returns:
        times_sec: 1D numpy array of time (seconds) relative to first sample
        emg:       2D numpy array of shape (N, 3)
    """
    timestamps = []
    ch1 = []
    ch2 = []
    ch3 = []

    with open(emg_path, "r") as f:
        header = f.readline()  # skip the header

        for line in f:
            line = line.strip()
            if not line:
                continue

            parts = line.split()
            if len(parts) < 4:
                continue

            # CASE 1: TIME-ONLY FORMAT  "16:04:11.572   1.2  1.3  1.1"
            if ":" in parts[0] and "-" not in parts[0]:
                ts_str = parts[0]
                v1_str, v2_str, v3_str = parts[1:4]
                t = datetime.strptime(ts_str, "%H:%M:%S.%f")

            else:
                # CASE 2: DATE + TIME FORMAT
                # "2025-07-30 16:04:11.572   1.2  1.3  1.1"
                if len(parts) < 5:
                    continue

                date_str = parts[0]
                time_str = parts[1]
                v1_str, v2_str, v3_str = parts[2:5]
                dt_str = f"{date_str} {time_str}"

                try:
                    t = datetime.strptime(dt_str, "%Y-%m-%d %H:%M:%S.%f")
                except ValueError:
                    t = datetime.strptime(dt_str, "%Y-%m-%d %H:%M:%S")

            timestamps.append(t)
            ch1.append(float(v1_str))
            ch2.append(float(v2_str))
            ch3.append(float(v3_str))

    if not timestamps:
        raise ValueError(f"No data found in {emg_path}")

    # convert timestamps to relative seconds
    t0 = timestamps[0]
    times_sec = np.array([(t - t0).total_seconds() for t in timestamps], dtype=float)

    # build EMG array
    emg = np.column_stack([ch1, ch2, ch3]).astype(float)
    return times_sec, emg


# ----------------------------- HELPER ---------------------------------------

def format_time_from_seconds(s):
    """Convert seconds -> 'HH:MM:SS.mmm' string starting from 00:00:00.xxx."""
    ms = int(round((s - int(s)) * 1000))
    total_sec = int(s)
    h = total_sec // 3600
    m = (total_sec % 3600) // 60
    sec = total_sec % 60
    return f"{h:02d}:{m:02d}:{sec:02d}.{ms:03d}"


# ----------------------------- VIEWER CLASS ---------------------------------

class EMGVideoViewer(QWidget):
    def __init__(self, video_path, emg_times, emg_data, emg_path, parent=None):
        super().__init__(parent)

        self.video_path = video_path
        self.emg_times = emg_times       # 1D array
        self.emg_data = emg_data         # shape (N, 3)
        self.emg_path = emg_path         # full path to original EMG file
        self.folder = os.path.dirname(self.emg_path)

        # how many acts we want to alternate between
        self.num_acts = 2

        # Open video (for playback)
        self.cap = cv2.VideoCapture(self.video_path)
        if not self.cap.isOpened():
            raise RuntimeError(f"Could not open video: {self.video_path}")

        self.fps = self.cap.get(cv2.CAP_PROP_FPS)
        if self.fps <= 0:
            self.fps = 30.0  # fallback

        self.frame_idx = 0
        self.is_paused = False

        # For clipping window
        self.clip_samples = None
        self.region = None
        if len(self.emg_times) > 1:
            self.dt_mean = float(np.mean(np.diff(self.emg_times)))
        else:
            self.dt_mean = 0.0

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

        # ---- Clip controls (samples window) ----
        clip_layout = QHBoxLayout()
        self.samples_input = QLineEdit()
        self.samples_input.setPlaceholderText("Samples (e.g. 300)")
        self.btn_set_window = QPushButton("Set Window")
        self.btn_save_clip = QPushButton("Save Clip")

        clip_layout.addWidget(QLabel("Clip samples:"))
        clip_layout.addWidget(self.samples_input)
        clip_layout.addWidget(self.btn_set_window)
        clip_layout.addWidget(self.btn_save_clip)
        layout.addLayout(clip_layout)

        self.btn_set_window.clicked.connect(self.set_clip_window)
        self.btn_save_clip.clicked.connect(self.save_clip_segment)

        # ---- Label showing where the NEXT clip will go ----
        self.next_dest_label = QLabel("")
        layout.addWidget(self.next_dest_label)
        self._update_next_dest_label()

        # ---- Playback buttons ----
        btn_layout = QHBoxLayout()
        self.btn_play_pause = QPushButton("Pause")   # playing at start
        self.btn_replay = QPushButton("Replay")
        btn_layout.addWidget(self.btn_play_pause)
        btn_layout.addWidget(self.btn_replay)
        layout.addLayout(btn_layout)

        self.btn_play_pause.clicked.connect(self.toggle_play_pause)
        self.btn_replay.clicked.connect(self.replay)

        self.btn_load_other = QPushButton("Load Another Trial")
        layout.addWidget(self.btn_load_other)
        self.btn_load_other.clicked.connect(self.load_other_trial)

        # Timer for video/plot updates
        self.timer = QTimer(self)
        self.interval_ms = int(1000 / self.fps)
        self.timer.timeout.connect(self._update_frame)
        self.timer.start(self.interval_ms)

    # ------------------------------------------------------------------
    # Helper: figure out where the NEXT clip should be saved
    # Pattern: act1/trial1, act2/trial1, act1/trial2, act2/trial2, ...
    # ------------------------------------------------------------------
    def _compute_next_destination(self):
        """
        Returns (act_idx, trial_idx) for the *next* clip, based on how many
        clips already exist in ResultClip/act1 and ResultClip/act2.
        """
        base_dir = os.path.dirname(self.emg_path)
        result_root = os.path.join(base_dir, "ResultClip")
        num_acts = self.num_acts

        total_clips = 0
        if os.path.isdir(result_root):
            for act_idx in range(1, num_acts + 1):
                act_dir = os.path.join(result_root, f"act{act_idx}")
                if not os.path.isdir(act_dir):
                    continue
                existing_txt = glob.glob(os.path.join(act_dir, "trial_*.txt"))
                total_clips += len(existing_txt)

        # Map total_clips → (act, trial)
        # 0 → (act1, trial1)
        # 1 → (act2, trial1)
        # 2 → (act1, trial2)
        # 3 → (act2, trial2)
        act_idx = (total_clips % num_acts) + 1
        trial_idx = (total_clips // num_acts) + 1
        return act_idx, trial_idx

    def _update_next_dest_label(self):
        """Update the GUI text that tells where the next clip will go."""
        act_idx, trial_idx = self._compute_next_destination()
        self.next_dest_label.setText(
            f"Next clip will be saved to: act{act_idx} / trial_{trial_idx}"
        )

    # --------------- Clip window logic -----------------
    def load_other_trial(self):
        """Reload viewer with another trial in the same folder, reusing this window."""
        self.timer.stop()
        self.is_paused = True
        self.btn_play_pause.setText("Play")

        folder = self.folder  # same folder as current EMG/Video

        txt_files = glob.glob(os.path.join(folder, "trial_*.txt"))
        video_files = glob.glob(os.path.join(folder, "video_*.avi")) \
                    + glob.glob(os.path.join(folder, "trial_*.avi"))

        def extract_num_generic(path):
            base = os.path.basename(path)
            name, _ = os.path.splitext(base)
            for prefix in ("video_", "trial_"):
                if name.startswith(prefix):
                    return int(name[len(prefix):])
            raise ValueError(f"Unexpected filename format: {base}")

        txt_nums = {extract_num_generic(p): p for p in txt_files}
        vid_nums = {extract_num_generic(p): p for p in video_files}

        common = sorted(set(txt_nums) & set(vid_nums))
        if not common:
            print("No more trials found.")
            self.timer.start(self.interval_ms)
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
            return

        n, ok = QInputDialog.getInt(
            self,
            "Load Trial",
            f"Available trials: {common}\nEnter trial number:",
            min(common),
            min(common),
            max(common),
        )

        if not ok or n not in common:
            self.timer.start(self.interval_ms)
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
            return

        new_emg_path = txt_nums[n]
        new_video_path = vid_nums[n]

        print(f"Loading trial {n}:")
        print("  EMG  :", new_emg_path)
        print("  Video:", new_video_path)

        new_times, new_data = load_emg_file(new_emg_path)

        self.emg_times = new_times
        self.emg_data = new_data
        self.emg_path = new_emg_path
        self.folder = os.path.dirname(self.emg_path)

        if len(self.emg_times) > 1:
            self.dt_mean = float(np.mean(np.diff(self.emg_times)))
        else:
            self.dt_mean = 0.0

        self.curve_ch1.clear()
        self.curve_ch2.clear()
        self.curve_ch3.clear()

        if self.region is not None:
            self.plot_widget.removeItem(self.region)
            self.region = None

        self.plot_widget.setXRange(0, self.emg_times[-1], padding=0)

        if self.cap is not None:
            self.cap.release()

        self.video_path = new_video_path
        self.cap = cv2.VideoCapture(self.video_path)
        if not self.cap.isOpened():
            print("Could not open new video:", self.video_path)
            return

        self.fps = self.cap.get(cv2.CAP_PROP_FPS)
        if self.fps <= 0:
            self.fps = 30.0

        self.interval_ms = int(1000 / self.fps)
        self.frame_idx = 0

        self.is_paused = False
        self.btn_play_pause.setText("Pause")
        self.timer.start(self.interval_ms)

        if self.clip_samples is not None:
            self.samples_input.setText(str(self.clip_samples))
            self.set_clip_window()

        # Update label in case emg_path changed
        self._update_next_dest_label()

    def set_clip_window(self):
        """Create or update the highlighted window based on user sample input."""
        text = self.samples_input.text().strip()
        if not text:
            print("No sample count entered.")
            return
        try:
            n = int(text)
        except ValueError:
            print("Invalid sample count.")
            return

        n = max(1, min(n, len(self.emg_times)))
        self.clip_samples = n

        if self.dt_mean <= 0:
            width = 0.0
        else:
            width = self.dt_mean * (n - 1)

        t_start = float(self.emg_times[0])
        t_end = min(t_start + width, float(self.emg_times[-1]))

        if self.region is None:
            self.region = pg.LinearRegionItem(
                values=(t_start, t_end),
                movable=True,
                brush=(50, 50, 200, 50)
            )
            self.region.setZValue(-10)
            self.region.setBounds([float(self.emg_times[0]),
                                   float(self.emg_times[-1])])
            self.plot_widget.addItem(self.region)
        else:
            self.region.setRegion((t_start, t_end))

        print(f"Clip window set: {n} samples, approx width {width:.4f} s")

    def save_clip_segment(self):
        """
        Save EMG samples inside the current window AND matching video clip.

        Files are saved in ResultClip/actX as:
            act1/trial_1.txt, act1/video_1.avi
            act2/trial_1.txt, act2/video_1.avi
            act1/trial_2.txt, act1/video_2.avi
            ...
        """
        if self.region is None:
            print("No clip window defined.")
            return

        t_min, t_max = self.region.getRegion()
        t_min = float(t_min)
        t_max = float(t_max)

        # ---- EMG indices based on clip_samples ----
        if self.clip_samples is not None:
            start_idx = int(np.searchsorted(self.emg_times, t_min, side="left"))
            end_idx = start_idx + self.clip_samples
            end_idx = min(end_idx, len(self.emg_times))
            if start_idx >= end_idx:
                print("Selected window has no samples.")
                return
            idx = np.arange(start_idx, end_idx)
        else:
            mask = (self.emg_times >= t_min) & (self.emg_times <= t_max)
            idx = np.where(mask)[0]
            if len(idx) == 0:
                print("Selected window has no samples.")
                return

        times_clip = self.emg_times[idx].copy()
        emg_clip = self.emg_data[idx, :].copy()

        t_clip_start = float(times_clip[0])
        t_clip_end = float(times_clip[-1])

        times_clip = times_clip - times_clip[0]

        # --------- Prepare ResultClip/actX folder ---------
        base_dir = os.path.dirname(self.emg_path)
        result_root = os.path.join(base_dir, "ResultClip")

        act_idx, trial_idx = self._compute_next_destination()
        act_dir = os.path.join(result_root, f"act{act_idx}")
        os.makedirs(act_dir, exist_ok=True)

        emg_out_path = os.path.join(act_dir, f"trial_{trial_idx}.txt")
        video_out_path = os.path.join(act_dir, f"video_{trial_idx}.avi")

        # ---------- Save EMG TXT ----------
        with open(emg_out_path, "w") as f:
            f.write("timestamp\tch1\tch2\tch3\n")
            for t_sec, (c1, c2, c3) in zip(times_clip, emg_clip):
                ts_formatted = format_time_from_seconds(t_sec)
                f.write(f"{ts_formatted}\t{c1:.6f}\t{c2:.6f}\t{c3:.6f}\n")

        print(
            f"Saved EMG clip with {len(times_clip)} samples to: "
            f"{emg_out_path}"
        )

        # ---------- Save VIDEO CLIP ----------
        cap_clip = cv2.VideoCapture(self.video_path)
        if not cap_clip.isOpened():
            print("Could not open video again for clipping.")
            return

        fps = cap_clip.get(cv2.CAP_PROP_FPS)
        if fps <= 0:
            fps = self.fps

        width = int(cap_clip.get(cv2.CAP_PROP_FRAME_WIDTH))
        height = int(cap_clip.get(cv2.CAP_PROP_FRAME_HEIGHT))
        frame_count = int(cap_clip.get(cv2.CAP_PROP_FRAME_COUNT))

        start_frame = int(round(t_clip_start * fps))
        end_frame = int(round(t_clip_end * fps))

        start_frame = max(0, min(start_frame, frame_count - 1))
        end_frame = max(start_frame, min(end_frame, frame_count - 1))

        fourcc = cv2.VideoWriter_fourcc(*"XVID")
        writer = cv2.VideoWriter(video_out_path, fourcc, fps, (width, height))

        cap_clip.set(cv2.CAP_PROP_POS_FRAMES, start_frame)
        for frame_idx in range(start_frame, end_frame + 1):
            ret, frame = cap_clip.read()
            if not ret:
                break
            writer.write(frame)

        writer.release()
        cap_clip.release()

        print(
            f"Saved VIDEO clip frames {start_frame}–{end_frame} to: "
            f"{video_out_path}"
        )

        # Update GUI label for next clip destination
        self._update_next_dest_label()

    # --------------- Playback controls -----------------
    def toggle_play_pause(self):
        if self.is_paused:
            self.timer.start(self.interval_ms)
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
        else:
            self.timer.stop()
            self.is_paused = True
            self.btn_play_pause.setText("Play")

    def replay(self):
        self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
        self.frame_idx = 0

        self.curve_ch1.clear()
        self.curve_ch2.clear()
        self.curve_ch3.clear()

        if self.is_paused:
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
        self.timer.start(self.interval_ms)

    # --------------- Frame update ----------------------
    def _update_frame(self):
        ret, frame = self.cap.read()
        if not ret:
            self.timer.stop()
            self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
            self.frame_idx = 0
            self.is_paused = True
            self.btn_play_pause.setText("Play")
            return

        self.frame_idx += 1
        current_time_sec = self.frame_idx / self.fps

        frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        h, w, ch = frame_rgb.shape
        bytes_per_line = ch * w
        qimg = QImage(frame_rgb.data, w, h, bytes_per_line, QImage.Format_RGB888)
        self.video_label.setPixmap(QPixmap.fromImage(qimg))

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

    txt_files = glob.glob(os.path.join(folder, "trial_*.txt"))

    # accept both "video_*.avi" and "trial_*.avi" for videos
    video_files = glob.glob(os.path.join(folder, "video_*.avi")) \
                  + glob.glob(os.path.join(folder, "trial_*.avi"))

    def extract_num_generic(path):
        base = os.path.basename(path)
        name, _ = os.path.splitext(base)
        # handle "video_3" or "trial_3"
        for prefix in ("video_", "trial_"):
            if name.startswith(prefix):
                return int(name[len(prefix):])
        raise ValueError(f"Unexpected filename format: {base}")

    txt_nums = {extract_num_generic(p): p for p in txt_files}
    vid_nums = {extract_num_generic(p): p for p in video_files}

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
    viewer = EMGVideoViewer(video_path, emg_times, emg_data, emg_path)
    viewer.setWindowTitle(f"Trial {n} - EMG + Video")
    viewer.resize(900, 750)
    viewer.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
