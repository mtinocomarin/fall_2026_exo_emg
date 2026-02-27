import sys
import os
import glob
import cv2
import numpy as np
from datetime import datetime

from PyQt5.QtWidgets import (
    QApplication, QWidget, QLabel, QVBoxLayout,
    QPushButton, QHBoxLayout, QLineEdit
)
from PyQt5.QtGui import QImage, QPixmap
from PyQt5.QtCore import QTimer, Qt

import pyqtgraph as pg
from PyQt5.QtWidgets import QInputDialog

# ----------------------------- EMG LOADING ----------------------------------

def _unwrap_monotonic_ns(raw_ns):
    """Unwrap signed 32-bit wraps into a monotonic int64 timeline."""
    if not raw_ns:
        return np.array([], dtype=np.int64)

    wrap_mod = 2 ** 32
    offset = 0
    prev = int(raw_ns[0])
    out = [prev]

    for t in raw_ns[1:]:
        t = int(t)
        if t < prev:
            offset += wrap_mod
        out.append(t + offset)
        prev = t

    return np.asarray(out, dtype=np.int64)


def _guess_button_path(emg_path):
    base = os.path.basename(emg_path)
    stem, _ = os.path.splitext(base)
    if not stem.startswith("trial_"):
        return None
    try:
        trial_num = int(stem.replace("trial_", ""))
    except ValueError:
        return None
    return os.path.join(os.path.dirname(emg_path), f"button_{trial_num}.txt")


def _load_button_sidecar(button_path, emg_t_ns):
    """Load button values from button_X.txt and align to EMG rows."""
    out = np.zeros(len(emg_t_ns), dtype=np.int8)
    if not button_path or not os.path.exists(button_path):
        return out

    rows = []
    with open(button_path, "r") as f:
        _ = f.readline()  # optional header
        for line in f:
            line = line.strip()
            if not line:
                continue
            parts = [p.strip() for p in line.split(",")]
            if len(parts) < 2:
                continue
            try:
                t_ns = int(parts[0])
                b = 1 if int(parts[1]) == 1 else 0
            except ValueError:
                continue
            rows.append((t_ns, b))

    if not rows:
        return out

    if len(rows) == len(emg_t_ns):
        return np.asarray([b for _, b in rows], dtype=np.int8)

    bmap = {t_ns: b for t_ns, b in rows}
    for i, t_ns in enumerate(emg_t_ns):
        out[i] = bmap.get(int(t_ns), 0)
    return out


def load_emg_file(emg_path):
    """
    Load EMG file in old or new format.

    Old formats:
    - HH:MM:SS.mmm  ch1 ch2 ch3
    - YYYY-MM-DD HH:MM:SS.mmm  ch1 ch2 ch3

    New formats:
    - t_ns,ch1_V,ch2_V,ch3_V
    - t_ns,ch1_V,ch2_V,ch3_V,button

    Returns:
        times_sec: relative time (N,)
        emg:       channels (N,3)
        button:    button state (N,), 0/1
    """
    timestamps_dt = []
    timestamps_ns = []
    ch1 = []
    ch2 = []
    ch3 = []
    button_inline = []
    saw_new = False

    with open(emg_path, "r") as f:
        _ = f.readline()  # header

        for line in f:
            line = line.strip()
            if not line:
                continue

            if "," in line:
                parts = [p.strip() for p in line.split(",")]
                if len(parts) >= 4:
                    try:
                        t_ns = int(parts[0])
                        v1 = float(parts[1])
                        v2 = float(parts[2])
                        v3 = float(parts[3])
                    except ValueError:
                        pass
                    else:
                        b = 0
                        if len(parts) >= 5:
                            try:
                                b = 1 if int(parts[4]) == 1 else 0
                            except ValueError:
                                b = 0
                        timestamps_ns.append(t_ns)
                        ch1.append(v1)
                        ch2.append(v2)
                        ch3.append(v3)
                        button_inline.append(b)
                        saw_new = True
                        continue

            parts = line.split()
            if len(parts) < 4:
                continue

            if ":" in parts[0] and "-" not in parts[0]:
                ts_str = parts[0]
                v1_str, v2_str, v3_str = parts[1:4]
                t = datetime.strptime(ts_str, "%H:%M:%S.%f")
            else:
                if len(parts) < 5:
                    continue
                dt_str = f"{parts[0]} {parts[1]}"
                v1_str, v2_str, v3_str = parts[2:5]
                try:
                    t = datetime.strptime(dt_str, "%Y-%m-%d %H:%M:%S.%f")
                except ValueError:
                    t = datetime.strptime(dt_str, "%Y-%m-%d %H:%M:%S")

            timestamps_dt.append(t)
            ch1.append(float(v1_str))
            ch2.append(float(v2_str))
            ch3.append(float(v3_str))
            button_inline.append(0)

    if not ch1:
        raise ValueError(f"No data found in {emg_path}")

    if saw_new and len(timestamps_ns) == len(ch1):
        t_ns_unwrapped = _unwrap_monotonic_ns(timestamps_ns)
        times_sec = (t_ns_unwrapped - t_ns_unwrapped[0]).astype(np.float64) / 1e9
        if any(button_inline):
            button = np.asarray(button_inline, dtype=np.int8)
        else:
            button = _load_button_sidecar(_guess_button_path(emg_path), timestamps_ns)
    else:
        t0 = timestamps_dt[0]
        times_sec = np.array([(t - t0).total_seconds() for t in timestamps_dt], dtype=float)
        button = np.asarray(button_inline, dtype=np.int8)

    emg = np.column_stack([ch1, ch2, ch3]).astype(float)
    return times_sec, emg, button


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
    def __init__(self, video_path, emg_times, emg_data, button_data, emg_path, parent=None):
        super().__init__(parent)

        self.video_path = video_path
        self.emg_times = emg_times       # 1D array
        self.emg_data = emg_data         # shape (N, 3)
        self.button_data = button_data   # shape (N,), 0/1
        self.emg_path = emg_path         # full path to original EMG file
        self.folder = os.path.dirname(self.emg_path)   # <--- ADD THIS

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
        self.button_regions = []
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
        self._build_button_regions()

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

    # --------------- Clip window logic -----------------
    def _clear_button_regions(self):
        for reg in self.button_regions:
            try:
                self.plot_widget.removeItem(reg)
            except Exception:
                pass
        self.button_regions = []

    def _build_button_regions(self):
        self._clear_button_regions()
        if len(self.emg_times) == 0 or len(self.button_data) == 0:
            return

        n = min(len(self.emg_times), len(self.button_data))
        times = self.emg_times[:n]
        button = np.asarray(self.button_data[:n], dtype=np.int8)

        min_width = self.dt_mean if self.dt_mean > 0 else 0.01
        i = 0
        while i < n:
            if button[i] != 1:
                i += 1
                continue

            start_i = i
            while i + 1 < n and button[i + 1] == 1:
                i += 1
            end_i = i

            t0 = float(times[start_i])
            t1 = float(times[end_i]) + min_width
            if t1 <= t0:
                t1 = t0 + min_width

            reg = pg.LinearRegionItem(
                values=(t0, t1),
                movable=False,
                brush=(255, 0, 0, 35),
                pen=(255, 0, 0, 110),
            )
            reg.setZValue(-20)
            self.plot_widget.addItem(reg)
            self.button_regions.append(reg)
            i += 1

    def load_other_trial(self):
        """Reload viewer with another trial in the same folder, reusing this window."""
        # Pause playback while switching
        self.timer.stop()
        self.is_paused = True
        self.btn_play_pause.setText("Play")

        folder = self.folder  # same folder as current EMG/Video

        # find all trials again
        txt_files = glob.glob(os.path.join(folder, "trial_*.txt"))
        video_files = []
        video_files += glob.glob(os.path.join(folder, "video_*.avi"))
        video_files += glob.glob(os.path.join(folder, "trial_*.avi"))

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
            # resume old playback if nothing else to load
            self.timer.start(self.interval_ms)
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
            return

        # ask user which trial
        n, ok = QInputDialog.getInt(
            self,
            "Load Trial",
            f"Available trials: {common}\nEnter trial number:",
            min(common),
            min(common),
            max(common),
        )

        if not ok or n not in common:
            # user cancelled → resume current playback
            self.timer.start(self.interval_ms)
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
            return

        # ----- Paths for new trial -----
        new_emg_path = txt_nums[n]
        new_video_path = vid_nums[n]

        print(f"Loading trial {n}:")
        print("  EMG  :", new_emg_path)
        print("  Video:", new_video_path)

        # ---------- Load new EMG ----------
        new_times, new_data, new_button = load_emg_file(new_emg_path)

        # Update EMG state
        self.emg_times = new_times
        self.emg_data = new_data
        self.button_data = new_button
        self.emg_path = new_emg_path
        self.folder = os.path.dirname(self.emg_path)

        if len(self.emg_times) > 1:
            self.dt_mean = float(np.mean(np.diff(self.emg_times)))
        else:
            self.dt_mean = 0.0

        # Reset EMG curves & region
        self.curve_ch1.clear()
        self.curve_ch2.clear()
        self.curve_ch3.clear()
        self._clear_button_regions()

        if self.region is not None:
            self.plot_widget.removeItem(self.region)
            self.region = None

        # Update x-axis for new EMG duration
        self.plot_widget.setXRange(0, self.emg_times[-1], padding=0)
        self._build_button_regions()

        # ---------- Reset VIDEO ----------
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

        # Restart playback
        self.is_paused = False
        self.btn_play_pause.setText("Pause")
        self.timer.start(self.interval_ms)

           # If we already had a preferred clip size, reapply it to this new EMG
        if self.clip_samples is not None:
            self.samples_input.setText(str(self.clip_samples))
            self.set_clip_window()
 


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

        n = max(1, min(n, len(self.emg_times)))   # clamp
        self.clip_samples = n

        if self.dt_mean <= 0:
            width = 0.0
        else:
            width = self.dt_mean * (n - 1)

        # start window at beginning
        t_start = float(self.emg_times[0])
        t_end = min(t_start + width, float(self.emg_times[-1]))

        if self.region is None:
            self.region = pg.LinearRegionItem(values=(t_start, t_end),
                                              movable=True,
                                              brush=(255, 220, 0, 55),
                                              pen=(255, 200, 0, 170))
            self.region.setZValue(-10)  # behind curves
            # keep region inside full EMG range
            self.region.setBounds([float(self.emg_times[0]),
                                   float(self.emg_times[-1])])
            self.plot_widget.addItem(self.region)
        else:
            self.region.setRegion((t_start, t_end))

        print(f"Clip window set: {n} samples, approx width {width:.4f} s")

    def save_clip_segment(self):
        """
        Save EMG samples inside the current window AND matching video clip.

        Files are saved in ResultClip as:
            trial_1.txt, video_1.avi
            trial_2.txt, video_2.avi
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
        button_clip = self.button_data[idx].astype(int).copy()

        # Real start and end in original time axis (for video)
        t_clip_start = float(times_clip[0])
        t_clip_end = float(times_clip[-1])

        # Make EMG time start at 0
        times_clip = times_clip - times_clip[0]

        # --------- Prepare ResultClip folder ---------
        base_dir = os.path.dirname(self.emg_path)
        result_dir = os.path.join(base_dir, "ResultClip")
        os.makedirs(result_dir, exist_ok=True)

        # Find next available index: trial_1, trial_2, ...
        existing_txt = glob.glob(os.path.join(result_dir, "trial_*.txt"))
        indices = []
        for p in existing_txt:
            name = os.path.basename(p)          # e.g. "trial_3.txt"
            stem, _ = os.path.splitext(name)    # "trial_3"
            try:
                idx_num = int(stem.replace("trial_", ""))
                indices.append(idx_num)
            except ValueError:
                pass

        next_idx = (max(indices) + 1) if indices else 1

        emg_out_path = os.path.join(result_dir, f"trial_{next_idx}.txt")
        video_out_path = os.path.join(result_dir, f"video_{next_idx}.avi")

        # ---------- Save EMG TXT ----------
        with open(emg_out_path, "w") as f:
            f.write("timestamp\tch1\tch2\tch3\tbutton\n")
            for t_sec, (c1, c2, c3), b in zip(times_clip, emg_clip, button_clip):
                ts_formatted = format_time_from_seconds(t_sec)
                f.write(f"{ts_formatted}\t{c1:.6f}\t{c2:.6f}\t{c3:.6f}\t{int(b)}\n")

        print(f"Saved EMG clip with {len(times_clip)} samples to: {emg_out_path}")

        # ---------- Save VIDEO CLIP ----------
        # Open a fresh capture for clipping (separate from playback cap)
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

        # frame indices corresponding to EMG clip start/end
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

        print(f"Saved VIDEO clip frames {start_frame}–{end_frame} to: {video_out_path}")


    # --------------- Playback controls -----------------

    def toggle_play_pause(self):
        """Toggle between playing and pausing the video/EMG."""
        if self.is_paused:
            self.timer.start(self.interval_ms)
            self.is_paused = False
            self.btn_play_pause.setText("Pause")
        else:
            self.timer.stop()
            self.is_paused = True
            self.btn_play_pause.setText("Play")

    def replay(self):
        """Restart video and EMG from the beginning."""
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

        # ---- update video ----
        frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        h, w, ch = frame_rgb.shape
        bytes_per_line = ch * w
        qimg = QImage(frame_rgb.data, w, h, bytes_per_line, QImage.Format_RGB888)
        self.video_label.setPixmap(QPixmap.fromImage(qimg))

        # ---- update EMG plot ----
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
    video_files = []
    video_files += glob.glob(os.path.join(folder, "video_*.avi"))
    video_files += glob.glob(os.path.join(folder, "trial_*.avi"))

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
    emg_times, emg_data, button_data = load_emg_file(emg_path)

    # Run Qt app
    app = QApplication(sys.argv)
    viewer = EMGVideoViewer(video_path, emg_times, emg_data, button_data, emg_path)
    viewer.setWindowTitle(f"Trial {n} - EMG + Video")
    viewer.resize(900, 750)
    viewer.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
