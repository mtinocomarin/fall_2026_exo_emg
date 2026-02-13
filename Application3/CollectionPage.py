import logging
from PyQt5.QtWidgets import QWidget, QVBoxLayout, QLabel, QPushButton
from PyQt5.QtGui import QFont, QImage, QPixmap
from PyQt5.QtCore import Qt, pyqtSignal, QTimer
from SessionSetting import SessionSetting
from CameraClassFile import CameraClass
from FolderMangerClass import FolderManager
import os
from SerialClassFile import SerialEMGClass
import numpy as np
from collections import deque
import pyqtgraph as pg
from PyQt5.QtWidgets import QHBoxLayout
from PyQt5.QtWidgets import (
    QWidget, QVBoxLayout, QHBoxLayout, QLabel, QPushButton,
    QSplitter, QSizePolicy
)
import os
from pathlib import Path
import logging
from PyQt5.QtWidgets import (
    QWidget, QVBoxLayout, QHBoxLayout, QLabel, QPushButton,
    QSplitter, QSizePolicy, QInputDialog, QMessageBox
)
import time

logger = logging.getLogger(__name__)

class CollectionPage(QWidget): 

    # Signal to navigate back to session page
    go_to_session = pyqtSignal(str)  # Signal to go back to session page

    def __init__(self, base_folder: str):
        super().__init__()
        self.base_folder = base_folder          # Root sessions folder
        self.session_folder = None              # Specific session folder (set later)
        self.setting = None
        self.num_set_set = 1
        self.num_actions = 2
        self.num_trial_per_action = 6
        self.num_sample_per_trial = 2000
        self.current_set_index = 1
        self.current_action_index = 1
        self.current_trial_index = 1

        self.set_root = None      # e.g. .../Set-11-18-2025
        self.training_root = None # .../Set-.../Training
        self.testing_root = None  # .../Set-.../Testing

        self.cameraObject = CameraClass()  # Initialize camera object
        self.emgObject = SerialEMGClass(port='COM9',baudrate=500000)  # Initialize EMG object
        # EMG buffers (same idea as old EMGPlotter)
        window_size = 1000  # or whatever you used before
        self.ch1 = deque([0] * window_size, maxlen=window_size)
        self.ch2 = deque([0] * window_size, maxlen=window_size)
        self.ch3 = deque([0] * window_size, maxlen=window_size)
       
        # Timer to refresh camera feed
        self.timer = QTimer(self)
        self.timer.timeout.connect(self._update_frame)

        # Timer to refresh EMG plot
        self.emg_timer = QTimer(self)
        self.emg_timer.timeout.connect(self._update_emg)
        
        logger.debug("CollectionPage: Initialized with base folder %s", self.base_folder)
        self.initUI()

    def initUI(self):
        self.setWindowTitle('Collection Page')
        logger.debug("CollectionPage: Window title set to 'Collection Page'")

        layout = QVBoxLayout()
        layout.setSpacing(15)

        # ------------------ TITLE ------------------
        self.title = QLabel('Collection Page', self)
        self.title.setFont(QFont("Playfair Display", 12))
        self.title.setAlignment(Qt.AlignCenter)
        layout.addWidget(self.title)

        # ------------------ STATUS LABELS ------------------
        self.recording_status_label = QLabel('Recording Status: Not Recording', self)
        self.recording_status_label.setFont(QFont("Playfair Display", 12))
        self.recording_status_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(self.recording_status_label)

        self.emg_status_label = QLabel("EMG Status: Not Streaming", self)
        self.emg_status_label.setFont(QFont("Playfair Display", 12))
        self.emg_status_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(self.emg_status_label)

        # ============================================================
        #     SPLITTER: CAMERA (TOP)  +  EMG PLOT (BOTTOM)
        # ============================================================
        splitter = QSplitter(Qt.Vertical)

        # ------------------ VIDEO PREVIEW (TOP) ------------------
        self.video_label = QLabel("Camera not started", self)
        self.video_label.setAlignment(Qt.AlignCenter)
        self.video_label.setStyleSheet("background-color: black; color: white;")

        # Make it resizable instead of fixed size
        self.video_label.setMinimumHeight(200)
        self.video_label.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)

        splitter.addWidget(self.video_label)

        # ------------------ EMG PLOT (BOTTOM) ------------------
        self.emg_plot = pg.PlotWidget(self)
        self.emg_plot.showGrid(x=True, y=True)

        # Match old behavior: EMG in volts, 0–3 V
        self.emg_plot.setYRange(0,3)

        # Three curves for three EMG channels
        self.emg_curve1 = self.emg_plot.plot([], [], pen=pg.mkPen('#FF6B6B', width=2))  # ch1 - red
        self.emg_curve2 = self.emg_plot.plot([], [], pen=pg.mkPen('#6BFF6B', width=2))  # ch2 - green
        self.emg_curve3 = self.emg_plot.plot([], [], pen=pg.mkPen('#6BCBFF', width=2))  # ch3 - blue

        self.emg_plot.setMinimumHeight(150)
        self.emg_plot.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)

        splitter.addWidget(self.emg_plot)

        # Control how splitter space is distributed
        splitter.setStretchFactor(0, 3)  # camera area weight
        splitter.setStretchFactor(1, 2)  # emg area weight

        layout.addWidget(splitter)

        # ============================================================
        #                   BUTTON ROW HELPERS
        # ============================================================
        def make_row(*widgets):
            row = QHBoxLayout()
            row.setSpacing(15)
            row.addStretch()
            for w in widgets:
                w.setFixedWidth(180)
                row.addWidget(w)
            row.addStretch()
            return row

        # ------------------ EMG BUTTONS ------------------
        self.start_emg_button = QPushButton("Start EMG Stream")
        self.start_emg_button.clicked.connect(self._start_emg)

        self.stop_emg_button = QPushButton("Stop EMG Stream")
        self.stop_emg_button.clicked.connect(self._stop_emg)

        self.start_emg_record_button = QPushButton("Start EMG Recording")
        self.start_emg_record_button.clicked.connect(self._start_emg_recording)

        self.stop_emg_record_button = QPushButton("Stop EMG Recording")
        self.stop_emg_record_button.clicked.connect(self._stop_emg_recording)

        layout.addLayout(make_row(
            self.start_emg_button,
            self.stop_emg_button,
            self.start_emg_record_button,
            self.stop_emg_record_button,
        ))

        # ------------------ CAMERA BUTTONS ------------------
        self.start_camera_button = QPushButton('Start Camera')
        self.start_camera_button.clicked.connect(self._start_camera)

        self.stop_camera_button = QPushButton('Stop Camera')
        self.stop_camera_button.clicked.connect(self._stop_camera)

        layout.addLayout(make_row(
            self.start_camera_button,
            self.stop_camera_button,
        ))

        # ------------------ VIDEO RECORD BUTTONS ------------------
        self.start_recording_button = QPushButton('Start Video Recording')
        self.start_recording_button.clicked.connect(self._start_recording)

        self.stop_recording_button = QPushButton('Stop Video Recording')
        self.stop_recording_button.clicked.connect(self._stop_recording)

        layout.addLayout(make_row(
            self.start_recording_button,
            self.stop_recording_button,
        ))

        # ------------------ EMG + VIDEO RECORD BUTTONS ------------------
        self.start_both_button = QPushButton('Start EMG + Video')
        self.start_both_button.clicked.connect(self._start_emg_video_recording)

        self.stop_both_button = QPushButton('Stop EMG + Video')
        self.stop_both_button.clicked.connect(self._stop_emg_video_recording)

        layout.addLayout(make_row(
            self.start_both_button,
            self.stop_both_button,
        ))

        # --------------------------- EMG BATCH Recording----------------------------
        self.start_batch_button = QPushButton('Setup Batch (Folders + Params)')
        self.start_batch_button.clicked.connect(self._batch_emg_recording)

        self.start_trial_button = QPushButton('Start Trial Recording')
        self.start_trial_button.clicked.connect(self._start_trial)

        layout.addLayout(make_row(
            self.start_batch_button,
            self.start_trial_button,
        ))

        # ------------------ BACK BUTTON ------------------
        self.back_to_session_button = QPushButton('Back to Session Page')
        self.back_to_session_button.setFixedWidth(240)
        self.back_to_session_button.clicked.connect(self._on_back_to_session_clicked)

        back_row = QHBoxLayout()
        back_row.addStretch()
        back_row.addWidget(self.back_to_session_button)
        back_row.addStretch()
        layout.addLayout(back_row)

        self.setLayout(layout)
        logger.debug("CollectionPage: UI components added to layout")


    def _start_trial(self):
        """
        Start EMG recording for the current (action, trial) index.
        """
        if not self.training_root:
            logger.error("CollectionPage: Batch not initialized. Call _batch_emg_recording first.")
            self.emg_status_label.setText("EMG Status: Please run batch setup first")
            self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
            return

        if self.current_action_index > self.num_actions:
            logger.info("CollectionPage: All actions completed.")
            self.emg_status_label.setText("EMG Status: All actions/trials completed")
            self.emg_status_label.setStyleSheet("color: blue; font-weight: bold;")
            return

        if self.emgObject.recording:
            logger.warning("CollectionPage: EMG is already recording.")
            return

        # Decide folder and filename based on current indices
        action_str = f"Action{self.current_action_index}"
        action_folder = os.path.join(self.training_root, action_str)

        trial_filename = f"trial_{self.current_trial_index}.csv"

        logger.info(
            "Starting trial recording: Set %d, %s, Trial %d -> %s",
            self.current_set_index, action_str, self.current_trial_index, trial_filename
        )

        ok = self.emgObject.start_recording(
            action_folder,
            filename=trial_filename,
            max_records=self.num_sample_per_trial
        )

        if not ok:
            self.emg_status_label.setText("EMG Status: Failed to start trial recording")
            self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
            return

        self.recording_status_label.setText(
            f"Recording: Set {self.current_set_index}, {action_str}, Trial {self.current_trial_index}"
        )
        self.recording_status_label.setStyleSheet("color: green; font-weight: bold;")

    @staticmethod
    def build_emg_file_matrix(
        training_root: str,
        num_actions: int,
        trials_per_action: int,
        valid_exts=(".txt", ".csv"),
    ):
        """
        Given a Training root folder, build a matrix of EMG file paths.

        Matrix shape: [num_actions][trials_per_action]

        training_root/
            Action1/
                trial files...
            Action2/
                trial files...
            ...

        Returns:
            matrix: list of lists of Path objects
                    matrix[action_idx][trial_idx] -> Path
        """
        root = Path(training_root)
        if not root.is_dir():
            raise FileNotFoundError(f"Training root does not exist: {training_root}")

        matrix: list[list[Path]] = []

        for a in range(1, num_actions + 1):
            action_dir = root / f"Action{a}"
            if not action_dir.is_dir():
                raise FileNotFoundError(f"Missing folder: {action_dir}")

            # Collect all trial files with valid extension
            files = [
                p for p in action_dir.iterdir()
                if p.is_file() and p.suffix.lower() in valid_exts
            ]

            # Sort so order is consistent (trial1, trial2, ...)
            files = sorted(files)

            if len(files) != trials_per_action:
                msg = (
                    f"Action{a} has {len(files)} files, "
                    f"but expected {trials_per_action}. Folder: {action_dir}"
                )
                logger.error(msg)
                raise ValueError(msg)

            matrix.append(files)

        logger.info(
            "Built EMG file matrix with shape (%d actions x %d trials) from %s",
            num_actions, trials_per_action, training_root
        )
        return matrix
    
    def _build_matrix_for_training(self):
        try:
            self.emg_file_matrix = self.build_emg_file_matrix(
                self.training_root,
                self.num_actions,
                self.num_trial_per_action,
                valid_exts=(".csv", ".txt"),
            )
            logger.info("CollectionPage: EMG file matrix built successfully")
        except Exception as e:
            logger.error(f"CollectionPage: Failed to build EMG file matrix: {e}")
            return


    def _batch_emg_setup(self):
        
        # How many training sets?
        num_sets, ok = QInputDialog.getInt(
            self, "Training Sets", "How many training sets?"
        )
        if not ok:
            return

        num_actions, ok = QInputDialog.getInt(
            self, "Actions", "How many actions will be trained?"
        )
        if not ok:
            return

        trials_per_action, ok = QInputDialog.getInt(
            self, "Trials per Action", "How many trials per action?"
        )
        if not ok:
            return

        samples_per_trial, ok = QInputDialog.getInt(
            self, "Samples per Trial", "How many samples per trial?"
        )
        if not ok:
            return
        
        self.num_set_set = num_sets
        self.num_actions = num_actions
        self.num_trial_per_action = trials_per_action
        self.num_sample_per_trial = samples_per_trial

    def _advance_trial_index(self):
        """
        Advance (action, trial) indices for the next trial.
        """
        self.current_trial_index += 1
        if self.current_trial_index > self.num_trial_per_action:
            self.current_trial_index = 1
            self.current_action_index += 1

        # If you want to support multiple sets in the future, you can extend here:
        # if self.current_action_index > self.num_actions:
        #     self.current_action_index = 1
        #     self.current_set_index += 1

        logger.info(
            "Next trial index -> Set %d, Action %d, Trial %d",
            self.current_set_index, self.current_action_index, self.current_trial_index
    )

        
    def _batch_emg_recording(self): 
        """
        Setup batch EMG collection: folder structure + parameters + index reset.
        """
        if not self.session_folder:
            logger.error("CollectionPage: Cannot start Batch EMG recording, session_folder is None.")
            self.emg_status_label.setText("EMG Status: No session folder set")
            self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
            return

        # Make sure EMG stream is running
        if not self.emgObject.running:
            logger.info("CollectionPage: EMG not running, starting EMG before recording")
            self._start_emg()

        # Ask for num_sets, num_actions, trials, samples, etc.
        self._batch_emg_setup()
        if self.num_actions <= 0 or self.num_trial_per_action <= 0:
            logger.error("CollectionPage: Invalid batch parameters.")
            return

        emg_folder = os.path.join(self.session_folder, "EMG")
        os.makedirs(emg_folder, exist_ok=True)

        date_str = time.strftime("%m-%d-%Y", time.localtime())
        self.set_root = os.path.join(emg_folder, f"Set-{date_str}")
        self.training_root = os.path.join(self.set_root, "Training")
        self.testing_root = os.path.join(self.set_root, "Testing")

        os.makedirs(self.training_root, exist_ok=True)
        os.makedirs(self.testing_root, exist_ok=True)

        # Create action folders (Action1, Action2, ...)
        for a in range(1, self.num_actions + 1):
            action_folder = os.path.join(self.training_root, f"Action{a}")
            os.makedirs(action_folder, exist_ok=True)

        # Reset indices
        self.current_set_index = 1
        self.current_action_index = 1
        self.current_trial_index = 1

        logger.info(
            "Batch EMG setup complete. Set root: %s, Actions: %d, Trials per Action: %d",
            self.set_root, self.num_actions, self.num_trial_per_action
        )
        self.emg_status_label.setText(
            f"Batch Ready: Set {self.current_set_index}, Action {self.current_action_index}, Trial {self.current_trial_index}"
        )
        self.emg_status_label.setStyleSheet("color: green; font-weight: bold;")

        

    def _start_emg_video_recording(self):
        """
        Start EMG recording and video recording at (almost) the same time.
        Uses the same session folder, with EMG in <session>/EMG
        and video in <session>/Recording.
        """
        if not self.session_folder:
            logger.error("CollectionPage: Cannot start EMG+Video, session_folder is None.")
            self.emg_status_label.setText("EMG Status: No session folder set")
            self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
            self.video_label.setText("No session folder set!")
            return

        # Prepare subfolders
        emg_folder = os.path.join(self.session_folder, "EMG")
        rec_folder = os.path.join(self.session_folder, "Recording")
        os.makedirs(emg_folder, exist_ok=True)
        os.makedirs(rec_folder, exist_ok=True)

        # Make sure EMG streaming is running
        if not self.emgObject.running:
            logger.info("CollectionPage: EMG not running, starting EMG before EMG+Video recording")
            ok_emg_stream = self.emgObject.start()
            if not ok_emg_stream:
                logger.error("CollectionPage: Failed to start EMG stream")
                self.emg_status_label.setText("EMG Status: Failed to Start")
                self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
                return
            # start EMG plot timer
            self.emg_timer.start(10)

        # Make sure camera is running
        if not self.cameraObject.running:
            logger.info("CollectionPage: Camera not running, starting camera before EMG+Video recording")
            ok_cam_stream = self.cameraObject.start()
            if not ok_cam_stream:
                logger.error("CollectionPage: Failed to start camera")
                self.video_label.setText("Failed to start camera")
                return
            # start video update timer
            self.timer.start(30)

        # ---- Start EMG recording ----
        emg_ok = self.emgObject.start_recording(emg_folder)

        # ---- Start Video recording ----
        cam_ok = self.cameraObject.start_recording(rec_folder)

        # ---- Handle results ----
        if emg_ok and cam_ok:
            logger.info("CollectionPage: EMG + Video recording started")
            self.emg_status_label.setText("EMG Status: ● Recording")
            self.emg_status_label.setStyleSheet("color: orange; font-weight: bold;")
            self.recording_status_label.setText("Recording Status: ● EMG + Video")
            self.recording_status_label.setStyleSheet("color: red; font-weight: bold;")
            self.video_label.setText("Recording EMG + Video...")
        else:
            # If one failed, be safe and stop any partial recording
            if emg_ok and not cam_ok:
                logger.error("CollectionPage: Camera recording failed, stopping EMG recording")
                self.emgObject.stop_recording()
            if cam_ok and not emg_ok:
                logger.error("CollectionPage: EMG recording failed, stopping camera recording")
                self.cameraObject.stop_recording()

            self.emg_status_label.setText("EMG Status: Recording Failed")
            self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
            self.recording_status_label.setText("Recording Status: Recording Failed")
            self.recording_status_label.setStyleSheet("color: red; font-weight: bold;")
    
    def _stop_emg_video_recording(self):
        """
        Stop EMG recording and video recording together.
        Leaves streaming on if the streams are still running.
        """
        logger.info("CollectionPage: Stop EMG + Video button clicked")

        # Stop EMG recording if active
        if getattr(self.emgObject, "recording", False):
            self.emgObject.stop_recording()
            logger.info("CollectionPage: EMG recording stopped (EMG+Video)")

        # Stop video recording if active
        if getattr(self.cameraObject, "recording", False):
            self.cameraObject.stop_recording()
            logger.info("CollectionPage: Video recording stopped (EMG+Video)")

        # Update labels depending on whether streams are still running
        if self.emgObject.running:
            self.emg_status_label.setText("EMG Status: Streaming")
            self.emg_status_label.setStyleSheet("color: green; font-weight: bold;")
        else:
            self.emg_status_label.setText("EMG Status: Not Streaming")
            self.emg_status_label.setStyleSheet("color: gray; font-weight: bold;")

        self.recording_status_label.setText("Recording Status: Not Recording")
        self.recording_status_label.setStyleSheet("color: gray; font-weight: bold;")
        self.video_label.setText("Camera running" if self.cameraObject.running else "Camera stopped")


    def _start_emg(self):
        logger.info("CollectionPage: Start EMG button clicked")
        if not self.emgObject.running:
            ok = self.emgObject.start()
            if not ok:
                logger.error("CollectionPage: Failed to start EMG serial")
                self.emg_status_label.setText("EMG Status: Failed to Start")
                self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
                return

        self.emg_status_label.setText("EMG Status: Streaming")
        self.emg_status_label.setStyleSheet("color: green; font-weight: bold;")

        # Start EMG GUI updates (separate from camera timer)
        self.emg_timer.start(33)  # update ~33 Hz

    def _start_emg_recording(self):
        if not self.session_folder:
            logger.error("CollectionPage: Cannot start EMG recording, session_folder is None.")
            self.emg_status_label.setText("EMG Status: No session folder set")
            self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
            return

        emg_folder = os.path.join(self.session_folder, "EMG")
        os.makedirs(emg_folder, exist_ok=True)

        # Make sure EMG stream is running
        if not self.emgObject.running:
            logger.info("CollectionPage: EMG not running, starting EMG before recording")
            self._start_emg()

        ok = self.emgObject.start_recording(emg_folder)
        if not ok:
            logger.error("CollectionPage: Failed to start EMG recording")
            self.emg_status_label.setText("EMG Status: Failed to start recording")
            self.emg_status_label.setStyleSheet("color: red; font-weight: bold;")
        else:
            logger.info("CollectionPage: EMG recording started")
            self.emg_status_label.setText("EMG Status: ● Recording")
            self.emg_status_label.setStyleSheet("color: orange; font-weight: bold;")


    def _stop_emg_recording(self):
        """
        Stop EMG logging for the current trial and advance batch indices.
        """
        if self.emgObject.recording:
            self.emgObject.stop_recording()
            logger.info("CollectionPage: EMG recording stopped")
        else:
            logger.warning("CollectionPage: No EMG recording in progress to stop")

        # Restore streaming status badge
        if self.emgObject.running:
            self.emg_status_label.setText("EMG Status: Streaming")
            self.emg_status_label.setStyleSheet("color: green; font-weight: bold;")
        else:
            self.emg_status_label.setText("EMG Status: Not Streaming")
            self.emg_status_label.setStyleSheet("color: gray; font-weight: bold;")

        # ================================
        #   Batch Recording Logic HERE
        # ================================
        # If batch was never initialized, do nothing
        if not self.training_root:
            return  

        # Advance indices (action/trial)
        self._advance_trial_index()

        # If finished all actions
        if self.current_action_index > self.num_actions:
            logger.info("CollectionPage: All batch actions/trials completed.")
            self.emg_status_label.setText("Batch: All trials completed")
            self.emg_status_label.setStyleSheet("color: blue; font-weight: bold;")
            return

        # Otherwise show the next expected action/trial
        self.emg_status_label.setText(
            f"Batch Ready: Next → Action {self.current_action_index}, "
            f"Trial {self.current_trial_index}"
        )
        self.emg_status_label.setStyleSheet("color: green; font-weight: bold;")

        # Reset the “Recording status” label
        self.recording_status_label.setText("Recording Status: Not Recording")
        self.recording_status_label.setStyleSheet("")




    def _stop_emg(self):
        logger.info("CollectionPage: Stop EMG button clicked")
        self.emg_timer.stop()
        try:
            self.emgObject.stop()
        except AttributeError:
            logger.warning("CollectionPage: emgObject has no stop() method")

        self.emg_status_label.setText("EMG Status: Not Streaming")
        self.emg_status_label.setStyleSheet("color: gray; font-weight: bold;")

    def _update_emg(self):
        """
        Called periodically by self.emg_timer.
        Grabs latest EMG sample from SerialEMGClass and updates the 3-channel plot.
        """
        if self.emgObject is None:
            return

        # Your SerialEMGClass should return something like (ch1, ch2, ch3) in volts
        samples = self.emgObject.get_latest_samples()
        if samples is None:
            return

        ch1_emg, ch2_emg, ch3_emg = samples  # already 0–3 V if you set it up that way

        # Append to buffers
        self.ch1.append(ch1_emg)
        self.ch2.append(ch2_emg)
        self.ch3.append(ch3_emg)

        # X-axis (just indices 0..len-1)
        x = np.arange(len(self.ch1))

        # Update the 3 curves
        self.emg_curve1.setData(x, list(self.ch1))
        self.emg_curve2.setData(x, list(self.ch2))
        self.emg_curve3.setData(x, list(self.ch3))




    # Method to stop recording
    def _stop_recording(self):
        if self.cameraObject.recording:
            self.cameraObject.stop_recording()
            logger.info("CollectionPage: Recording stopped successfully")
        else:
            logger.warning("CollectionPage: No recording in progress to stop")

        self.recording_status_label.setText("Recording Status: Not Recording")
        self.recording_status_label.setStyleSheet("color: gray; font-weight: bold;")


    # Method to start recording
    def _start_recording(self):
        if not self.session_folder:
            logger.error("CollectionPage: Cannot start recording, session_folder is None.")
            self.video_label.setText("No session folder set!")
            return

        # Check / create Recording folder
        recording_folder = os.path.join(self.session_folder, "Recording")
        os.makedirs(recording_folder, exist_ok=True)

        # Ensure camera is running
        if not self.cameraObject.running:
            logger.info("CollectionPage: Camera not running, starting camera before recording")
            self._start_camera()

        ok = self.cameraObject.start_recording(recording_folder)
        if not ok:
            logger.error("CollectionPage: Failed to start recording")
            self.video_label.setText("Failed to start recording")
        else:
            logger.info("CollectionPage: Recording started")
            self.video_label.setText("Recording in progress...")
            self.recording_status_label.setText("Recording Status: ● Recording")
            self.recording_status_label.setStyleSheet("color: red; font-weight: bold;")

    # Method to start the camera and timer
    def _start_camera(self):
        logger.info("CollectionPage: Start Camera button clicked")
        ok = self.cameraObject.start()
        if not ok:
            logger.error("CollectionPage: Failed to start camera")
            self.video_label.setText("Failed to start camera")
        else:
            logger.info("CollectionPage: Camera started successfully")
            self.video_label.setText("Starting camera feed...")
            self.timer.start(30)  # ~33 FPS update

    # Method to update the video feed with the latest frame from the camera

    def _update_frame(self):
        """Called by QTimer: grab latest frame from camera and display it."""
        frame = self.cameraObject.get_latest_frame()
        if frame is None:
            return  # no frame yet, just skip

        h, w, ch = frame.shape          # frame is RGB numpy array
        bytes_per_line = ch * w

        qimg = QImage(frame.data, w, h, bytes_per_line, QImage.Format_RGB888)
        pixmap = QPixmap.fromImage(qimg)

        # Scale to fit label while keeping aspect ratio
        pixmap = pixmap.scaled(
            self.video_label.width(),
            self.video_label.height(),
            Qt.KeepAspectRatio,
            Qt.SmoothTransformation
        )
        self.video_label.setPixmap(pixmap)

    # Method to stop the camera and timer

    def _stop_camera(self):
        logger.info("CollectionPage: Stop Camera button clicked")
        self._cleanup_camera()
        self.video_label.setText("Camera stopped")
        self.video_label.setPixmap(QPixmap())

    # Method to go back to the session page

    def _on_back_to_session_clicked(self):
        logger.info("CollectionPage: Back to Session Page button clicked")
        self._cleanup_camera()
        self.go_to_session.emit(self.session_folder)

    # Override closeEvent to ensure camera and timer are stopped when the window is closed

    def closeEvent(self, event):
        logger.info("CollectionPage: window closing, stopping camera/timer")
        self._cleanup_camera()
        super().closeEvent(event)

    # Method to clean up camera and timer resources safely

    def _cleanup_camera(self):
        """Stop timers and camera/EMG safely."""
        self.timer.stop()
        self.emg_timer.stop()

        try:
            self.cameraObject.stop()
        except AttributeError:
            logger.warning("CollectionPage: cameraObject has no stop() method")

        try:
            self.emgObject.stop()
        except AttributeError:
            logger.warning("CollectionPage: emgObject has no stop() method")

        self.recording_status_label.setText("Recording Status: Not Recording")
        self.recording_status_label.setStyleSheet("color: gray; font-weight: bold;")
        self.emg_status_label.setText("EMG Status: Not Streaming")
        self.emg_status_label.setStyleSheet("color: gray; font-weight: bold;")



    # Method to load a session folder and update the label accordingly
    def load_session(self,  setting):
        """Called by SessionPage when a specific session is selected/created."""
        self.setting = setting
        self.session_folder = setting.get("Session_Folder_Path")
        logger.info("CollectionPage: Loaded session folder %s", self.session_folder)
        self.cameraObject.session_folder = self.session_folder  # Update camera's session folder
        self.emgObject.session_folder = self.session_folder  # Update EMG's session folder

if __name__ == "__main__":
    import sys
    from PyQt5.QtWidgets import QApplication
    app = QApplication(sys.argv)

    base_folder = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application3\sessions"
    session_folder_path = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application3\sessions\hello"
    setting = SessionSetting(base_folder, session_folder_path)
    collection_page = CollectionPage(base_folder)
    collection_page.load_session(setting)
    collection_page.show()
    sys.exit(app.exec_())
