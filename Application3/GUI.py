import sys
import os
from PyQt5.QtWidgets import QApplication, QLabel, QWidget, QVBoxLayout, QPushButton, QMessageBox, QStackedWidget
from PyQt5.QtGui import QGuiApplication, QFont
from PyQt5.QtCore import Qt, pyqtSignal
from PyQt5.QtCore import Qt, pyqtSignal, QTimer
from MainPage import MainPage
from SessionPage import SessionPage
from CollectionPage import CollectionPage
import logging
from SessionSetting import SessionSetting

# ---- Logging setup ----
logging.basicConfig(
    filename="GeneralLog.log",
    level=logging.DEBUG,
    format="%(asctime)s - %(levelname)s - %(name)s - %(message)s"
)
logger = logging.getLogger(__name__)

# This file contains the main GUI application for the EMG GUI Application. 
# It defines the MainWindow class which manages the different pages of the application using a QStackedWidget. 
# Defines the following pages: 
# - EntryPage: The initial page that welcomes the user and has a button to enter the main application.

class MainWindow(QWidget):
    def __init__(self):
        super().__init__()
        logger.info("MainWindow: initializing")

        # ---- Ensure the 'sessions' folder exists next to this script ----
        current_dir = os.path.dirname(os.path.abspath(__file__))     # folder where this .py file is located
        self.base_folder = os.path.join(current_dir, "sessions") # path to sessions folder
        self.setting = None  # Initialize setting to None
        if not os.path.exists(self.base_folder):
            os.makedirs(self.base_folder)
            logger.info(f"Folder 'sessions' created at: {self.base_folder}")
        else:
            logger.info(f"Folder 'sessions' already exists at: {self.base_folder}")
        self.initUI()
        logger.info("MainWindow: initialization complete")

        
    def initUI(self):
        # Set window title
        self.setWindowTitle('EMG GUI Application')
        logger.debug("MainWindow: window title set")

        # Helper function to setup window size
        self._setup_size()
        self.stack = QStackedWidget(self)
        logger.debug("MainWindow: QStackedWidget created")

        # Create instances of different pages

        # Create EntryPage
        self.entry_page = EntryPage()
        logger.debug("MainWindow: EntryPage created")
        

        # Create MainPage
        self.main_page = MainPage(self.base_folder)
        logger.debug("MainWindow: MainPage created")

        # Create SessionPage
        self.session_page = SessionPage(self.base_folder)
        logger.debug("MainWindow: SessionPage created")

        # Create CollectionPage
        self.collection_page = CollectionPage(self.base_folder)
        logger.debug("MainWindow: CollectionPage created")

        # Add pages to the stacked widget
        self.stack.addWidget(self.entry_page)
        self.stack.addWidget(self.main_page)
        self.stack.addWidget(self.session_page)
        self.stack.addWidget(self.collection_page)
        logger.debug("MainWindow: pages added to stack")

        # wire up signals and slots for navigation between pages
        # Go to main page
        self.entry_page.go_to_main.connect(self._go_to_main_page)
        self.session_page.go_to_main.connect(self._go_to_main_page)
        # Go to entry page
        self.main_page.go_to_entry.connect(self._go_to_entry_page)
        # Go to session page 
        self.main_page.go_to_session.connect(self._go_to_session_page)
        self.collection_page.go_to_session.connect(self._go_to_session_page)
        # Go to collection page
        self.session_page.go_to_collection.connect(self._go_to_collection_page)

        logger.debug("MainWindow: navigation signals connected")

        # Layout to hold the stacked widget
        root_layout = QVBoxLayout()
        root_layout.addWidget(self.stack)
        self.setLayout(root_layout)
        logger.debug("MainWindow: layout set")

    def _go_to_collection_page(self,setting: object):
        logger.info("Clicked to go to CollectionPage")
        self.collection_page.load_session(setting)
        self.stack.setCurrentIndex(3)

    def _go_to_session_page(self, session_folder_path: str):
        logger.info("Clicked to go to SessionPage")
        # Always create/use SessionSetting – it handles existing vs new settings.json
        logger.debug(f"MainWindow: Creating SessionSetting for session folder: {session_folder_path}")
        setting = SessionSetting(self.base_folder, session_folder_path)
        logger.info(f"SessionSetting created for session folder: {session_folder_path}")
        # Pass BOTH to session page
        self.session_page.load_session(setting)
        self.stack.setCurrentIndex(2)

    def _go_to_main_page(self):
        logger.info("Clicked to go to MainPage")
        self.stack.setCurrentIndex(1)

    def _go_to_entry_page(self):
        logger.info("Clicked to go to EntryPage")
        self.stack.setCurrentIndex(0)

    # Setup Window size dynamically based on screen size
    def _setup_size(self):
        screen = QGuiApplication.primaryScreen()
        if screen:
            size = screen.availableGeometry().size()
            width = max(700, size.width() // 2)
            height = max(450, size.height() // 2)
            self.resize(width, height)
            logger.debug(
                f"MainWindow: screen detected, window resized to {width}x{height}"
            )
        else:
            self.resize(900, 600)
            logger.warning("MainWindow: no screen detected, default size 900x600 used")


# The EntryPage class represents the initial page of the application. It contains a title and a button to navigate to the main page.


class EntryPage(QWidget):

    # Signal emitted when the user clicks the "Enter Application" button
    go_to_main = pyqtSignal()

    # Initialize the entry page and set up the UI
    def __init__(self):
        super().__init__()
        logger.info("EntryPage: initializing")
        self._build_ui()
        logger.info("EntryPage: UI built")

    
    # Build the user interface for the entry page, including the title and the button to navigate to the main page
    def _build_ui(self):
        layout = QVBoxLayout()

        # Set title of the entry page
        self.title = QLabel('Welcome to the EMGs GUI Application', self)
        self.title.setFont(QFont("Playfair Display", 24))
        self.title.setAlignment(Qt.AlignCenter)
        layout.addWidget(self.title)

        # Button to navigate to the main page
        self.next_button = QPushButton('Enter Application', self)
        self.next_button.clicked.connect(self._on_next_clicked)
        layout.addWidget(self.next_button) 

        self.setLayout(layout)
        logger.debug("EntryPage: layout and widgets created")

    

    # Slot function called when the "Enter Application" button is clicked. It emits the nextRequested signal to navigate to the main page.
    def _on_next_clicked(self):
        logger.info("EntryPage: 'Enter Application' button clicked")
        self.go_to_main.emit()

    
    # Setup Window size dynamically based on screen size
    # This function checks the primary screen's available geometry and resizes the window accordingly. If no screen is detected, it defaults to a size of 900x600.
    def _setup_size(self):
        screen = QGuiApplication.primaryScreen()
        if screen:
            size = screen.availableGeometry().size()
            width = max(700, size.width() // 2)
            height = max(450, size.height() // 2)
            self.resize(width, height)
            logger.debug(
                f"EntryPage: screen detected, window resized to {width}x{height}"
            )
        else:
            self.resize(900, 600)
            logger.warning("EntryPage: no screen detected, default size 900x600 used")


# The main block of the application. It initializes the QApplication, creates an instance of MainWindow, and starts the event loop. It also includes error handling to log any unhandled exceptions that occur during the execution of the application.
if __name__ == '__main__':
    logger.info("Application starting")
    try:
        app = QApplication(sys.argv)
        mainWin = MainWindow()
        mainWin.show()
        logger.info("Main window shown")
        ret = app.exec_()
        logger.info(f"Application exiting with code {ret}")
        sys.exit(ret)
    except Exception:
        logger.exception("Unhandled exception in main application loop")
        sys.exit(1)
