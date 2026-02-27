import serial
import time
import csv
import threading
import cv2

PORT = "COM10"
BAUD = 500000
EXPECTED_FIELDS = 4

class EMGVideoRecorder:

    def __init__(self, cam_index=0):
        self.cam_index = cam_index
        self.stop_flag = False

        # ---- Serial ----
        self.ser = serial.Serial(PORT, BAUD, timeout=0.05)
        time.sleep(2)
        self.ser.write(b'c')  # start command

        # ---- Shared clock origin ----
        self.t0_ns = time.perf_counter_ns()

        # ---- Video (DirectShow backend) ----
        self.cap = cv2.VideoCapture(self.cam_index, cv2.CAP_DSHOW)

        self.fps = 30
        width = int(self.cap.get(cv2.CAP_PROP_FRAME_WIDTH) or 640)
        height = int(self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT) or 480)

        fourcc = cv2.VideoWriter_fourcc(*"mp4v")
        self.out = cv2.VideoWriter("video.mp4", fourcc, self.fps, (width, height))

        # ---- Files ----
        self.emg_file = open("emg.csv", "w", newline="")
        self.emg_writer = csv.writer(self.emg_file)
        self.emg_writer.writerow(["t_ns", "ch1", "ch2", "ch3", "label"])

        self.vid_ts_file = open("video_timestamps.csv", "w", newline="")
        self.vid_ts_writer = csv.writer(self.vid_ts_file)
        self.vid_ts_writer.writerow(["frame_idx", "t_ns"])

    def parse_csv_line(self, line):
        parts = line.strip().split(",")
        if len(parts) != EXPECTED_FIELDS:
            return None
        try:
            return [int(p) for p in parts]
        except:
            return None

    def emg_reader(self):
        while not self.stop_flag:
            raw = self.ser.readline()
            if not raw:
                continue

            line = raw.decode(errors="ignore").strip()
            if not line:
                continue

            values = self.parse_csv_line(line)
            if values is None:
                continue

            t_ns = time.perf_counter_ns() - self.t0_ns
            self.emg_writer.writerow([t_ns] + values)

    def start(self):
        threading.Thread(target=self.emg_reader, daemon=True).start()

        print("Recording... press 'q' to stop")

        frame_idx = 0

        while True:
            ret, frame = self.cap.read()
            if not ret:
                break

            t_ns = time.perf_counter_ns() - self.t0_ns

            self.out.write(frame)
            self.vid_ts_writer.writerow([frame_idx, t_ns])
            frame_idx += 1

            cv2.imshow("Video", frame)

            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        self.stop()

    def stop(self):
        self.stop_flag = True
        time.sleep(0.1)

        self.cap.release()
        self.out.release()
        cv2.destroyAllWindows()

        self.ser.close()
        self.emg_file.close()
        self.vid_ts_file.close()

        print("Recording stopped and saved.")

if __name__ == "__main__":
    recorder = EMGVideoRecorder(cam_index=0)
    recorder.start()