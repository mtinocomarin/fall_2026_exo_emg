import logging
import threading
import queue
import time
import os
import serial  # pip install pyserial

logger = logging.getLogger(__name__)

class SerialEMGClass:
    def __init__(self, port='COM9', baudrate=500000, session_folder=None):
        self.port = port
        self.baudrate = baudrate
        self.session_folder = session_folder

        self.ser = None
        self.running = False
        self.thread = None

        # Queue for GUI (latest EMG sample: [ch1, ch2, ch3] in volts)
        self.emg_queue = queue.Queue(maxsize=50)

        # Record Collected 
        self.record_count = 0
        self.record_limit = None

        # Recording
        self.recording = False
        self.emg_file = None
        self.current_emg_log_path = None

        # Conversion constants (same as old code)
        self.VREF = 3.0       # EMG sensor output range (volts)
        self.ADC_RES = 4096   # 12-bit resolution
        self.MIDPOINT = 0.0   # adjust if you want offset removal

    # ------------------------------------------------------------------
    # Start / Stop
    # ------------------------------------------------------------------
    def start(self) -> bool:
        """Open serial port and start EMG streaming thread."""
        try:
            self.ser = serial.Serial(self.port, self.baudrate, timeout=1)
            self.ser.flushInput()
            logger.info(f"✅ Serial port {self.port} opened at {self.baudrate}.")

            # ▶️ Send 'z' to microcontroller to start EMG streaming (same as old code)
            self.ser.write(b'z')
            logger.info("▶️ Sent 'z' to microcontroller to start EMG streaming.")

        except serial.SerialException as e:
            logger.error(f"❌ Failed to open serial port {self.port}: {e}")
            self.ser = None
            return False

        self.running = True
        self.thread = threading.Thread(target=self._read_loop, daemon=True)
        self.thread.start()
        return True

    def stop(self):
        """Stop EMG streaming and close serial port."""
        logger.info("🛑 SerialEMGClass: stopping serial handler...")

        # Try to tell MCU to stop
        if self.ser and self.ser.is_open:
            try:
                self.ser.write(b'v')  # same as old code
                logger.info("▶️ Sent 'v' to microcontroller to stop EMG streaming.")
            except Exception as e:
                logger.warning(f"⚠️ Failed to send stop command to microcontroller: {e}")
        else:
            logger.warning("⚠️ Serial port was not open; skipping stop command.")

        self.running = False
        self.stop_recording()

        if self.thread:
            self.thread.join(timeout=1)

        if self.ser and self.ser.is_open:
            try:
                self.ser.close()
                logger.info("🔌 Serial port closed.")
            except Exception as e:
                logger.warning(f"⚠️ Error closing serial port: {e}")

        self.ser = None

    # ------------------------------------------------------------------
    # Background read loop
    # ------------------------------------------------------------------
    def _read_loop(self):
        logger.debug("SerialEMGClass: read loop started.")

        while self.running:
            try:
                if not self.ser:
                    time.sleep(0.01)
                    continue

                line = self.ser.readline().decode('utf-8', errors='ignore').strip()
                if not line:
                    continue

                # Expect "ch1,ch2,ch3"
                if line.count(',') != 2:
                    continue

                ch1_raw, ch2_raw, ch3_raw = map(int, line.split(','))

                # Convert to voltages (same math as old code)
                ch1_v = (ch1_raw / self.ADC_RES) * self.VREF
                ch2_v = (ch2_raw / self.ADC_RES) * self.VREF
                ch3_v = (ch3_raw / self.ADC_RES) * self.VREF

                ch1_emg = ch1_v - self.MIDPOINT
                ch2_emg = ch2_v - self.MIDPOINT
                ch3_emg = ch3_v - self.MIDPOINT

                samples = [ch1_emg, ch2_emg, ch3_emg]

                # --- Recording to file ---
                if self.recording and self.emg_file is not None:
                    ts = time.time()
                    row = f"{ts:.6f},{ch1_emg:.6f},{ch2_emg:.6f},{ch3_emg:.6f}\n"
                    self.emg_file.write(row)

                    # Increment count 
                    self.record_count += 1

                     # 👉 NEW: check limit and stop if needed
                    if self.record_limit is not None and self.record_count >= self.record_limit:
                        logger.info(
                            f"SerialEMGClass: reached record limit "
                            f"({self.record_count} rows), stopping recording."
                        )
                        # safe to call from this thread
                        self.stop_recording()


                # --- Send to GUI via queue ---
                if self.emg_queue.full():
                    try:
                        self.emg_queue.get_nowait()
                    except queue.Empty:
                        pass
                self.emg_queue.put(samples)

            except Exception as e:
                logger.warning(f"⚠️ Serial read error: {e}")
                time.sleep(0.01)
                continue

        logger.debug("SerialEMGClass: read loop exited.")

    # ------------------------------------------------------------------
    # Recording control
    # ------------------------------------------------------------------
    def start_recording(self, folderpath: str, filename: str = None, max_records: int = None) -> bool:
        """Start logging EMG samples to CSV."""
        if not self.ser or not self.ser.is_open:
            logger.error("SerialEMGClass: cannot start recording, serial not open.")
            return False

        os.makedirs(folderpath, exist_ok=True)

        # Either use the given filename or fall back to timestamp-based
        if filename is None:
            ts = time.strftime("%m-%d-%y-T-%I-%M%p", time.localtime())
            filename = f"emg_{ts}.csv"

        filepath = os.path.join(folderpath, filename)

        try:
            self.emg_file = open(filepath, 'w')
        except Exception as e:
            logger.error(f"SerialEMGClass: failed to open EMG log file: {e}")
            self.emg_file = None
            return False

        self.current_emg_log_path = filepath
        # Header row: timestamp + channels
        self.emg_file.write("timestamp,ch1_emg_volts,ch2_emg_volts,ch3_emg_volts\n")
        self.emg_file.flush()

        self.record_count = 0
        self.record_limit = max_records

        self.recording = True
        logger.info(f"SerialEMGClass: started EMG recording to {filepath}")
        return True



    def stop_recording(self):
        """Stop logging EMG samples."""
        if self.recording:
              logger.info(
            f"SerialEMGClass: stopping EMG recording after "
            f"{self.record_count} rows."
        )
        self.recording = False
        self.record_limit = None  # reset limit

        if self.emg_file is not None:
            try:
                self.emg_file.flush()
                self.emg_file.close()
            except Exception as e:
                logger.error(f"SerialEMGClass: error closing EMG file: {e}")
            self.emg_file = None

        self.current_emg_log_path = None

    # ------------------------------------------------------------------
    # Access for GUI
    # ------------------------------------------------------------------
    def get_latest_samples(self):
        """Return last EMG sample [ch1, ch2, ch3] or None."""
        try:
            return self.emg_queue.get_nowait()
        except queue.Empty:
            return None

       # 👉 NEW: helper to read current count
    def get_record_count(self) -> int:
        """Return how many EMG rows (lines) have been written in current recording."""
        return self.record_count
