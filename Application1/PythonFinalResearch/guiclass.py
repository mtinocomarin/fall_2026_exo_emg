import logging
from PyQt5 import QtWidgets, QtCore
import pyqtgraph as pg
from collections import deque
from PyQt5.QtWidgets import QLabel
from PyQt5.QtGui import QImage, QPixmap
from PyQt5.QtWidgets import QFileDialog
from emgclass import BatchRecorder
import os
from datetime import datetime
from featuresclass import EMGFeature
import array 
import numpy as np
from datetime import datetime
from datetime import datetime
import os
import re

class EMGPlotter(QtWidgets.QWidget):

    status_sig = QtCore.pyqtSignal(str)
    enable_sig = QtCore.pyqtSignal(bool)

    def __init__(self, window_size=1000, camera=None):
        super().__init__()

        self.camera = camera 
        self.emg_file = None
        self.recording = False
        self.feat_engine = EMGFeature()

        logging.info("Initializing EMGPlotter UI...")
        self.setWindowTitle("EMG Viewer")

        # ✅ Layout must be initialized once
        layout = QtWidgets.QVBoxLayout(self)

        # --- Status Label ---
        self.status_lbl = QLabel("Status: Idle")
        self.status_lbl.setStyleSheet("color: blue; font-weight: bold;")
        layout.addWidget(self.status_lbl)

        # --- EMG Buffers ---
        self.ch1 = deque([0] * window_size, maxlen=window_size)
        self.ch2 = deque([0] * window_size, maxlen=window_size)
        self.ch3 = deque([0] * window_size, maxlen=window_size)

        self.y_min = 0
        self.y_max = 3

        # --- Plot ---
        self.plot_widget = pg.GraphicsLayoutWidget()
        self.plot = self.plot_widget.addPlot(title="Live EMG")
        self.plot.setYRange(self.y_min, self.y_max)
        self.curve1 = self.plot.plot(pen=pg.mkPen(color='#FF6B6B', width=2))   # Bright coral red
        self.curve2 = self.plot.plot(pen=pg.mkPen(color='#6BFF6B', width=2))   # Bright mint green
        self.curve3 = self.plot.plot(pen=pg.mkPen(color='#6BCBFF', width=2))   # Bright sky blue

        # --- Video ---
        self.video_label = QLabel("Camera Feed")
        self.video_label.setAlignment(QtCore.Qt.AlignCenter)
        self.video_label.setStyleSheet("background-color: black; color: white;")
        self.video_label.setMinimumHeight(300)
        self.video_label.setSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Expanding)

        # --- Split view ---
        splitter = QtWidgets.QSplitter(QtCore.Qt.Vertical)
        splitter.addWidget(self.plot_widget)
        splitter.addWidget(self.video_label)
        layout.addWidget(splitter)

        # --- Status indicators ---
        self.recording_indicator = QLabel("EMG: Not Recording")
        self.recording_indicator.setStyleSheet("color: black; font-weight: bold;")
        layout.addWidget(self.recording_indicator)

        self.video_indicator = QLabel("Video: Not Recording")
        self.video_indicator.setStyleSheet("color: black; font-weight: bold;")
        layout.addWidget(self.video_indicator)

        # --- Buttons ---
        self.batch_emg_video_btn = QtWidgets.QPushButton("Batch EMG + Video")
        self.zoom_in_btn = QtWidgets.QPushButton("Zoom In Y")
        self.zoom_out_btn = QtWidgets.QPushButton("Zoom Out Y")
        self.auto_zoom_btn = QtWidgets.QPushButton("Auto Zoom Y")
        self.start_cam_btn = QtWidgets.QPushButton("Start Camera")
        self.stop_cam_btn = QtWidgets.QPushButton("Stop Camera")
        self.start_record_btn = QtWidgets.QPushButton("Start EMG Recording")
        self.stop_record_btn = QtWidgets.QPushButton("Stop EMG Recording")
        self.start_vid_btn = QtWidgets.QPushButton("Start Video Recording")
        self.stop_vid_btn = QtWidgets.QPushButton("Stop Video Recording")
        self.exit_btn = QtWidgets.QPushButton("Exit Program")
        self.next_btn = QtWidgets.QPushButton("Next Trial")
        self.batch_btn = QtWidgets.QPushButton("Batch EMG")
        self.view_emg_btn = QtWidgets.QPushButton("View Saved EMG")
        self.train_btn = QtWidgets.QPushButton("Train Model")
        back_btn = QtWidgets.QPushButton("Previous Trial")
        self.start_emg_video_btn = QtWidgets.QPushButton("Start EMG + Video")
        self.stop_emg_video_btn = QtWidgets.QPushButton("Stop EMG + Video")
        self.analyze_btn = QtWidgets.QPushButton("Analyze EMG + Video")
        action_window_btn = QtWidgets.QPushButton("Create Action Windows")
        action_window_btn.clicked.connect(self._create_action_windows)

        self.next_btn.setEnabled(False)

        # === Signal Connections ===
        action_window_btn.clicked.connect(self._create_action_windows)
        self.train_btn.clicked.connect(self.train_model)
        self.view_emg_btn.clicked.connect(self.view_saved_emg)
        self.batch_btn.clicked.connect(self.start_batch_dialog)
        self.next_btn.clicked.connect(self.handle_next_btn)
        self.exit_btn.clicked.connect(self.exit_program)
        self.zoom_in_btn.clicked.connect(self.zoom_in_y)
        self.zoom_out_btn.clicked.connect(self.zoom_out_y)
        self.auto_zoom_btn.clicked.connect(self.auto_adjust_y_range)
        self.start_cam_btn.clicked.connect(self.start_camera)
        self.stop_cam_btn.clicked.connect(self.stop_camera)
        self.start_record_btn.clicked.connect(self.start_emg_recording)
        self.stop_record_btn.clicked.connect(self.stop_emg_recording)
        self.start_vid_btn.clicked.connect(self.start_video_recording)
        self.stop_vid_btn.clicked.connect(self.stop_video_recording)
        self.batch_emg_video_btn.clicked.connect(self.start_batch_video_dialog)
        back_btn.clicked.connect(self._prev_trial_viewer)
        self.start_emg_video_btn.clicked.connect(self.start_emg_video_recording)
        self.stop_emg_video_btn.clicked.connect(self.stop_emg_video_recording)
        self.analyze_btn.clicked.connect(self.analyze_emg_with_video)
      
        # === Tabbed Control Groups ===
        self.tab_widget = QtWidgets.QTabWidget()
        self.tab_widget.setSizePolicy(QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.tab_widget.setMaximumHeight(220)  # 👈 Compact tabs
        layout.addWidget(self.tab_widget)

        # === Graph Controls Tab ===
        graph_tab = QtWidgets.QWidget()
        graph_layout = QtWidgets.QVBoxLayout(graph_tab)

        zoom_row = QtWidgets.QHBoxLayout()
        camera_row = QtWidgets.QHBoxLayout()

        for btn in [self.zoom_in_btn, self.zoom_out_btn, self.auto_zoom_btn,
                    self.start_cam_btn, self.stop_cam_btn]:
            btn.setFixedHeight(28)

        zoom_row.addWidget(self.zoom_in_btn)
        zoom_row.addWidget(self.zoom_out_btn)
        zoom_row.addWidget(self.auto_zoom_btn)

        camera_row.addWidget(self.start_cam_btn)
        camera_row.addWidget(self.stop_cam_btn)

        graph_layout.addLayout(zoom_row)
        graph_layout.addSpacing(5)
        graph_layout.addLayout(camera_row)
        self.tab_widget.addTab(graph_tab, "Graph Controls")
        # === Collection Tab ===
        collection_tab = QtWidgets.QWidget()
        collection_layout = QtWidgets.QVBoxLayout(collection_tab)

        video_row = QtWidgets.QHBoxLayout()
        video_row.addWidget(self.start_vid_btn)
        video_row.addWidget(self.stop_vid_btn)

        emg_row = QtWidgets.QHBoxLayout()
        emg_row.addWidget(self.start_record_btn)
        emg_row.addWidget(self.stop_record_btn)

        batch_row = QtWidgets.QHBoxLayout()
        batch_row.addWidget(self.batch_btn)
        batch_row.addWidget(self.batch_emg_video_btn)

        nav_row = QtWidgets.QHBoxLayout()
        nav_row.addWidget(back_btn)
        nav_row.addWidget(self.next_btn)

        collection_layout.addLayout(video_row)
        collection_layout.addLayout(emg_row)
        collection_layout.addLayout(batch_row)

        emg_video_row = QtWidgets.QHBoxLayout()
        emg_video_row.addWidget(self.start_emg_video_btn)
        emg_video_row.addWidget(self.stop_emg_video_btn)

        collection_layout.addLayout(emg_video_row)

        self.tab_widget.addTab(collection_tab, "Collection")

       # === Real-Time Tab ===
        realtime_tab = QtWidgets.QWidget()
        realtime_layout = QtWidgets.QVBoxLayout(realtime_tab)

        realtime_batch_row = QtWidgets.QHBoxLayout()
        realtime_batch_row.addWidget(self.batch_btn)
        realtime_batch_row.addWidget(self.batch_emg_video_btn)

        # Navigation row now includes both buttons
        realtime_nav_row = QtWidgets.QHBoxLayout()
        realtime_nav_row.addWidget(back_btn)
        realtime_nav_row.addWidget(self.next_btn)

        train_row = QtWidgets.QHBoxLayout()
        train_row.addWidget(self.train_btn)

        # Build layout
        realtime_layout.addLayout(realtime_batch_row)
        realtime_layout.addLayout(realtime_nav_row)
        realtime_layout.addLayout(train_row)
        self.tab_widget.addTab(realtime_tab, "Real-Time")
    
       # === Post-Analysis Tab ===
        post_tab = QtWidgets.QWidget()
        post_layout = QtWidgets.QVBoxLayout(post_tab)

        # Add EMG Viewer Button
        self.view_emg_btn = QtWidgets.QPushButton("View Saved EMG")
        self.view_emg_btn.clicked.connect(self.view_saved_emg)
        post_layout.addWidget(self.view_emg_btn)

        # Add Analyze EMG + Video Button
        self.analyze_btn = QtWidgets.QPushButton("Analyze EMG + Video")
        self.analyze_btn.clicked.connect(self.analyze_emg_with_video)
        post_layout.addWidget(self.analyze_btn)

        self.tab_widget.addTab(post_tab, "Post Analysis")

        # ✅ Add Create Action Windows Button
        self.create_windows_btn = QtWidgets.QPushButton("Create Action Windows")
        self.create_windows_btn.clicked.connect(self.create_action_windows_from_file)
        post_layout.addWidget(self.create_windows_btn)

        self.tab_widget.addTab(post_tab, "Post Analysis")

        # === Exit Tab ===
        exit_tab = QtWidgets.QWidget()
        exit_layout = QtWidgets.QVBoxLayout(exit_tab)
        exit_layout.addWidget(self.exit_btn)
        self.tab_widget.addTab(exit_tab, "Exit")

        # --- Timer ---
        self.timer = QtCore.QTimer()
        self.timer.timeout.connect(self.update_plot)
        self.timer.start(30)

        # --- Signals for threading ---
        self.status_sig.connect(self.status_lbl.setText)
        self.enable_sig.connect(self.next_btn.setEnabled)

        logging.info("✅ EMGPlotter initialized successfully.")

    def update_status(self, txt): self.status_sig.emit(txt)
    def toggle_next_btn(self, on): self.enable_sig.emit(on)
    def train_model(self):
        folder = QtWidgets.QFileDialog.getExistingDirectory(self, "Select Folder Containing Action Subfolders")
        if not folder:
            return

        try:
            # --- Step 1: Detect Action Folders ---
            actions = sorted([
                d for d in os.listdir(folder)
                if os.path.isdir(os.path.join(folder, d)) and d.lower().startswith("act")
            ])
            if not actions:
                QtWidgets.QMessageBox.warning(self, "No Actions Found", "No 'actX' folders found in the selected directory.")
                return

            n_actions = len(actions)
            logging.info(f"Found {n_actions} actions: {actions}")

            # --- Step 2: Count Trials in Each Action ---
            act_trials = {}
            for act in actions:
                act_path = os.path.join(folder, act)
                trial_files = [f for f in os.listdir(act_path) if f.startswith("trial_") and f.endswith(".txt")]
                act_trials[act] = len(trial_files)

            summary = "\n".join([f"{act}: {count} trials" for act, count in act_trials.items()])
            logging.info("Trial counts:\n" + summary)

            # --- Step 3: Ask User for Training Split ---
            n_train, ok1 = QtWidgets.QInputDialog.getInt(
                self, "Training Split", summary + "\n\nEnter number of trials per class for TRAINING:", 3, 1, 100)
            if not ok1:
                return

            n_test, ok2 = QtWidgets.QInputDialog.getInt(
                self, "Testing Split", f"You chose {n_train} for training.\nEnter number for TESTING:", 3, 0, 100)
            if not ok2:
                return

            # --- Step 4: Validate Against Trial Counts ---
            for act, total in act_trials.items():
                if n_train + n_test > total:
                    QtWidgets.QMessageBox.warning(
                        self, "Too Many Trials Selected",
                        f"{act} only has {total} trials.\nYou selected {n_train + n_test} total.\nPlease reduce your split.")
                    return

            # --- Step 5: Confirm Settings ---
            confirm = QtWidgets.QMessageBox.question(
                self, "Confirm Training",
                f"You are about to train on {n_train} and test on {n_test} trials per class.\n\nContinue?",
                QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No
            )
            if confirm != QtWidgets.QMessageBox.Yes:
                return

            # --- Step 6: Run Training ---
            testdata = []  # Placeholder for future use
            self.update_status("Training model...")
            logging.info(f"Starting training with {n_train} train and {n_test} test trials per class.")
            self.feat_engine.training(folder, n_actions, n_train, n_test, testdata)
            self.update_status("✅ Training completed.")
            logging.info("✅ Training completed successfully.")

        except Exception as e:
            logging.error(f"Training error: {e}")
            QtWidgets.QMessageBox.critical(self, "Training Failed", str(e))

    def analyze_emg_with_video(self):
        from PyQt5.QtMultimediaWidgets import QVideoWidget
        from PyQt5.QtMultimedia import QMediaPlayer, QMediaContent
        from PyQt5.QtCore import QUrl
        import glob

        # === Ask if user wants single trial or full set ===
        mode_choice, ok = QtWidgets.QInputDialog.getItem(
            self, "Analysis Mode", "Analyze single trial or whole set?",
            ["Single Trial", "Whole Set"], 0, False
        )
        if not ok:
            return

        if mode_choice == "Single Trial":
            trial_path, _ = QtWidgets.QFileDialog.getOpenFileName(
                self, "Select EMG Trial File", "finalemg", "Text Files (*.txt)"
            )
            if not trial_path:
                return

            folder = os.path.dirname(trial_path)
            trial_name = os.path.splitext(os.path.basename(trial_path))[0]
            trial_num = trial_name.split("_")[1]
            video_filename = f"video_{trial_num}.avi"
            video_path = os.path.join(folder, video_filename)

            if not os.path.exists(video_path):
                QtWidgets.QMessageBox.warning(
                    self, "Video Not Found",
                    f"Expected video file:\n{video_filename}\nwas not found in the same folder."
                )
                return

            # Load and show single trial
            timestamps, emgs = self._load_emg_file(trial_path)
            self._emg_file = trial_path
            self._show_emg_plot(timestamps, emgs, f"{trial_name} with Video")

            # Setup video player
            self._video_window = QtWidgets.QWidget()
            self._video_window.setWindowTitle("Video Playback")
            vlayout = QtWidgets.QVBoxLayout(self._video_window)
            video_widget = QVideoWidget()
            vlayout.addWidget(video_widget)

            self._player = QMediaPlayer(None, QMediaPlayer.VideoSurface)
            self._player.setVideoOutput(video_widget)
            self._player.setMedia(QMediaContent(QUrl.fromLocalFile(video_path)))
            self._player.play()

            self._playback_timer = QtCore.QTimer()
            self._playback_timer.timeout.connect(self._update_emg_frame)
            self._playback_timer.start(30)

            self._video_window.resize(640, 480)
            self._video_window.show()

        else:
            # === WHOLE SET mode ===
            folder = QtWidgets.QFileDialog.getExistingDirectory(
                self, "Select Folder Containing trial_*.txt files", "finalemg"
            )
            if not folder:
                return

            trial_paths = sorted(glob.glob(os.path.join(folder, "trial_*.txt")))
            if not trial_paths:
                QtWidgets.QMessageBox.warning(self, "Error", "No trial_*.txt files found in selected folder.")
                return

            # Load first trial for marker-based windowing
            first_trial = trial_paths[0]
            timestamps, emgs = self._load_emg_file(first_trial)
            self._emg_file = first_trial
            self._trial_paths_batch = trial_paths  # used in _create_action_windows()
            self._show_emg_plot(timestamps, emgs, f"Set Viewer - {os.path.basename(folder)}")

    def create_action_windows_from_file(self):
        # Reuse analyze_emg_with_video logic, but do not auto-play video
        trial_path, _ = QtWidgets.QFileDialog.getOpenFileName(self, "Select EMG Trial File", "finalemg", "Text Files (*.txt)")
        if not trial_path:
            return

        folder = os.path.dirname(trial_path)
        trial_name = os.path.splitext(os.path.basename(trial_path))[0]

        # Load EMG trial
        timestamps = []
        emgs = [[], [], []]
        with open(trial_path) as f:
            next(f)  # Skip header
            for line in f:
                parts = line.strip().split('\t')
                if len(parts) == 4:
                    ts_str, v1, v2, v3 = parts
                    timestamps.append(self._parse_timestamp(ts_str))
                    emgs[0].append(float(v1))
                    emgs[1].append(float(v2))
                    emgs[2].append(float(v3))

        # Store the loaded file path for saving logic
        self._emg_file = trial_path

        # Show EMG plot (no video playback)
        self._show_emg_plot(timestamps, emgs, f"{trial_name} - Action Window Marking")

    def _create_action_windows(self):
        import numpy as np
        import os
        import glob

        # Ask how many actions
        num_actions, ok = QtWidgets.QInputDialog.getInt(self, "Number of Actions", "How many action windows per trial?", min=1)
        if not ok:
            return

        if len(self._marker_times) < (num_actions * 2):
            QtWidgets.QMessageBox.warning(self, "Not Enough Markers", f"You need to mark {num_actions * 2} times (start and end for each window).")
            return

        # Sort and map first trial's marker times to indices
        markers = sorted(self._marker_times[:num_actions * 2])
        time_array = self._timestamps
        sample_idxs = [np.abs(time_array - t).argmin() for t in markers]

        # Get global window size
        start_idx0, end_idx0 = sample_idxs[0], sample_idxs[1]
        window_size = end_idx0 - start_idx0
        if window_size <= 0:
            QtWidgets.QMessageBox.warning(self, "Invalid First Window", "The first action window must be > 0 samples.")
            return
        # Determine folder and all trial files
        folder = os.path.dirname(self._emg_file)
        all_trial_paths = sorted(glob.glob(os.path.join(folder, "trial_*.txt")))

        # Apply action window extraction to all trials
        for trial_path in all_trial_paths:
            timestamps = []
            emgs = [[], [], []]
            with open(trial_path) as f:
                next(f)
                for line in f:
                    parts = line.strip().split('\t')
                    if len(parts) == 4:
                        ts_str, v1, v2, v3 = parts
                        timestamps.append(self._parse_timestamp(ts_str))
                        emgs[0].append(float(v1))
                        emgs[1].append(float(v2))
                        emgs[2].append(float(v3))

            t0 = timestamps[0]
            rel_time = np.array([(t - t0).total_seconds() for t in timestamps])
            emg_arr = [np.array(ch) for ch in emgs]
            trial_num = os.path.splitext(os.path.basename(trial_path))[0].split("_")[1]

            # Repeat same sample structure from the first trial
            for i in range(num_actions):
                start_idx = sample_idxs[i * 2]
                end_idx = start_idx + window_size
                if end_idx > len(rel_time):
                    print(f"[!] Skipped Action {i+1} in Trial {trial_num} — out of bounds")
                    continue

                t_win = rel_time[start_idx:end_idx]
                emg_win = [ch[start_idx:end_idx] for ch in emg_arr]

                # Save to file
                fname = f"Action{i+1}_Trial{trial_num}.txt"
                fpath = os.path.join(folder, fname)
                with open(fpath, "w") as out:
                    out.write("timestamp\tch1\tch2\tch3\n")
                    for t, ch1, ch2, ch3 in zip(t_win, *emg_win):
                        out.write(f"{t:.6f}\t{ch1:.6f}\t{ch2:.6f}\t{ch3:.6f}\n")

                print(f"[✓] Saved: {fname}")

        QtWidgets.QMessageBox.information(self, "Finished", f"Saved {num_actions} actions for each trial.")

    def _clear_all_markers(self):
        # Remove all marker lines from EMG plot
        for line in self._marker_lines_emg:
            self._main_plot.removeItem(line)
        self._marker_lines_emg.clear()

        # Remove all marker lines from feature plots
        for ax_idx, feat_lines in enumerate(self._marker_lines_feat):
            for line in feat_lines:
                self._feat_axes[ax_idx].removeItem(line)
        self._marker_lines_feat = [[] for _ in self._feat_axes]

        # Clear recorded marker times
        self._marker_times.clear()

    def _set_marker_at_time(self, t_marker):
        time_array = self._timestamps
        closest_idx = np.abs(time_array - t_marker).argmin()
        actual_time = time_array[closest_idx]
        self._marker_times.append(actual_time)

        # === Draw vertical line on EMG plot ===
        line = pg.InfiniteLine(pos=actual_time, angle=90, pen=pg.mkPen('y', width=2), movable=False)
        self._main_plot.addItem(line)
        self._marker_lines_emg.append(line)

        # === Draw on feature plots ===
        sample_idx = closest_idx
        feature_index = sample_idx // self._feature_extractor.WINC
        for ax_idx, ax in enumerate(self._feat_axes):
            feat_line = pg.InfiniteLine(pos=feature_index, angle=90, pen=pg.mkPen('y', width=2), movable=False)
            ax.addItem(feat_line)
            self._marker_lines_feat[ax_idx].append(feat_line)

        # === Optional Action Window Highlighting ===
        if hasattr(self, "_max_marker_count") and hasattr(self, "_num_action_windows"):
            if len(self._marker_times) > self._max_marker_count:
                QtWidgets.QMessageBox.information(self, "Marker Limit Reached", "You've already marked all windows.")
                self._marker_times = self._marker_times[:self._max_marker_count]  # Trim overflow
                return

            # When two markers are added, highlight window
            if len(self._marker_times) % 2 == 0:
                t_start = self._marker_times[-2]
                t_end = self._marker_times[-1]
                if t_end < t_start:
                    t_start, t_end = t_end, t_start

                region = pg.LinearRegionItem(values=(t_start, t_end), brush=(255, 255, 0, 50), movable=False)
                self._main_plot.addItem(region)

                if not hasattr(self, "_highlight_regions"):
                    self._highlight_regions = []
                self._highlight_regions.append(region)
                print(f"[✓] Window {len(self._marker_times)//2} marked: {t_start:.3f}s to {t_end:.3f}s")

    def _load_emg_file(self, path):
        timestamps = []
        emgs = [[], [], []]
        with open(path) as f:
            next(f)
            for line in f:
                parts = line.strip().split('\t')
                if len(parts) == 4:
                    ts_str, v1, v2, v3 = parts
                    timestamps.append(self._parse_timestamp(ts_str))
                    emgs[0].append(float(v1))
                    emgs[1].append(float(v2))
                    emgs[2].append(float(v3))
        return timestamps, emgs

    def _show_emg_plot(self, timestamps, emgs, title="EMG Trial", save_path=None, show_navigation=False, enable_window_marking=False):
        import numpy as np
        from featuresclass import EMGFeature
        self._playback_paused = False  # ⬅️ Controls pause/resume
        self._feature_index = 0
        self._playback_index = 0

       # Only ask for windows if explicitly enabled
        if enable_window_marking:
            self._num_action_windows, ok = QtWidgets.QInputDialog.getInt(
                self, "Number of Action Windows", "How many action windows do you want to mark?", min=1
            )
            if not ok:
                return
            self._max_marker_count = self._num_action_windows * 2
            self._marker_pairs = []
            self._highlight_regions = []
        else:
            self._num_action_windows = None
            self._max_marker_count = None
            self._marker_pairs = []
            self._highlight_regions = []



        # Setup EMG data
        t0 = timestamps[0]
        self._timestamps = np.array([(t - t0).total_seconds() for t in timestamps])
        self._emgs = [np.array(emgs[0]), np.array(emgs[1]), np.array(emgs[2])]

        # === Main EMG Viewer Window ===
        self._emg_window = QtWidgets.QWidget()
        self._emg_window.setWindowTitle(f"EMG Viewer - {title}")
        emg_layout = QtWidgets.QVBoxLayout(self._emg_window)

        self._emg_widget = pg.GraphicsLayoutWidget()
        emg_layout.addWidget(self._emg_widget)

        self._main_plot = self._emg_widget.addPlot(title="All Channels")
        self._main_plot.setLabel("bottom", "Time", units="s")
        self._main_plot.showGrid(x=True, y=True)
        self._main_plot.enableAutoRange(axis='y', enable=True)

        self._curve1 = self._main_plot.plot(pen='r')
        self._curve2 = self._main_plot.plot(pen='g')
        self._curve3 = self._main_plot.plot(pen='b')

        self._main_plot.scene().sigMouseClicked.connect(self._on_emg_click)

        all_times = self._timestamps
        self._main_plot.setXRange(all_times[0], all_times[-1])

        self._emg_window.resize(1600, 600)
        self._emg_window.show()

        # === Separate Feature Viewer Window ===
        self._feature_window = QtWidgets.QWidget()
        self._feature_window.setWindowTitle(f"EMG Features - {title}")
        feature_layout = QtWidgets.QVBoxLayout(self._feature_window)

        self._feature_widget = pg.GraphicsLayoutWidget()
        feature_layout.addWidget(self._feature_widget)

        
        # === Marker control buttons ===
        marker_btn_layout = QtWidgets.QHBoxLayout()

        pause_btn = QtWidgets.QPushButton("Pause")
        pause_btn.setCheckable(True)
        pause_btn.setChecked(False)
        pause_btn.toggled.connect(self._toggle_playback)
        marker_btn_layout.addWidget(pause_btn)


        clear_btn = QtWidgets.QPushButton("Clear Markers")
        clear_btn.clicked.connect(self._clear_all_markers)
        marker_btn_layout.addWidget(clear_btn)

        close_btn = QtWidgets.QPushButton("Close")
        close_btn.clicked.connect(self._emg_window.close)
        marker_btn_layout.addWidget(close_btn)

        emg_layout.addLayout(marker_btn_layout)


        self._feature_window.resize(1600, 700)
        self._feature_window.show()

        action_btn = QtWidgets.QPushButton("Save Action Windows")
        action_btn.clicked.connect(self._create_action_windows)
        marker_btn_layout.addWidget(action_btn)


        # === Feature Extraction ===
        raw_emg = np.stack(self._emgs, axis=1)
        self._feature_extractor = EMGFeature(window_length=100, window_increment=50, channels=3)
        self._features = self._feature_extractor.extract(raw_emg)

        feature_names = ["MAV", "Waveform Length", "Zero Crossings", "Slope Sign Changes"]
        colors = ['r', 'g', 'b']
        self._feat_axes = []
        self._feat_curves = []

        for feat_idx, feat_name in enumerate(feature_names):
            ax = self._feature_widget.addPlot(title=f"Feature: {feat_name}")
            ax.setLabel("bottom", "Window #")
            ax.showGrid(x=True, y=True)

            # Set Y-axis scale for readability
            if feat_name == "MAV":
                ax.setYRange(0, 0.1)
            elif feat_name == "Waveform Length":
                ax.setYRange(0, 5)
            elif feat_name == "Zero Crossings":
                ax.setYRange(0, 15)
            elif feat_name == "Slope Sign Changes":
                ax.setYRange(0, 15)

            curves = [ax.plot(pen=color) for color in colors]
            self._feat_axes.append(ax)
            self._feat_curves.append(curves)
            self._feature_widget.nextRow()

        # === Initialize marker structures (after feat_axes is set) ===
        self._marker_times = []                           # ⬅️ holds marker times (float seconds)
        self._marker_lines_emg = []                       # ⬅️ list of lines on EMG plot
        self._marker_lines_feat = [[] for _ in self._feat_axes]  # ⬅️ per-axis list of marker lines

        # === Start Playback Timer ===
        self._playback_timer = QtCore.QTimer()
        self._playback_timer.timeout.connect(self._update_emg_frame)
        self._playback_timer.start(30)

    def _toggle_playback(self, paused):
        self._playback_paused = paused
        if hasattr(self, "_player") and self._player is not None:
            if paused:
                self._player.pause()
            else:
                self._player.play()

    def _on_emg_click(self, event):
        if event.button() == QtCore.Qt.LeftButton:
            mouse_point = self._main_plot.vb.mapSceneToView(event.scenePos())
            t_clicked = mouse_point.x()
            self._set_marker_at_time(t_clicked)

    def _update_emg_frame(self):
        if getattr(self, "_playback_paused", False):
            return

        # === Hybrid: Choose index based on whether video is playing ===
        if hasattr(self, "_player") and self._player is not None:
            current_ms = self._player.position()
            current_time = current_ms / 1000.0  # Convert ms to seconds
            idx = np.searchsorted(self._timestamps, current_time)
        else:
            idx = self._playback_index
            self._playback_index += 5  # Manual time advance for EMG-only
        # === Handle end of playback ===
        if idx >= len(self._timestamps):
            self._playback_index = 0
            self._feature_index = 0
            return

        idx = min(idx, len(self._timestamps) - 1)

        # === Plot EMG waveform ===
        t = self._timestamps[:idx]
        self._curve1.setData(t, self._emgs[0][:idx])
        self._curve2.setData(t, self._emgs[1][:idx])
        self._curve3.setData(t, self._emgs[2][:idx])

        # === Plot features ===
        if hasattr(self, "_features") and self._features.shape[0] > 0:
            feat_win_incr = self._feature_extractor.WINC
            win_idx = idx // feat_win_incr
            win_idx = min(win_idx, self._features.shape[0])

            if win_idx > 0:
                x_feat = np.arange(win_idx)
                for feat_idx in range(4):
                    for ch in range(3):
                        y = self._features[:win_idx, feat_idx, ch]
                        self._feat_curves[feat_idx][ch].setData(x_feat, y)

    def view_saved_emg(self):
        base_path = QtWidgets.QFileDialog.getExistingDirectory(self, "Select Session Folder", "finalemg")
        if not base_path:
            return

        sets = sorted(p for p in os.listdir(base_path) if p.startswith("set"))
        if not sets:
            QtWidgets.QMessageBox.warning(self, "Error", "No sets found.")
            return

        set_choice, ok = QtWidgets.QInputDialog.getItem(self, "Select Set", "Choose Set:", sets, 0, False)
        if not ok:
            return
        set_path = os.path.join(base_path, set_choice)

        view_mode, ok = QtWidgets.QInputDialog.getItem(
            self, "View Mode", "View entire set or specific trial?",
            ["Whole Set (average overlay)", "Single Trial"], 0, False
        )
        if not ok:
            return

        # --- Get actions ---
        actions = sorted(p for p in os.listdir(set_path) if p.startswith("act"))
        if not actions:
            QtWidgets.QMessageBox.warning(self, "Error", "No actions in selected set.")
            return
        act_choice, ok = QtWidgets.QInputDialog.getItem(self, "Select Action", "Choose Action:", actions, 0, False)
        if not ok:
            return
        act_path = os.path.join(set_path, act_choice)

        # === Single Trial Mode ===
        if view_mode.startswith("Single"):
            trials = sorted(f for f in os.listdir(act_path) if f.endswith(".txt"))
            trial_choice, ok = QtWidgets.QInputDialog.getItem(self, "Select Trial", "Choose Trial:", trials, 0, False)
            if not ok:
                return
            trial_path = os.path.join(act_path, trial_choice)
            # Before reading trial
            timestamps = []
            emgs = [[], [], []]  # ch1, ch2, ch3

            with open(trial_path) as f:
                next(f)
                for line in f:
                    parts = line.strip().split('\t')
                    if len(parts) == 4:
                        ts_str, v1, v2, v3 = parts
                        timestamps.append(self._parse_timestamp(ts_str))
                        emgs[0].append(float(v1))
                        emgs[1].append(float(v2))
                        emgs[2].append(float(v3))

            self._show_emg_plot(timestamps, emgs, f"{set_choice}/{act_choice}/{trial_choice}")

        # === Full Set Mode (Overlay All Trials) ===
        else:
            emgs = [[], [], []]
            trials = sorted(f for f in os.listdir(act_path) if f.endswith(".txt"))
            self._loop_trials_in_set(trials, act_path, f"{set_choice}/{act_choice}")

    def _prev_trial_viewer(self):
        self._trial_index = max(0, self._trial_index - 1)
        self._viewer_window.close()
        self._next_trial_viewer()

    def _parse_timestamp(self, ts_str):
        formats = [
            "%Y-%m-%d %H:%M:%S.%f",
            "%Y-%m-%d %H:%M:%S",
            "%H:%M:%S.%f",
            "%H:%M:%S"
        ]
        for fmt in formats:
            try:
                return datetime.strptime(ts_str, fmt)
            except ValueError:
                continue
        raise ValueError(f"❌ Unsupported timestamp format: {ts_str}")

    def _loop_trials_in_set(self, trials, act_path, title_prefix):
        self._trial_index = 0
        self._trials = trials
        self._act_path = act_path
        self._title_prefix = title_prefix
        self._next_trial_viewer()

    def _next_trial_viewer(self):
        if self._trial_index >= len(self._trials):
            QtWidgets.QMessageBox.information(self, "Done", "Reached end of trials.")
            return

        trial_file = self._trials[self._trial_index]
        trial_path = os.path.join(self._act_path, trial_file)

        timestamps, ch1, ch2, ch3 = [], [], [], []
        with open(trial_path) as f:
            next(f)
            for line in f:
                parts = line.strip().split('\t')
                if len(parts) == 4:
                    ts_str, v1, v2, v3 = parts
                    timestamps.append(self._parse_timestamp(ts_str))
                    ch1.append(float(v1))
                    ch2.append(float(v2))
                    ch3.append(float(v3))

        save_img = os.path.join(self._act_path, f"{trial_file[:-4]}.png")
        self._show_emg_plot(timestamps, [ch1, ch2, ch3], f"{self._title_prefix}/{trial_file}", save_path=save_img)

        self._show_emg_plot(
                timestamps,
                [ch1, ch2, ch3],
                f"{self._title_prefix}/{trial_file}",
                save_path=save_img,
                show_navigation=True
            )

    def _next_trial_viewer_advance(self):
        self._trial_index += 1
        self._viewer_window.close()
        self._next_trial_viewer()
    
    def start_batch_video_dialog(self):
        self.start_camera()
        dlg = QtWidgets.QInputDialog
        sets,    ok1 = dlg.getInt(self, "Sets",    "How many sets?",    1, 1)
        acts,    ok2 = dlg.getInt(self, "Actions", "Actions per set?",  3, 1)
        trials,  ok3 = dlg.getInt(self, "Trials",  "Trials per action?",6, 1)
        samples, ok4 = dlg.getInt(self, "Samples", "Samples per trial?",5000, 100)
        if not all((ok1, ok2, ok3, ok4)):
            return

        # 📁 Setup base folder (avoid name collision)
        from datetime import datetime
        session_name = datetime.now().strftime("session_%Y%m%d_%H%M%S")
        base_folder = os.path.join("finalemg", session_name)
        i = 1
        while os.path.exists(base_folder):
            base_folder = os.path.join("finalemg", f"{session_name}_{i}")
            i += 1
        os.makedirs(base_folder)

        # 🎥 Start video recording to full session file
        video_path = os.path.join(base_folder, "full_session.avi")
        try:
            self.camera.start_recording(video_path)
            self.video_indicator.setText("Video: Recording")
            self.video_indicator.setStyleSheet("color: red; font-weight: bold;")
            logging.info(f"🎥 Video recording started: {video_path}")
        except Exception as e:
            logging.error(f"❌ Failed to start video recording: {e}")
            QtWidgets.QMessageBox.warning(self, "Error", f"Cannot start video recording.\n{e}")
            return

        # ▶️ Start Batch Recorder
        self.recorder = BatchRecorder(self, sets, acts, trials, samples, base_folder)
        self.toggle_next_btn(True)
        self.recorder.start()
        self.video_indicator.setText("Video: Recording")
        # 🧠 Also indicate EMG recording started
        self.recording_indicator.setText("EMG: Recording")
        self.recording_indicator.setStyleSheet("color: red; font-weight: bold;")
        logging.info("🧠 EMG recording indicator set ON for batch session.")

    def start_batch_dialog(self):
        dlg = QtWidgets.QInputDialog
        sets,    ok1 = dlg.getInt(self, "Sets",    "How many sets?",    1, 1)
        acts,    ok2 = dlg.getInt(self, "Actions", "Actions per set?",  3, 1)
        trials,  ok3 = dlg.getInt(self, "Trials",  "Trials per action?",6, 1)
        samples, ok4 = dlg.getInt(self, "Samples", "Samples per trial?",5000, 100)
        if all((ok1,ok2,ok3,ok4)):
            self.recorder = BatchRecorder(self, sets, acts, trials, samples)
            self.toggle_next_btn(True)
            self.recorder.start()
            # 🧠 Also indicate EMG recording started
            self.recording_indicator.setText("EMG: Recording")
            self.recording_indicator.setStyleSheet("color: red; font-weight: bold;")
            logging.info("🧠 EMG recording indicator set ON for batch session.")

    def handle_next_btn(self):
        if hasattr(self, "recorder"):
            self.recorder.next_trial()

    def update_plot(self):
        self.curve1.setData(self.ch1)
        self.curve2.setData(self.ch2)
        self.curve3.setData(self.ch3)

    def update_camera_frame(self, frame):
        h, w, ch = frame.shape
        bytes_per_line = ch * w
        qimg = QImage(frame.data, w, h, bytes_per_line, QImage.Format_RGB888)

        # Scale image to fit the label while keeping aspect ratio
        scaled = QPixmap.fromImage(qimg).scaled(
            self.video_label.size(),
            QtCore.Qt.KeepAspectRatio,
            QtCore.Qt.SmoothTransformation
        )
        self.video_label.setPixmap(scaled)

    def exit_program(self):
        logging.info("🔴 Exiting program...")
        # Stop EMG file recording
        self.stop_emg_recording()
        # Stop video recording
        self.stop_video_recording()
        # Stop camera
        self.stop_camera()
        # Close the app
        QtWidgets.QApplication.quit()

    def update_plot(self):
        self.curve1.setData(self.ch1)
        self.curve2.setData(self.ch2)
        self.curve3.setData(self.ch3)
        logging.debug("Plot updated with latest EMG values.")

    def add_data(self, ch1_val, ch2_val, ch3_val):
        self.ch1.append(ch1_val)
        self.ch2.append(ch2_val)
        self.ch3.append(ch3_val)
        if self.recording and self.emg_file:
            try:
                from datetime import datetime
                timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S.%f")[:-3]  # Keep milliseconds
                self.emg_file.write(f"{timestamp}\t{ch1_val:.6f}\t{ch2_val:.6f}\t{ch3_val:.6f}\n")
            except Exception as e:
                logging.error(f"❌ Error writing to EMG file: {e}")
        logging.debug(f"New EMG data added - Ch1: {ch1_val}, Ch2: {ch2_val}, Ch3: {ch3_val}")

    def set_y_range(self, y_min, y_max):
        self.y_min = y_min
        self.y_max = y_max
        self.plot.setYRange(self.y_min, self.y_max)
        logging.info(f"Y-axis range set to: {self.y_min:.2f} to {self.y_max:.2f}")

    def auto_adjust_y_range(self):
        """
        Automatically adjust Y-axis based on current signal range.
        """
        all_vals = list(self.ch1) + list(self.ch2) + list(self.ch3)
        if not all_vals:
            return

        max_val = max(all_vals)
        min_val = min(all_vals)
        if max_val == min_val:
            self.set_y_range(min_val - 1, max_val + 1)
            return

        margin = (max_val - min_val) * 0.1
        new_min = min_val - margin
        new_max = max_val + margin
        self.set_y_range(new_min, new_max)

    def zoom_in_y(self):
        """
        Narrow the Y-axis range by 10%.
        """
        range_span = self.y_max - self.y_min
        increment = range_span * 0.1
        self.set_y_range(self.y_min + increment, self.y_max - increment)

    def zoom_out_y(self):
        """
        Expand the Y-axis range by 10%.
        """
        range_span = self.y_max - self.y_min
        increment = range_span * 0.1
        self.set_y_range(self.y_min - increment, self.y_max + increment)

    def start_emg_recording(self):
        import os
        import re
        from datetime import datetime

        base_dir = "finalemg"

        # === Find or create next available set ===
        os.makedirs(base_dir, exist_ok=True)
        existing_sets = [d for d in os.listdir(base_dir) if os.path.isdir(os.path.join(base_dir, d)) and re.match(r'set\d+$', d)]
        set_nums = [int(re.search(r'\d+', s).group()) for s in existing_sets]
        next_set_num = max(set_nums) + 1 if set_nums else 1
        set_name = f"set{next_set_num}"
        set_path = os.path.join(base_dir, set_name)
        os.makedirs(set_path, exist_ok=True)

        # === Choose or create action folder ===
        act_name = "act1"  # You can dynamically change this if needed
        act_path = os.path.join(set_path, act_name)
        os.makedirs(act_path, exist_ok=True)

        # === Find next available trial number ===
        trial_files = sorted(
            [f for f in os.listdir(act_path) if f.startswith("trial_") and f.endswith(".txt")],
            key=lambda x: int(x.split("_")[1].split(".")[0])
        )
        next_trial_num = 1
        if trial_files:
            last_trial = trial_files[-1]
            last_num = int(last_trial.split("_")[1].split(".")[0])
            next_trial_num = last_num + 1

        trial_filename = f"trial_{next_trial_num}.txt"
        trial_path = os.path.join(act_path, trial_filename)

        try:
            self.emg_file = open(trial_path, 'w')
            self.recording = True
            self.recording_indicator.setText("EMG: Recording")
            self.recording_indicator.setStyleSheet("color: red; font-weight: bold;")
            logging.info(f"📁 EMG recording started: {trial_path}")
        except Exception as e:
            logging.error(f"❌ Failed to open file for EMG recording: {e}")

    def stop_emg_recording(self):
        if self.emg_file:
            self.emg_file.close()
            self.emg_file = None
            self.recording = False
            self.recording_indicator.setText("EMG: Not Recording")
            self.recording_indicator.setStyleSheet("color: black; font-weight: normal;")
            logging.info("📁 EMG recording stopped.")

   
    def start_emg_video_recording(self):
        import os
        import re
        from datetime import datetime

        base_dir = "finalemg"
        os.makedirs(base_dir, exist_ok=True)

        # === Find or create next available set ===
        existing_sets = [d for d in os.listdir(base_dir)
                        if os.path.isdir(os.path.join(base_dir, d)) and re.match(r'set\d+$', d)]
        set_nums = [int(re.search(r'\d+', s).group()) for s in existing_sets]
        next_set_num = max(set_nums) + 1 if set_nums else 1
        set_name = f"set{next_set_num}"
        set_path = os.path.join(base_dir, set_name)
        os.makedirs(set_path, exist_ok=True)

        # === Create action folder ===
        act_name = "act1"  # Replace with dynamic input if needed
        act_path = os.path.join(set_path, act_name)
        os.makedirs(act_path, exist_ok=True)

        # === Get trial number ===
        trial_files = sorted(
            [f for f in os.listdir(act_path) if f.startswith("trial_") and f.endswith(".txt")],
            key=lambda x: int(x.split("_")[1].split(".")[0])
        )
        next_trial_num = 1
        if trial_files:
            last_num = int(trial_files[-1].split("_")[1].split(".")[0])
            next_trial_num = last_num + 1

        trial_filename = f"trial_{next_trial_num}.txt"
        video_filename = f"video_{next_trial_num}.avi"
        trial_path = os.path.join(act_path, trial_filename)
        video_path = os.path.join(act_path, video_filename)

        # === Check if camera is running first ===
        if not self.camera or not self.camera.running:
            QtWidgets.QMessageBox.warning(self, "Camera Error", "Camera is not running.")
            logging.error("❌ Camera is not running. Aborting combined recording.")
            return

        # === Start EMG Recording ===
        try:
            self.emg_file = open(trial_path, 'w')
            self.recording = True
            self.recording_indicator.setText("EMG: Recording")
            self.recording_indicator.setStyleSheet("color: red; font-weight: bold;")
            logging.info(f"📁 EMG recording started: {trial_path}")
        except Exception as e:
            logging.error(f"❌ Failed to open EMG file: {e}")
            QtWidgets.QMessageBox.warning(self, "Error", f"Cannot start EMG recording.\n{e}")
            return

        # === Start Video Recording ===
        try:
            self.camera.start_recording(video_path)
            self.video_indicator.setText("Video: Recording")
            self.video_indicator.setStyleSheet("color: red; font-weight: bold;")
            logging.info(f"🎥 Video recording started: {video_path}")
        except Exception as e:
            logging.error(f"❌ Failed to start video recording: {e}")
            QtWidgets.QMessageBox.warning(self, "Error", f"Cannot start video recording.\n{e}")

            # If video fails, stop EMG too
            if self.recording:
                self.stop_emg_recording()

    def stop_emg_video_recording(self):
        self.stop_emg_recording()
        self.stop_video_recording()


    def start_video_recording(self, filename=None):
        if self.camera and self.camera.running:
            from datetime import datetime
            import os
            os.makedirs("finalemg", exist_ok=True)
            if not filename:
                filename = os.path.join("finalemg", datetime.now().strftime("video_%Y%m%d_%H%M%S.avi"))

            try:
                self.camera.start_recording(filename)
                self.video_indicator.setText("Video: Recording")
                self.video_indicator.setStyleSheet("color: red; font-weight: bold;")
                logging.info(f"🎥 Video recording started: {filename}")
            except Exception as e:
                logging.error(f"❌ Failed to start video recording: {e}")
                QtWidgets.QMessageBox.warning(self, "Error", f"Cannot start video recording.\n{e}")
        else:
            logging.warning("⚠️ Cannot start video recording: Camera is not running.")

    def stop_video_recording(self):
        if self.camera and self.camera.recording:
            self.camera.stop_recording()
            self.video_indicator.setText("Video: Not Recording")
            self.video_indicator.setStyleSheet("color: black; font-weight: normal;")


    def start_camera(self):
        if self.camera and not self.camera.running:
            if self.camera.start():
                logging.info("📷 Camera started via GUI.")
                self.cam_timer = QtCore.QTimer()
                self.cam_timer.timeout.connect(self.update_camera)
                self.cam_timer.start(30)

    def update_camera(self):
        if self.camera:
            frame = self.camera.get_latest_frame()
            if frame is not None:
                self.update_camera_frame(frame)

    def stop_camera(self):
        if hasattr(self, 'cam_timer'):
            self.cam_timer.stop()
        if self.camera and self.camera.running:
            self.camera.stop()
            self.video_label.clear()
            logging.info("📷 Camera stopped via GUI.")

