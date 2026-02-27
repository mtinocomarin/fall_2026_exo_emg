import os
import time
import threading
from collections import deque

import serial
import cv2

from PyQt5 import QtCore, QtWidgets, QtGui
import pyqtgraph as pg


# ============================
# User config
# ============================
PORT = "COM8"
BAUD = 500000

START_CHAR = b'c'   # send to MCU to start stream
STOP_CHAR  = b's'   # send to MCU to stop stream (change if needed)

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
SAVE_DIR = os.path.join(BASE_DIR, "set1final")
CAM_INDEX = 0

# ADC conversion (matches your C define)
# #define ADC_SCALE (3.0f / 4095.0f)
ADC_SCALE = 3.0 / 4095.0  # volts per count (0..4095 -> 0..3.0V)

# --- Burst timing assumption (your MCU behavior) ---
# You said: 150 samples produced every ~53ms and sent in a burst.
BURST_SAMPLES = 150
BURST_PERIOD_S = 0.053
DT_PLOT = BURST_PERIOD_S / BURST_SAMPLES  # seconds per sample for plotting (evenly spaced)

# Plot settings
PLOT_SECONDS = 8.0
PLOT_WINDOW_SAMPLES = 3000  # show only the latest N samples
MAX_SAMPLES = 20000
PLOT_UPDATE_MS = 50
DOWNSAMPLE_STEP = 2

# Button indicator hold time (ms)
BUTTON_FLASH_MS = 150


# ============================
# Serial reader thread
# ============================
class SerialWorker(QtCore.QObject):
    # t_ns, v1, v2, v3, button
    sample_sig = QtCore.pyqtSignal(int, float, float, float, int)
    status_sig = QtCore.pyqtSignal(str)

    def __init__(self, port, baud):
        super().__init__()
        self.port = port
        self.baud = baud
        self.ser = None
        self._stop = False
        self._t0_ns = None
        self._lock = threading.Lock()

    def open(self):
        try:
            self.ser = serial.Serial(self.port, self.baud, timeout=0.01)
            time.sleep(2)  # allow MCU reset
            self.status_sig.emit(f"Serial opened: {self.port} @ {self.baud}")
        except Exception as e:
            self.status_sig.emit(f"ERROR opening serial: {e}")
            self.ser = None

    def set_time_origin(self, t0_ns: int):
        with self._lock:
            self._t0_ns = t0_ns

    def start_stream(self):
        if not self.ser:
            return
        try:
            self.ser.reset_input_buffer()
            self.ser.write(START_CHAR)
            self.status_sig.emit("Sent START to MCU")
        except Exception as e:
            self.status_sig.emit(f"ERROR start_stream: {e}")

    def stop_stream(self):
        if not self.ser:
            return
        try:
            self.ser.write(STOP_CHAR)
            self.status_sig.emit("Sent STOP to MCU")
        except Exception as e:
            self.status_sig.emit(f"ERROR stop_stream: {e}")

    def close(self):
        try:
            if self.ser:
                self.ser.close()
                self.ser = None
        except:
            pass

    def request_stop(self):
        self._stop = True

    def _parse_line(self, line: str):
        # expecting: ch1,ch2,ch3,button  (ch* are 0..4095)
        parts = line.strip().split(",")
        if len(parts) != 4:
            return None
        try:
            ch1 = int(parts[0])
            ch2 = int(parts[1])
            ch3 = int(parts[2])
            btn = int(parts[3])
            return ch1, ch2, ch3, btn
        except:
            return None

    def run(self):
        if not self.ser:
            self.open()
        if not self.ser:
            return

        buffer = ""

        while not self._stop:
            try:
                n = self.ser.in_waiting
                if n <= 0:
                    time.sleep(0.001)
                    continue

                raw = self.ser.read(n)
                if not raw:
                    continue

                text = raw.decode(errors="ignore")
                buffer += text

                while "\n" in buffer:
                    line, buffer = buffer.split("\n", 1)
                    line = line.strip()
                    if not line:
                        continue

                    parsed = self._parse_line(line)
                    if parsed is None:
                        continue

                    c1, c2, c3, btn = parsed

                    with self._lock:
                        t0 = self._t0_ns

                    if t0 is None:
                        t_ns = time.perf_counter_ns()
                    else:
                        t_ns = time.perf_counter_ns() - t0

                    # Convert ADC counts -> volts
                    v1 = c1 * ADC_SCALE
                    v2 = c2 * ADC_SCALE
                    v3 = c3 * ADC_SCALE

                    self.sample_sig.emit(t_ns, v1, v2, v3, btn)

            except Exception as e:
                self.status_sig.emit(f"Serial thread error: {e}")
                time.sleep(0.05)

        self.close()
        self.status_sig.emit("Serial thread stopped")


# ============================
# Video capture thread
# ============================
class VideoWorker(QtCore.QObject):
    frame_sig = QtCore.pyqtSignal(object)
    status_sig = QtCore.pyqtSignal(str)

    def __init__(self, cam_index=0):
        super().__init__()
        self.cam_index = cam_index
        self.cap = None
        self._stop = False

        self._recording = False
        self._t0_ns = None
        self._video_out = None
        self._ts_file = None
        self._frame_idx = 0
        self._writer_size = None
        self._pending_start = None
        self._pending_stop = False

        self._lock = threading.Lock()
        self._last_preview_ns = 0

    def open(self):
        try:
            # You requested CAP_DSHOW on Windows
            self.cap = cv2.VideoCapture(self.cam_index, cv2.CAP_DSHOW)
            if not self.cap.isOpened():
                raise RuntimeError("Camera not opened")
            self.status_sig.emit(f"Camera opened (index {self.cam_index})")
        except Exception as e:
            self.status_sig.emit(f"ERROR opening camera: {e}")
            self.cap = None

    @QtCore.pyqtSlot(int)
    def set_time_origin(self, t0_ns: int):
        with self._lock:
            self._t0_ns = t0_ns

    @QtCore.pyqtSlot(str, str)
    def start_recording(self, video_path: str, ts_path: str):
        # Queue command; run-thread performs writer setup safely.
        with self._lock:
            self._pending_start = (video_path, ts_path)
            self._pending_stop = False

    def _start_recording_internal(self, video_path: str, ts_path: str):
        # Handle startup race: trial can start before video thread opens camera.
        if not self.cap:
            self.open()
        if not self.cap:
            self.status_sig.emit("ERROR start_recording: camera unavailable")
            return

        if self._recording:
            self._stop_recording_internal()

        width = int(self.cap.get(cv2.CAP_PROP_FRAME_WIDTH) or 640)
        height = int(self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT) or 480)
        fps = self.cap.get(cv2.CAP_PROP_FPS)
        if fps is None or fps <= 1:
            fps = 30.0

        try:
            os.makedirs(os.path.dirname(video_path) or ".", exist_ok=True)
            os.makedirs(os.path.dirname(ts_path) or ".", exist_ok=True)

            base, ext = os.path.splitext(video_path)
            mp4_path = video_path if ext.lower() == ".mp4" else f"{base}.mp4"
            video_out = None
            opened_path = None
            attempted = []
            candidates = [
                (video_path, "MJPG"),
                (video_path, "XVID"),
                (mp4_path, "mp4v"),
                (mp4_path, "avc1"),
            ]
            for out_path, codec in candidates:
                fourcc = cv2.VideoWriter_fourcc(*codec)
                attempted.append(f"{codec}@{out_path}")
                candidate = cv2.VideoWriter(out_path, fourcc, fps, (width, height))
                if candidate.isOpened():
                    video_out = candidate
                    opened_path = out_path
                    self.status_sig.emit(f"VideoWriter opened with codec: {codec}")
                    break
                candidate.release()

            if not video_out:
                self.status_sig.emit(
                    "ERROR: VideoWriter failed to open. Tried: " + " | ".join(attempted)
                )
                return

            ts_file = open(ts_path, "w", buffering=1)
            ts_file.write("frame_idx,t_ns\n")

            with self._lock:
                self._video_out = video_out
                self._ts_file = ts_file
                self._frame_idx = 0
                self._recording = True
                self._writer_size = (width, height)

            self.status_sig.emit(f"Video recording started: {opened_path}")

        except Exception as e:
            self.status_sig.emit(f"ERROR start_recording: {e}")
            self._stop_recording_internal()

    @QtCore.pyqtSlot()
    def stop_recording(self):
        # Queue command; run-thread stops writer.
        with self._lock:
            self._pending_stop = True

    def _stop_recording_internal(self):
        with self._lock:
            self._recording = False
            video_out = self._video_out
            ts_file = self._ts_file
            self._video_out = None
            self._ts_file = None
            self._writer_size = None

        try:
            if video_out:
                video_out.release()
        except:
            pass

        try:
            if ts_file:
                ts_file.close()
        except:
            pass

    def request_stop(self):
        self._stop = True

    def run(self):
        if not self.cap:
            self.open()
        if not self.cap:
            return

        while not self._stop:
            with self._lock:
                pending_start = self._pending_start
                pending_stop = self._pending_stop
                self._pending_start = None
                self._pending_stop = False

            if pending_stop:
                self._stop_recording_internal()
                self.status_sig.emit("Video recording stopped")

            if pending_start:
                self._start_recording_internal(*pending_start)

            ret, frame = self.cap.read()
            if not ret:
                time.sleep(0.01)
                continue

            # Preview throttle (~30ms)
            now_ns = time.perf_counter_ns()
            if (now_ns - self._last_preview_ns) > 30_000_000:
                self.frame_sig.emit(frame)
                self._last_preview_ns = now_ns

            with self._lock:
                recording = self._recording
                t0 = self._t0_ns
                video_out = self._video_out
                ts_file = self._ts_file
                frame_idx = self._frame_idx
                writer_size = self._writer_size

            if recording and video_out and ts_file and (t0 is not None):
                try:
                    # Ensure frame shape matches writer dimensions.
                    if writer_size:
                        ww, hh = writer_size
                        if frame.shape[1] != ww or frame.shape[0] != hh:
                            frame = cv2.resize(frame, (ww, hh), interpolation=cv2.INTER_AREA)
                    t_ns = time.perf_counter_ns() - t0
                    video_out.write(frame)
                    ts_file.write(f"{frame_idx},{t_ns}\n")
                    with self._lock:
                        self._frame_idx += 1
                except Exception as e:
                    self.status_sig.emit(f"Video write error: {e}")
                    self._stop_recording_internal()

            time.sleep(0.001)

        self._stop_recording_internal()
        try:
            if self.cap:
                self.cap.release()
                self.cap = None
        except:
            pass

        self.status_sig.emit("Video thread stopped")


# ============================
# Main GUI
# ============================
class MainWindow(QtWidgets.QMainWindow):
    video_start_sig = QtCore.pyqtSignal(str, str)
    video_stop_sig = QtCore.pyqtSignal()
    video_t0_sig = QtCore.pyqtSignal(int)

    def __init__(self):
        super().__init__()

        os.makedirs(SAVE_DIR, exist_ok=True)
        self.setWindowTitle("EMG + Video Recorder (Synced)")

        self.trial_num = 0
        self.recording = False
        self.t0_ns = None
        self._last_plot_tmax_s = 0.0

        self.emg_file = None
        self.button_file = None

        # Plot buffers (synthetic constant time)
        self.t_buf = deque(maxlen=MAX_SAMPLES)
        self.v1_buf = deque(maxlen=MAX_SAMPLES)
        self.v2_buf = deque(maxlen=MAX_SAMPLES)
        self.v3_buf = deque(maxlen=MAX_SAMPLES)

        # synthetic time index for plotting (prevents burst squish)
        self.plot_sample_index = 0

        self._last_button_on_ns = 0

        self._build_ui()

        # Workers/threads
        self.serial_worker = SerialWorker(PORT, BAUD)
        self.video_worker = VideoWorker(CAM_INDEX)

        self.serial_thread = QtCore.QThread()
        self.video_thread = QtCore.QThread()

        self.serial_worker.moveToThread(self.serial_thread)
        self.video_worker.moveToThread(self.video_thread)

        self.serial_thread.started.connect(self.serial_worker.run)
        self.video_thread.started.connect(self.video_worker.run)

        self.serial_worker.sample_sig.connect(self.on_sample)
        self.serial_worker.status_sig.connect(self.set_status)

        self.video_worker.status_sig.connect(self.set_status)
        self.video_worker.frame_sig.connect(self.on_frame)

        self.serial_thread.start()
        self.video_thread.start()

        # Plot update timer
        self.plot_timer = QtCore.QTimer()
        self.plot_timer.timeout.connect(self.update_plot)
        self.plot_timer.start(PLOT_UPDATE_MS)

        # Button flash timer
        self.flash_timer = QtCore.QTimer()
        self.flash_timer.timeout.connect(self.update_button_indicator)
        self.flash_timer.start(30)

    def _build_ui(self):
        central = QtWidgets.QWidget()
        self.setCentralWidget(central)
        layout = QtWidgets.QVBoxLayout(central)

        ctrl = QtWidgets.QHBoxLayout()
        layout.addLayout(ctrl)

        self.btn_start = QtWidgets.QPushButton("Start Trial")
        self.btn_stop = QtWidgets.QPushButton("Stop Trial")
        self.btn_stop.setEnabled(False)

        self.lbl_trial = QtWidgets.QLabel("Trial: -")
        self.lbl_rec = QtWidgets.QLabel("Status: Idle")
        self.lbl_status = QtWidgets.QLabel("")

        ctrl.addWidget(self.btn_start)
        ctrl.addWidget(self.btn_stop)
        ctrl.addWidget(self.lbl_trial)
        ctrl.addWidget(self.lbl_rec)
        ctrl.addStretch(1)

        self.lbl_button = QtWidgets.QLabel("BUTTON: OFF")
        self.lbl_button.setAlignment(QtCore.Qt.AlignCenter)
        self.lbl_button.setStyleSheet(
            "font-size: 22px; font-weight: bold; padding: 8px; "
            "background-color: #222; color: #bbb; border-radius: 8px;"
        )
        ctrl.addWidget(self.lbl_button)

        layout.addWidget(self.lbl_status)

        self.btn_start.clicked.connect(self.start_trial)
        self.btn_stop.clicked.connect(self.stop_trial)

        # Plot
        self.plot = pg.PlotWidget()
        self.plot.setBackground((20, 20, 20))
        self.plot.showGrid(x=True, y=True, alpha=0.35)
        self.plot.setLabel("bottom", "Time (reconstructed)", units="s")
        self.plot.setLabel("left", "Voltage", units="V")
        self.plot.addLegend(offset=(10, 10))

        vb = self.plot.getViewBox()
        vb.disableAutoRange()
        vb.setMouseEnabled(x=False, y=False)

        self.plot.setYRange(0.0, 3.0, padding=0)
        self.plot.setXRange(0.0, PLOT_SECONDS, padding=0)

        self.plot.getAxis("left").setPen(pg.mkPen((220, 220, 220)))
        self.plot.getAxis("bottom").setPen(pg.mkPen((220, 220, 220)))
        self.plot.getAxis("left").setTextPen(pg.mkPen((220, 220, 220)))
        self.plot.getAxis("bottom").setTextPen(pg.mkPen((220, 220, 220)))

        pen1 = pg.mkPen(color=(0, 255, 255), width=3)
        pen2 = pg.mkPen(color=(255, 165, 0), width=3)
        pen3 = pg.mkPen(color=(0, 255, 0), width=3)

        self.curve1 = self.plot.plot([], [], pen=pen1, name="CH1 (V)")
        self.curve2 = self.plot.plot([], [], pen=pen2, name="CH2 (V)")
        self.curve3 = self.plot.plot([], [], pen=pen3, name="CH3 (V)")

        layout.addWidget(self.plot, stretch=3)

        # Video preview
        self.video_label = QtWidgets.QLabel()
        self.video_label.setMinimumHeight(240)
        self.video_label.setAlignment(QtCore.Qt.AlignCenter)
        self.video_label.setStyleSheet("background-color: black; color: white;")
        self.video_label.setText("Video Preview")
        layout.addWidget(self.video_label, stretch=2)

    def set_status(self, msg: str):
        self.lbl_status.setText(msg)

    def start_trial(self):
        if self.recording:
            return

        self.trial_num += 1
        self.recording = True

        self.t_buf.clear()
        self.v1_buf.clear()
        self.v2_buf.clear()
        self.v3_buf.clear()
        self.plot_sample_index = 0  # reset reconstructed timebase
        self._last_plot_tmax_s = 0.0

        # Shared origin for saving timestamps (video + serial)
        self.t0_ns = time.perf_counter_ns()
        self.serial_worker.set_time_origin(self.t0_ns)
        self.video_worker.set_time_origin(self.t0_ns)

        emg_path = os.path.join(SAVE_DIR, f"trial_{self.trial_num}.txt")
        btn_path = os.path.join(SAVE_DIR, f"button_{self.trial_num}.txt")
        vid_path = os.path.join(SAVE_DIR, f"video_{self.trial_num}.avi")
        vts_path = os.path.join(SAVE_DIR, f"video_{self.trial_num}_timestamps.csv")

        self.emg_file = open(emg_path, "w", buffering=1)
        self.button_file = open(btn_path, "w", buffering=1)

        self.emg_file.write("t_ns,ch1_V,ch2_V,ch3_V\n")
        self.button_file.write("t_ns,button\n")

        self.video_worker.start_recording(vid_path, vts_path)
        self.serial_worker.start_stream()

        self.lbl_trial.setText(f"Trial: {self.trial_num}")
        self.lbl_rec.setText("Status: Recording")
        self.btn_start.setEnabled(False)
        self.btn_stop.setEnabled(True)

        self.set_status(f"Started trial {self.trial_num} -> saving in '{os.path.abspath(SAVE_DIR)}'")

    def stop_trial(self):
        if not self.recording:
            return

        self.serial_worker.stop_stream()
        self.video_worker.stop_recording()
        self.recording = False

        try:
            if self.emg_file:
                self.emg_file.close()
                self.emg_file = None
            if self.button_file:
                self.button_file.close()
                self.button_file = None
        except:
            pass

        self.lbl_rec.setText("Status: Idle")
        self.btn_start.setEnabled(True)
        self.btn_stop.setEnabled(False)
        self.set_status(f"Stopped trial {self.trial_num} (saved)")

    @QtCore.pyqtSlot(int, float, float, float, int)
    def on_sample(self, t_ns, v1, v2, v3, btn):
        # --- Reconstructed constant timebase for plotting ---
        # We assume sampling is uniform and bursts are just transport.
        t_s = self.plot_sample_index * DT_PLOT
        self.plot_sample_index += 1

        self.t_buf.append(t_s)
        self.v1_buf.append(v1)
        self.v2_buf.append(v2)
        self.v3_buf.append(v3)

        # Save real timestamp for sync
        if self.recording and self.emg_file and self.button_file:
            self.emg_file.write(f"{t_ns},{v1:.6f},{v2:.6f},{v3:.6f}\n")
            self.button_file.write(f"{t_ns},{btn}\n")

        if btn == 1:
            self._last_button_on_ns = time.perf_counter_ns()

    def update_button_indicator(self):
        now = time.perf_counter_ns()
        dt_ms = (now - self._last_button_on_ns) / 1e6

        if dt_ms <= BUTTON_FLASH_MS:
            self.lbl_button.setText("BUTTON: ON")
            self.lbl_button.setStyleSheet(
                "font-size: 22px; font-weight: bold; padding: 8px; "
                "background-color: #b00020; color: white; border-radius: 8px;"
            )
        else:
            self.lbl_button.setText("BUTTON: OFF")
            self.lbl_button.setStyleSheet(
                "font-size: 22px; font-weight: bold; padding: 8px; "
                "background-color: #222; color: #bbb; border-radius: 8px;"
            )

    def update_plot(self):
        if len(self.t_buf) < 2:
            return

        t_all = list(self.t_buf)
        y1_all = list(self.v1_buf)
        y2_all = list(self.v2_buf)
        y3_all = list(self.v3_buf)

        start = max(0, len(t_all) - PLOT_WINDOW_SAMPLES)
        t = t_all[start::DOWNSAMPLE_STEP]
        y1 = y1_all[start::DOWNSAMPLE_STEP]
        y2 = y2_all[start::DOWNSAMPLE_STEP]
        y3 = y3_all[start::DOWNSAMPLE_STEP]

        self.curve1.setData(t, y1)
        self.curve2.setData(t, y2)
        self.curve3.setData(t, y3)

        # Do not let the display clock run too far ahead of real samples,
        # otherwise the visible window can look empty between bursts.
        t_data_max = t[-1]
        if self.recording and self.t0_ns is not None:
            elapsed_s = (time.perf_counter_ns() - self.t0_ns) / 1e9
            lead_limit_s = BURST_PERIOD_S * 1.5
            t_max = min(max(t_data_max, elapsed_s), t_data_max + lead_limit_s)
        else:
            t_max = t_data_max

        self._last_plot_tmax_s = max(self._last_plot_tmax_s, t_max)
        t_max = self._last_plot_tmax_s
        window_s = PLOT_WINDOW_SAMPLES * DT_PLOT
        t_min = max(0.0, t_max - window_s)
        self.plot.setXRange(t_min, t_max, padding=0)
        self.plot.setYRange(0.0, 3.0, padding=0)

    def on_frame(self, frame):
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        h, w, ch = rgb.shape
        bytes_per_line = ch * w

        qimg = QtGui.QImage(rgb.data, w, h, bytes_per_line, QtGui.QImage.Format_RGB888)
        pix = QtGui.QPixmap.fromImage(qimg)

        self.video_label.setPixmap(
            pix.scaled(
                self.video_label.size(),
                QtCore.Qt.KeepAspectRatio,
                QtCore.Qt.SmoothTransformation
            )
        )

    def closeEvent(self, event):
        try:
            if self.recording:
                self.stop_trial()
        except:
            pass

        self.serial_worker.request_stop()
        self.video_worker.request_stop()

        self.serial_thread.quit()
        self.video_thread.quit()

        self.serial_thread.wait(1500)
        self.video_thread.wait(1500)

        event.accept()


def main():
    app = QtWidgets.QApplication([])
    win = MainWindow()
    win.resize(1200, 800)
    win.show()
    app.exec_()


if __name__ == "__main__":
    main()
