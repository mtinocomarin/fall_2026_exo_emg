import cv2
import logging
import threading
import queue
import time
import os


logger = logging.getLogger(__name__)


class CameraClass:
    def __init__(self, device_index=0, session_folder = None):

        self.session_folder = session_folder 
        self.device_index = device_index
        self.cap = None

        # Threading-related
        self.running = False
        self.thread = None

        # Queue to share frames with GUI (holds only latest frame)
        self.frame_queue = queue.Queue(maxsize=1)

        # Recording-related
        self.recording = False
        self.video_writer = None

        # TimeStamp Recording 
        self.frame_index = 0
        self.frame_timestamps = []  # List to store timestamps of each frame(frame_index, timestamp)
        self.current_timestamp_log_path = None  # Path to the current timestamp log file


    def start(self) -> bool:
        """Open the camera and start the background capture thread."""
        logger.info("Attempting to start Windows camera using DirectShow...")
        self.cap = cv2.VideoCapture(self.device_index, cv2.CAP_DSHOW)

        if not self.cap or not self.cap.isOpened():
            logger.error("❌ Failed to open camera on index %s.", self.device_index)
            self.cap = None
            return False

        # ✅ SET VIDEO SIZE (resolution) HERE
        # Example: 1280x720 (720p)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1280)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 720)

        # Optional: try to set FPS too
        # self.cap.set(cv2.CAP_PROP_FPS, 30)

        # You can log what you actually got:
        width = self.cap.get(cv2.CAP_PROP_FRAME_WIDTH)
        height = self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT)
        logger.info(f"Camera resolution set to: {int(width)}x{int(height)}")

        logger.info("📷 Camera opened successfully (index=%s).", self.device_index)

        self.running = True
        self.thread = threading.Thread(target=self._capture_loop, daemon=True)
        self.thread.start()
        return True


    def _capture_loop(self):
        """Background thread: continuously read frames and push latest into queue."""
        logger.debug("CameraClass: capture loop started.")
        while self.running and self.cap and self.cap.isOpened():
            ret, frame = self.cap.read()
            if not ret:
                logger.warning("CameraClass: failed to read frame from camera.")
                continue


            ts = time.time()

            # If recording, write the frame to the video file    

            if self.recording and self.video_writer is not None:
                self.frame_timestamps.append((self.frame_index, ts))
                self.video_writer.write(frame)
                self.frame_index += 1    

            # OpenCV gives BGR; convert to RGB for Qt
            frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

            # Keep only latest frame in queue
            if self.frame_queue.full():
                try:
                    self.frame_queue.get_nowait()
                except queue.Empty:
                    pass
            self.frame_queue.put(frame_rgb)

        logger.debug("CameraClass: capture loop exited.")


    def start_recording(self, folderpath: str, fps: float = 30.0) -> bool:
        """Start writing video frames to a timestamped video file inside the given folder."""
        from datetime import datetime

        if not self.cap or not self.cap.isOpened():
            logger.error("CameraClass: cannot start recording, camera not open.")
            return False

        # Ensure folder exists
        os.makedirs(folderpath, exist_ok=True)

        # --- Generate filename with date & time in format 11-16-25-T-9-22PM (no colon!) ---
        now = datetime.now()
        month = now.strftime("%m")
        day = now.strftime("%d")
        year = now.strftime("%y")
        hour = now.strftime("%I").lstrip("0")   # remove leading zero
        minute = now.strftime("%M")
        ampm = now.strftime("%p")

        # ✅ Use '-' instead of ':' so it's a valid Windows filename
        timestamp = f"{month}-{day}-{year}-T-{hour}-{minute}{ampm}"
        filename = f"recording_{timestamp}.mp4"
        filepath = os.path.join(folderpath, filename)

        base, _ = os.path.splitext(filepath)
        self.current_timestamp_log_path = base + "_timestamps.csv"

        # Get frame size
        width = int(self.cap.get(cv2.CAP_PROP_FRAME_WIDTH))
        height = int(self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT))

        if width <= 0 or height <= 0:
            logger.error(
                "CameraClass: invalid frame size from camera: width=%d height=%d",
                width, height
            )
            return False

        frame_size = (width, height)
        fourcc = cv2.VideoWriter_fourcc(*"mp4v")

        logger.info(
            "CameraClass: starting recording to %s (size=%s, fps=%.1f)",
            filepath, frame_size, fps
        )

        self.video_writer = cv2.VideoWriter(filepath, fourcc, fps, frame_size)
        if not self.video_writer.isOpened():
            logger.error("CameraClass: failed to open VideoWriter for %s", filepath)
            self.video_writer = None
            return False

        # Reset per-recording state
        self.frame_index = 0
        self.frame_timestamps = []

        self.recording = True
        return True


    def stop_recording(self):
        """Stop writing video frames."""
        if self.recording:
            logger.info("CameraClass: stopping recording.")
        self.recording = False
        if self.video_writer is not None:
            self.video_writer.release()
            self.video_writer = None

        if self.current_timestamp_log_path and self.frame_timestamps:
            try:
                with open(self.current_timestamp_log_path, 'w') as f:
                    f.write("frame_index,timestamp\n")
                    for idx, ts in self.frame_timestamps:
                         f.write(f"{idx},{ts:.6f}\n")  # 6 decimal places (microsecond-ish)
                logger.info(f"CameraClass: saved timestamp log to {self.current_timestamp_log_path}")
            except Exception as e:
                logger.error(f"CameraClass: failed to save timestamp log: {e}")

        self.frame_timestamps = []  # Clear timestamps for next recording session
        self.frame_index = 0  # Reset frame index for next recording session
        self.current_timestamp_log_path = None  # Reset log path for next recording session



    def get_latest_frame(self):
        """Return the most recent RGB frame (numpy array) or None if not available."""
        try:
            return self.frame_queue.get_nowait()
        except queue.Empty:
            return None

    def stop(self):
        """Stop the capture thread and release the camera."""
        logger.info("CameraClass: stopping camera...")
        self.running = False

        # Also stop recording if it was active
        self.stop_recording()

        if self.thread and self.thread.is_alive():
            self.thread.join(timeout=1.0)

        if self.cap:
            self.cap.release()
            self.cap = None

        logger.info("📷 CameraClass: camera stopped and resources released.")


if __name__ == "__main__":
    # Simple console test (no GUI)
    logging.basicConfig(level=logging.INFO)
    cam = CameraClass()

    if cam.start():
        import time
        logging.info("Camera started successfully. Reading a few frames...")
        for _ in range(30):
            frame = cam.get_latest_frame()
            if frame is not None:
                logging.info("Got a frame with shape %s", str(frame.shape))
            time.sleep(0.1)
        cam.stop()
    else:
        logging.error("Failed to start camera.")
