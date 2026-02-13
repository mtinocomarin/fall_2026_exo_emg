import sys
import threading
from PyQt5 import QtWidgets, QtCore
import pyqtgraph as pg
import logging
from collections import deque
import serial

class SerialEMGHandler:
    def __init__(self, port='COM8', baudrate=500000):
        self.port = port
        self.baudrate = baudrate
        self.running = False
        self.thread = None
        self.ser = None
        self.callback = None

    def start(self):
        try:
            self.ser = serial.Serial(self.port, self.baudrate, timeout=1)
            self.ser.flushInput()
            logging.info(f"✅ Serial port {self.port} opened at {self.baudrate}.")

            # ✅ Send 'z' character to start microcontroller transmission
            self.ser.write(b'z')
            logging.info("▶️ Sent 'z' to microcontroller to start EMG streaming.")

        except serial.SerialException as e:
            logging.error(f"❌ Failed to open serial port {self.port}: {e}")
            self.ser = None
            return

        self.running = True
        self.thread = threading.Thread(target=self.read_loop, daemon=True)
        self.thread.start()

    def read_loop(self):
        VREF = 3.0          # EMG sensor output range
        ADC_RES = 4095    # 12-bit resolution
        MIDPOINT = 0        # EMG sensor reference voltage

        while self.running:
            try:
                if self.ser:
                    line = self.ser.readline().decode('utf-8').strip()
                    if line.count(',') == 2:
                        ch1_raw, ch2_raw, ch3_raw = map(int, line.split(','))

                        # Convert to voltage
                        ch1_v = (ch1_raw / ADC_RES) * VREF
                        ch2_v = (ch2_raw / ADC_RES) * VREF
                        ch3_v = (ch3_raw / ADC_RES) * VREF

                        # Center around 0V (subtract midpoint if needed)
                        ch1_emg = ch1_v - MIDPOINT
                        ch2_emg = ch2_v - MIDPOINT
                        ch3_emg = ch3_v - MIDPOINT

                        if self.callback:
                            self.callback(ch1_emg, ch2_emg, ch3_emg)

            except Exception as e:
                logging.warning(f"⚠️ Serial read error: {e}")
                continue

    def stop(self):
        logging.info("🛑 Stopping serial handler...")
        if self.ser and self.ser.is_open:
            try:
                self.ser.write(b'v')
                logging.info("▶️ Sent 'v' to microcontroller to stop EMG streaming.")
            except Exception as e:
                logging.warning(f"⚠️ Failed to send stop command to microcontroller: {e}")
        else:
            logging.warning("⚠️ Serial port was not open; skipping stop command.")

        self.running = False
        if self.thread:
            self.thread.join(timeout=1)
        if self.ser and self.ser.is_open:
            try:
                self.ser.close()
                logging.info("🔌 Serial port closed.")
            except Exception as e:
                logging.warning(f"⚠️ Error closing serial port: {e}")

    def set_callback(self, func):
        self.callback = func
        logging.info("📡 Callback function set.")
