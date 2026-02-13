import threading, time, os
from datetime import datetime
import logging
import csv

class BatchRecorder(threading.Thread):
    def __init__(self, gui, sets, acts, trials, samples, base_folder=None):
        super().__init__(daemon=True)
        self.gui = gui
        self.sets = sets
        self.acts = acts
        self.trials = trials
        self.samples = samples
        self.base_folder = base_folder
        self._evt = threading.Event()
        self._running = True
        self.trial_timestamps = []
        self.video_mode = base_folder is not None

    def next_trial(self):
        self._evt.set()

    def run(self):
        start_video_time = time.time() if self.video_mode else None

        if self.video_mode:
            # ✅ Start continuous recording automatically
            full_video_path = os.path.join(self.base_folder, "full_session.avi")
            self.gui.camera.start_recording(full_video_path)

        for s in range(1, self.sets + 1):
            for a in range(1, self.acts + 1):
                folder = os.path.join(self.base_folder or "finalemg", f"set{s}", f"act{a}")
                os.makedirs(folder, exist_ok=True)

                for t in range(1, self.trials + 1):
                    self.gui.update_status(f"Ready → Set{s} Act{a} Trial{t}")
                    self._evt.clear()
                    self._evt.wait()
                    if not self._running:
                        if self.video_mode:
                            self.gui.camera.stop_recording()
                        return

                    if self.video_mode:
                        trial_start = time.time() - start_video_time

                    self.gui.update_status(f"Recording Trial {t}...")

                    fname = os.path.join(folder, f"trial_{t}.txt")
                    with open(fname, "w") as f:
                        f.write("timestamp\tch1\tch2\tch3\n")
                        count = 0
                        while count < self.samples and self._running:
                            if self.gui.ch1:
                                ts = datetime.now().strftime("%H:%M:%S.%f")[:-3]
                                ch1, ch2, ch3 = self.gui.ch1[-1], self.gui.ch2[-1], self.gui.ch3[-1]
                                f.write(f"{ts}\t{ch1:.6f}\t{ch2:.6f}\t{ch3:.6f}\n")
                                count += 1
                            time.sleep(0.001)

                    if self.video_mode:
                        trial_end = time.time() - start_video_time
                        self.trial_timestamps.append({
                            "set": s, "act": a, "trial": t,
                            "start": trial_start, "end": trial_end
                        })

        if self.video_mode:
            # ✅ Stop recording cleanly after session
            self.gui.camera.stop_recording()

        self.gui.update_status("✅ Batch complete")
        self.gui.recording_indicator.setText("EMG: Not Recording")
        self.gui.recording_indicator.setStyleSheet("color: black; font-weight: normal;")
        logging.info("🛑 EMG recording indicator set OFF after batch session.")
        self.gui.toggle_next_btn(False)

        if self.video_mode:
            csv_path = os.path.join(self.base_folder, "video_segments.csv")
            with open(csv_path, "w", newline='') as csvfile:
                writer = csv.DictWriter(csvfile, fieldnames=["set", "act", "trial", "start", "end"])
                writer.writeheader()
                writer.writerows(self.trial_timestamps)
            logging.info(f"📁 Saved video segment timestamps to: {csv_path}")

            # Now extract clips using updated extract_clips
            from extract_clips import extract_clips
            extract_clips(
                video_path=full_video_path,
                csv_path=csv_path,
                base_folder=self.base_folder,
                output_pattern="video_{trial}.avi"
            )
