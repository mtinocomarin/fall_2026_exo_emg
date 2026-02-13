from PyQt5.QtWidgets import QWidget, QVBoxLayout, QLabel, QPushButton
from PyQt5.QtCore import Qt, pyqtSignal
from PyQt5.QtWidgets import QInputDialog
from PyQt5.QtGui import QFont
from PyQt5.QtWidgets import QInputDialog, QMessageBox
import os

from PyQt5.QtWidgets import QInputDialog, QMessageBox


from FolderMangerClass import FolderManager
from SessionSetting import SessionSetting

import logging
logger = logging.getLogger(__name__)


class MainPage(QWidget):
    # Signals to navigate to other pages
    go_to_entry = pyqtSignal()
    go_to_session = pyqtSignal(str)  

    def __init__(self,base_folder):
        super().__init__()
        self.base_folder = base_folder
        self.folder_manager = FolderManager(self.base_folder)
        logger.info("MainPage: initializing UI")
        self.initUI()
        logger.info("MainPage: UI initialization complete")

    def initUI(self):
        layout = QVBoxLayout()

        # Set window title, font and layout
        self.setWindowTitle('Main Page')
        logger.debug("MainPage: window title set to 'Main Page'")

        self.title = QLabel('EMG Application Options', self)
        self.title.setFont(QFont("Playfair Display", 24))
        self.title.setAlignment(Qt.AlignCenter)
        logger.debug("MainPage: title label created")

        # Button to continue a previous session
        self.continue_button = QPushButton('Continue Previous Session', self)
        self.continue_button.clicked.connect(self.continue_session_clicked)
        logger.debug("MainPage: continue button created and connected")

        # Button to start new session
        self.start_button = QPushButton('Start New Session', self)
        self.start_button.clicked.connect(self.newsession_clicked)
        logger.debug("MainPage: start button created and connected")

        # Button to go back to entry page
        self.back_button = QPushButton('Back to Entry Page', self)
        self.back_button.clicked.connect(self._on_back_clicked)
        logger.debug("MainPage: back button created and connected")

        # Add widgets to layout
        layout.addWidget(self.title)
        layout.addWidget(self.start_button)   # ✅ show the start button
        layout.addWidget(self.continue_button)  # ✅ show the continue button
        layout.addWidget(self.back_button)
        self.setLayout(layout)
        logger.debug("MainPage: layout set")

    # Method to Continue a previous Session.
    # List all existing session folders and allow the user to select one to continue.
    def continue_session_clicked(self):
        logger.info("MainPage: 'Continue Previous Session' button clicked")
        # List all existing session folders
        sessions = [f for f in os.listdir(self.base_folder) if os.path.isdir(os.path.join(self.base_folder, f))]
        
        if not sessions:
            logger.warning("MainPage: No existing sessions found")
            QMessageBox.information(self, "No Sessions", "No existing sessions found.")
            return

        # Ask user to select a session
        session_name, ok = QInputDialog.getItem(
            self,
            "Select Session",
            "Choose a session to continue:",
            sessions,
            0,
            False
        )

        if ok and session_name:
            logger.info(f"MainPage: User selected session '{session_name}' to continue")
            QMessageBox.information(self, "Session Selected", f"Continuing session '{session_name}'.")
            session_folder_path = os.path.join(self.base_folder, session_name)
        else:
            logger.info("MainPage: User canceled session selection or did not select a valid session")

        logger.info(f"MainPage: Emitting go_to_session signal with session folder path: {session_folder_path}")
        self.go_to_session.emit(session_folder_path)  # Emit signal to navigate to session page with session folder path
        logger.debug("MainPage: go_to_session signal emitted")
    


    # Method to Start a new Session.
    # Ask User for Session Name and create a new folder for that session using the FolderManager.
    def newsession_clicked(self):
        logger.info("MainPage: 'Start New Session' button clicked")
        # Ask user for session name
        session_name, ok = QInputDialog.getText(
            self,
            "New Session",
            "Enter Session Name:"
        )

        # If user presses Cancel
        if not ok:
            logger.info("MainPage: User canceled new session creation")
            return

        # Remove leading/trailing spaces
        session_name = session_name.strip()

        # If user entered nothing
        if session_name == "":
            logger.warning("MainPage: User entered an empty session name")
            QMessageBox.warning(self, "Invalid Name", "Session name cannot be empty.")
            return

        # Full path to the session folder
        session_folder_path = os.path.join(self.base_folder, session_name)

        # Check if this session already exists
        if os.path.exists(session_folder_path):
            logger.warning(f"MainPage: Session '{session_name}' already exists")
            QMessageBox.warning(
                self,
                "Already Exists",
                f"A session named '{session_name}' already exists."
            )
            return

        # Create new folder
        session_folder_path = self.folder_manager.create_folder(session_name)

        logger.info(f"MainPage: Session folder created -> {session_folder_path}")

        QMessageBox.information(
            self,
            "Session Created",
            f"Session '{session_name}' created successfully."
        )

        # create settings file for this session
        setting = SessionSetting(self.base_folder, session_folder_path)

        # Emit signal to navigate to session page with session folder path
        logger.info(f"MainPage: Session '{session_name}' created successfully, emitting go_to_session signal")
        self.go_to_session.emit(session_folder_path)  # Emit signal to navigate to session page with session folder path
        logger.debug("MainPage: go_to_session signal emitted")

    def _on_back_clicked(self):
        logger.info("MainPage: 'Back to Entry Page' button clicked")
        self.go_to_entry.emit()
        logger.debug("MainPage: go_to_entry signal emitted")
