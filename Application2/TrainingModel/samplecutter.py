from pathlib import Path

class samplecut:
    def __init__(self, folder_path: str, preferred_name: str | None = None):
        self.folder = Path(folder_path)
        self.preferred_name = preferred_name
        self.video_path: Path | None = None
        self.emg_path: Path | None = None


    def set_emg_path(self) -> Path:
        if not self.folder.exists() or not self.folder.is_dir():
            raise FileNotFoundError(f"Folder not found: {self.folder}")

        # 1) Try preferred name if given
        if self.preferred_name:
            p = self.folder / self.preferred_name
            if p.suffix.lower() != ".txt":
                p = p.with_suffix(".txt")
            if p.exists():
                self.emg_path = p
                return self.emg_path

        # 2) Search for first .txt (non-recursive)
        emgs = list(self.folder.glob("*.txt"))
        if emgs:
            self.emg_path = emgs[0]
            return self.emg_path

        # 3) If not found, search recursively
        emgs_recursive = list(self.folder.rglob("*.txt"))
        if emgs_recursive:
            self.emg_path = emgs_recursive[0]
            return self.emg_path

        # 4) Nothing found
        raise FileNotFoundError(f"No .txt EMG file found in {self.folder}")


    def set_video_path(self) -> Path:
        if not self.folder.exists() or not self.folder.is_dir():
            raise FileNotFoundError(f"Folder not found: {self.folder}")

        # 1) Try preferred name if given
        if self.preferred_name:
            p = self.folder / self.preferred_name
            if p.suffix.lower() != ".avi":
                p = p.with_suffix(".avi")
            if p.exists():
                self.video_path = p
                return self.video_path

        # 2) Search for first .avi (non-recursive)
        vids = list(self.folder.glob("*.avi"))
        if vids:
            self.video_path = vids[0]
            return self.video_path

        # 3) If not found, search recursively
        vids_recursive = list(self.folder.rglob("*.avi"))
        if vids_recursive:
            self.video_path = vids_recursive[0]
            return self.video_path

        # 4) Nothing found
        raise FileNotFoundError(f"No .avi video found in {self.folder}")

    # -------- PyQt5 video player --------
    def watch_video_pyqt(self, path=None, scale: float = 1.0):
        """
        Play the video in a PyQt5 window (OpenCV + QLabel).
        Buttons: « 5s | ‹ 1f | Play/Pause | 1f › | 5s »
        Keys: Left/Right = ±5s,  A/D = ±1 frame,  Space = play/pause,  Esc = quit
        If `path` is None, uses self.video_path (auto-calls set_video_path()).
        """
        from pathlib import Path
        import cv2
        from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QPushButton, QHBoxLayout, QVBoxLayout
        from PyQt5.QtCore import QTimer, Qt
        from PyQt5.QtGui import QImage, QPixmap

        # Resolve video path
        if path is None:
            if getattr(self, "video_path", None) is None:
                self.set_video_path()
            path = self.video_path
        path = str(Path(path))

        class _Player(QWidget):
            def __init__(self, video_path, scale):
                super().__init__()
                self.setWindowTitle(Path(video_path).name)
                self.cap = cv2.VideoCapture(video_path)
                if not self.cap.isOpened():
                    raise RuntimeError(f"Could not open video: {video_path}")

                # Video props
                self.fps = self.cap.get(cv2.CAP_PROP_FPS) or 0.0
                if self.fps <= 1e-3:
                    self.fps = 30.0  # fallback
                self.total_frames = int(self.cap.get(cv2.CAP_PROP_FRAME_COUNT) or 0)
                self.delay = max(1, int(1000 / self.fps))
                self.scale = float(scale)

                # UI
                self.label = QLabel("Loading…")
                self.label.setAlignment(Qt.AlignCenter)

                self.back5_btn = QPushButton("« 5s")
                self.prev1_btn = QPushButton("‹ 1f")
                self.play_btn  = QPushButton("Pause")
                self.next1_btn = QPushButton("1f ›")
                self.fwd5_btn  = QPushButton("5s »")

                self.back5_btn.clicked.connect(lambda: self.seek_seconds(-5))
                self.prev1_btn.clicked.connect(lambda: self.seek_frames(-1))
                self.play_btn.clicked.connect(self.toggle_play)
                self.next1_btn.clicked.connect(lambda: self.seek_frames(+1))
                self.fwd5_btn.clicked.connect(lambda: self.seek_seconds(+5))

                btn_row = QHBoxLayout()
                btn_row.addStretch(1)
                for b in (self.back5_btn, self.prev1_btn, self.play_btn, self.next1_btn, self.fwd5_btn):
                    btn_row.addWidget(b)
                btn_row.addStretch(1)

                layout = QVBoxLayout(self)
                layout.addWidget(self.label)
                layout.addLayout(btn_row)

                # Timer/playback
                self.timer = QTimer(self)
                self.timer.timeout.connect(self.next_frame)
                self.playing = True
                self.timer.start(self.delay)

                self.setMinimumSize(640, 360)

            # ---- Helpers ----
            def _clamp_frame(self, idx: int) -> int:
                if self.total_frames > 0:
                    return max(0, min(idx, self.total_frames - 1))
                return max(0, idx)

            def current_frame_index(self) -> int:
                return int(self.cap.get(cv2.CAP_PROP_POS_FRAMES))

            def show_current_frame(self):
                """Display current frame without advancing when paused."""
                pos = self.current_frame_index()
                ok, frame = self.cap.read()
                if not ok:
                    return
                if self.scale != 1.0:
                    h, w = frame.shape[:2]
                    frame = cv2.resize(frame, (int(w * self.scale), int(h * self.scale)))
                rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                h, w, ch = rgb.shape
                img = QImage(rgb.data, w, h, ch * w, QImage.Format_RGB888).copy()
                self.label.setPixmap(QPixmap.fromImage(img))
                # Reset position so we don't advance when paused
                self.cap.set(cv2.CAP_PROP_POS_FRAMES, pos)

            def seek_frames(self, delta: int):
                target = self._clamp_frame(self.current_frame_index() + delta)
                self.cap.set(cv2.CAP_PROP_POS_FRAMES, target)
                if self.playing:
                    self.next_frame()  # immediate refresh
                else:
                    self.show_current_frame()

            def seek_seconds(self, seconds: float):
                delta_frames = int(round(seconds * self.fps))
                self.seek_frames(delta_frames)

            # ---- Playback ----
            def toggle_play(self):
                self.playing = not self.playing
                self.play_btn.setText("Play" if not self.playing else "Pause")
                if self.playing:
                    self.timer.start(self.delay)
                else:
                    self.timer.stop()
                    self.show_current_frame()

            def next_frame(self):
                ok, frame = self.cap.read()
                if not ok:
                    # Reached end
                    self.timer.stop()
                    self.play_btn.setEnabled(False)
                    return
                if self.scale != 1.0:
                    h, w = frame.shape[:2]
                    frame = cv2.resize(frame, (int(w * self.scale), int(h * self.scale)))
                rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                h, w, ch = rgb.shape
                img = QImage(rgb.data, w, h, ch * w, QImage.Format_RGB888).copy()
                self.label.setPixmap(QPixmap.fromImage(img))

            # ---- Keys ----
            def keyPressEvent(self, e):
                if e.key() == Qt.Key_Space:
                    self.toggle_play()
                elif e.key() == Qt.Key_Escape:
                    self.close()
                elif e.key() == Qt.Key_Left:
                    self.seek_seconds(-5)
                elif e.key() == Qt.Key_Right:
                    self.seek_seconds(+5)
                elif e.key() == Qt.Key_A:
                    self.seek_frames(-1)
                elif e.key() == Qt.Key_D:
                    self.seek_frames(+1)

            def closeEvent(self, e):
                try:
                    self.timer.stop()
                except Exception:
                    pass
                if self.cap is not None:
                    self.cap.release()
                super().closeEvent(e)

        app = QApplication.instance()
        owns_app = False
        if app is None:
            app = QApplication([])
            owns_app = True

        w = _Player(path, scale)
        w.show()

        if owns_app:
            app.exec_()
        return w

if __name__ == "__main__":
    sample = samplecut(
        r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\session_20251111_163323\set1\act1",
        preferred_name="video_1.avi"
    )
    p = sample.set_video_path()
    print(f"Video path set to: {p}")
    # Play in a PyQt5 window:
    sample.watch_video_pyqt(scale=0.9)
