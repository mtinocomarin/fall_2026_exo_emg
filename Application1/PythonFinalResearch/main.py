import logging
import sys
import os
from PyQt5 import QtWidgets, QtCore
from PyQt5.QtGui import QPixmap, QPainter, QColor, QBrush
from serial_handler import SerialEMGHandler
from guiclass import EMGPlotter
from cameraclass import CameraCapture

# Clear log file at the start
open('emg_app.log', 'w').close()

logging.basicConfig(
    filename='emg_app.log',
    level=logging.INFO,
    format='%(asctime)s [%(levelname)s] %(message)s',
    datefmt='%Y-%m-%d %H:%M:%S'
)

# === Custom background widget that paints a semi-transparent logo ===
class BackgroundWidget(QtWidgets.QWidget):
    def __init__(self, background_path, opacity=0.3, parent=None):
        super().__init__(parent)
        self.pixmap = QPixmap(background_path)
        self.opacity = opacity

    def paintEvent(self, event):
        painter = QPainter(self)

        # Step 1: Fill with semi-transparent dark overlay
        dark_tint = QColor(0, 0, 0, 180)  # RGBA — adjust 100 for more/less darkness
        painter.fillRect(self.rect(), dark_tint)

        # Step 2: Draw semi-transparent logo on top
        painter.setOpacity(self.opacity)
        if not self.pixmap.isNull():
            scaled = self.pixmap.scaled(
                self.size(),
                QtCore.Qt.KeepAspectRatioByExpanding,
                QtCore.Qt.SmoothTransformation
            )
            painter.drawPixmap(0, 0, scaled)



# === Main Welcome Screen ===
class WelcomeScreen(BackgroundWidget):
    enter_clicked = QtCore.pyqtSignal()

    def __init__(self):
        super().__init__(background_path="sfsu.png", opacity=0.9)
        self.setWindowTitle("SFSU")

        # === Outer layout ===
        outer_layout = QtWidgets.QVBoxLayout(self)
        outer_layout.setContentsMargins(0, 0, 0, 0)

        # === Gold bordered frame ===
        frame = QtWidgets.QFrame()
        frame.setStyleSheet("""
            QFrame {
                border: 4px solid #FFD700;
                border-radius: 10px;
                background-color: transparent;
            }
        """)

        inner_layout = QtWidgets.QVBoxLayout(frame)
        inner_layout.setSpacing(20)
        inner_layout.setContentsMargins(30, 30, 30, 30)

        # === Title ===
        title = QtWidgets.QLabel("SFSU ICE-LAB RESEARCH sEMG INTERFACE")
        title.setAlignment(QtCore.Qt.AlignCenter)
        title.setStyleSheet("""
            font-size: 22pt;
            font-weight: bold;
            color: #FFD700;
            background: transparent;
            border: none;
        """)
        inner_layout.addWidget(title)

        # === Button ===
      # === Spacer (above) ===
        inner_layout.addStretch()

        # === Button centered vertically ===
        enter_btn = QtWidgets.QPushButton("Enter Application")
        enter_btn.setFixedHeight(45)
        enter_btn.setStyleSheet("""
            QPushButton {
                background-color: #DAA520;
                color: white;
                font-size: 20pt;
                font-weight: bold;
                border-radius: 30px;
            }
            QPushButton:hover {
                background-color: #9C27B0;
;
            }
        """)
        enter_btn.clicked.connect(self.enter_clicked.emit)
        inner_layout.addWidget(enter_btn, alignment=QtCore.Qt.AlignCenter)

        # === Spacer (below) ===
        inner_layout.addStretch()

        # === Bottom-right ICE Lab logo ===
        logo_row = QtWidgets.QHBoxLayout()
        logo_row.addStretch()

        ice_logo = QtWidgets.QLabel()
        ice_pixmap = QPixmap("icelab.png")
        if not ice_pixmap.isNull():
            ice_logo.setPixmap(ice_pixmap.scaled(500, 80, QtCore.Qt.KeepAspectRatio, QtCore.Qt.SmoothTransformation))
        else:
            ice_logo.setText("[ICE Lab Logo Not Found]")
        ice_logo.setStyleSheet("background: transparent; border: none;")

        logo_row.addWidget(ice_logo)
        inner_layout.addLayout(logo_row)

        # === Final assembly ===
        outer_layout.addWidget(frame)
        self.setFixedSize(950, 750)


class MainApp:
    def __init__(self):
        self.app = QtWidgets.QApplication(sys.argv)
        self.welcome = WelcomeScreen()
        self.welcome.enter_clicked.connect(self.launch_main_app)
        self.welcome.show()

    def launch_main_app(self):
        self.welcome.close()
        self.camera = CameraCapture(cam_index=0, width=640, height=360, fps=30)
        self.plotter = EMGPlotter(camera=self.camera)
        self.plotter.show()

        self.serial = SerialEMGHandler()
        self.serial.set_callback(self.plotter.add_data)
        self.serial.start()

    def run(self):
        try:
            sys.exit(self.app.exec_())
        finally:
            if hasattr(self, 'serial'):
                self.serial.stop()
            if hasattr(self, 'camera'):
                self.camera.stop()

if __name__ == '__main__':
    app = MainApp()
    app.run()
