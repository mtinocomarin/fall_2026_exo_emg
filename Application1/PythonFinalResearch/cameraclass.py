import cv2
import threading
import queue
import logging
import datetime
import os

class CameraCapture:
    def __init__(self, cam_index=0, width=640, height=360, fps=30):
        self.cam_index = cam_index  # Default camera index
        self.width = width          # Default width
        self.height = height        # Default height
        self.fps = fps              # Default frames per second
        self.cap = None             # Video capture object
        self.running = False        # Flag to control the capture loop
        self.thread = None          # Thread for capturing frames
        self.frame_queue = queue.Queue(maxsize=1)  # Queue for live display
        self.recording = False      # Flag for recording status
        self.video_writer = None    # Video writer object
        self.record_path = None     # Saved video file path

    def start(self):
        self.cap = cv2.VideoCapture(self.cam_index, cv2.CAP_DSHOW)
        if not self.cap.isOpened():
            logging.error("❌ Failed to open camera.")
            return False

        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.width)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.height)

        self.running = True
        self.thread = threading.Thread(target=self._capture_loop, daemon=True)
        self.thread.start()
        logging.info(f"✅ Camera started at {self.width}x{self.height}")
        return True

    def _capture_loop(self):
        while self.running:
            ret, frame = self.cap.read()
            if ret:
                resized = cv2.resize(frame, (self.width, self.height))

                if self.recording:
                    timestamp = datetime.datetime.now().strftime("%H:%M:%S.%f")[:-3]
                    cv2.putText(
                        resized,
                        timestamp,
                        (10, self.height - 10),
                        cv2.FONT_HERSHEY_SIMPLEX,
                        0.6,
                        (0, 255, 0),
                        2,
                        cv2.LINE_AA
                    )

                rgb = cv2.cvtColor(resized, cv2.COLOR_BGR2RGB)

                if not self.frame_queue.full():
                    self.frame_queue.put(rgb)

                if self.recording and self.video_writer:
                    self.video_writer.write(resized)

    def get_latest_frame(self):
        if not self.frame_queue.empty():
            return self.frame_queue.get()
        return None

    def start_recording(self, filename=None, base_folder=None):
        """
        Starts recording video.
        - If filename is None, saves as 'video.avi' in base_folder or current directory.
        - If base_folder is provided, ensures the folder exists.
        """
        if filename is None:
            filename = "video.avi"
        if base_folder:
            os.makedirs(base_folder, exist_ok=True)
            filename = os.path.join(base_folder, filename)

        fourcc = cv2.VideoWriter_fourcc(*'XVID')
        self.record_path = filename
        self.video_writer = cv2.VideoWriter(filename, fourcc, self.fps, (self.width, self.height))

        if not self.video_writer.isOpened():
            logging.error(f"❌ Failed to open video file for writing: {filename}")
            self.video_writer = None
            self.recording = False
            return False

        self.recording = True
        logging.info(f"🎥 Video recording started: {filename}")
        return True

    def stop_recording(self):
        if self.recording:
            self.recording = False
            if self.video_writer:
                self.video_writer.release()
                self.video_writer = None
            logging.info(f"🎞️ Video recording stopped and saved to: {self.record_path}")

    def stop(self):
        self.running = False
        if self.cap:
            self.cap.release()
            self.cap = None
        logging.info("📷 Camera stopped.")

# Usage Example:
if __name__ == "__main__":
    logging.basicConfig(level=logging.INFO)

    camera = CameraCapture()

    if camera.start():
        # Automatically saves to 'video.avi' in 'FinalCodeWork' folder
        camera.start_recording(base_folder="FinalCodeWork")

        try:
            while True:
                frame = camera.get_latest_frame()
                if frame is not None:
                    cv2.imshow("Camera Feed", cv2.cvtColor(frame, cv2.COLOR_RGB2BGR))
                if cv2.waitKey(1) & 0xFF == ord('q'):
                    break
        except KeyboardInterrupt:
            pass

        camera.stop_recording()
        camera.stop()
        cv2.destroyAllWindows()
        logging.info("✅ CameraCapture demo finished cleanly.")
