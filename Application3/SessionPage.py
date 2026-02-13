import logging
from PyQt5.QtWidgets import QWidget, QVBoxLayout, QLabel
from PyQt5.QtGui import QFont
from PyQt5.QtWidgets import QWidget, QVBoxLayout, QLabel, QPushButton
from PyQt5.QtCore import Qt, pyqtSignal
from PyQt5.QtWidgets import QInputDialog
from PyQt5.QtGui import QFont
from PyQt5.QtWidgets import QInputDialog, QMessageBox
import os
from FolderMangerClass import FolderManager
from PyQt5.QtWidgets import QListWidget
from SessionSetting import SessionSetting

from PyQt5.QtWidgets import QInputDialog, QMessageBox

logger = logging.getLogger(__name__)


class SessionPage(QWidget):
    # Signals to navigate to other pages
    go_to_main = pyqtSignal()  # Signal to go back to main page
    go_to_collection = pyqtSignal(object)  # Signal to go to collection page


    def __init__(self, base_folder: str):
        super().__init__()
        self.base_folder = base_folder          # Root sessions folder
        self.session_folder = None              # Specific session folder (set later)
        self.setting = None                     # Session settings (set later)
        logger.info("SessionPage: initializing UI")
        self.initUI()
        logger.info("SessionPage: UI initialization complete")
        self.folder_manager = None 

    def initUI(self):
        layout = QVBoxLayout()

        # Set window title
        self.setWindowTitle('Session Page')
        logger.debug("SessionPage: window title set to 'Session Page'")

        # ---- Folder label (BIG + BOLD) ----
        self.folder_label = QLabel("No session loaded yet.")
        bold_font = QFont("Arial", 10)
        bold_font.setBold(True)
        self.folder_label.setFont(bold_font)
        self.folder_label.setAlignment(Qt.AlignCenter)
        

        # ---- Page Title ----
        self.title = QLabel('Session Page', self)
        self.title.setFont(QFont("Playfair Display", 10))
        self.title.setAlignment(Qt.AlignCenter)
        layout.addWidget(self.title)
        layout.addWidget(self.folder_label)  # Top of page

        # --- File Content ---
        self.list_widget = QListWidget()
        layout.addWidget(self.list_widget)

        # ---Buttons---

        # Button to go back to main page
        self.back_to_main_button = QPushButton('Back to Main Page', self)
        self.back_to_main_button.clicked.connect(self._on_back_main_clicked)
        layout.addWidget(self.back_to_main_button)

        # Button to go to collection page 
        self.go_to_collection_button = QPushButton('Go to Collection Page', self)
        self.go_to_collection_button.clicked.connect(self._on_go_to_collection_clicked)
        layout.addWidget(self.go_to_collection_button)

        self.setLayout(layout)
        logger.debug("SessionPage: UI components added to layout")


    def _on_go_to_collection_clicked(self):
        logger.info("SessionPage: Go to Collection Page button clicked")
        if not self.session_folder:
            QMessageBox.warning(self, "No Session Loaded", "Please load a session before going to the collection page.")
            logger.warning("SessionPage: No session loaded, cannot go to collection page")
            return
        self.go_to_collection.emit(self.setting)  # Emit signal to go to collection page
        logger.info("SessionPage: Emitted signal to go to collection page")


    # Method to go back to the main page
    def _on_back_main_clicked(self):
        logger.info("SessionPage: Back to Main Page button clicked")
        self.go_to_main.emit()  # Emit signal to go back to main page
        logger.info("SessionPage: Emitted signal to go back to main page")

    # Method to load a session folder and update the label accordingly
    def load_session(self,setting):
        self.setting = setting
        self.session_folder = setting.get("Session_Folder_Path")
        print(f"SessionPage: Loading session from folder: {self.session_folder}")
        logger.info(f"SessionPage: Loading session from folder: {self.session_folder}")
        # Update label to show the current session
        self.folder_label.setText(f"Session Folder: {self.session_folder}")
        # Initialize the FolderManager for this session
        self.folder_manager = FolderManager(self.session_folder)
        self.display_session_contents()

    def display_session_contents(self):
        if not self.folder_manager or not self.session_folder:
            return

        data = self.folder_manager.list_items(self.session_folder)

        self.list_widget.clear()

        # ----- FILES -----
        self.list_widget.addItem("Files:")
        for f in data["files"]:
            self.list_widget.addItem(f"   • {f}")      # indented file

        # Add spacing
        self.list_widget.addItem("")

        # ----- FOLDERS -----
        self.list_widget.addItem("Folders:")
        for folder_name, sub_items in data["folders"].items():
            self.list_widget.addItem(f"   📁 {folder_name}")   # folder name with icon

            # Show first 3 items inside folder (already handled by your folder manager)
            if sub_items:
                for s in sub_items:
                    self.list_widget.addItem(f"       └── {s}")  # sub-item indented
            else:
                self.list_widget.addItem("       └── (empty)")   # show empty folder


if __name__ == "__main__":
    import sys
    from PyQt5.QtWidgets import QApplication

    app = QApplication(sys.argv)

    # Example base folder (fix paths with raw strings)
    base_folder = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application3\sessions"
    session_folder_path = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application3\sessions\hello"

    # Create the page
    page = SessionPage(base_folder)
    

    # Test session loading
    page.load_session(session_folder_path)
    page.show()  # Show only this widget for testing

    sys.exit(app.exec_())
