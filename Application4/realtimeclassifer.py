import ctypes
import os
import array
from pathlib import Path
import logging
import re
import shutil
from datetime import datetime

# -------------------------------------------------
#  LOGGER SETUP
# -------------------------------------------------
logger = logging.getLogger(__name__)


class realtimeclassifier:
    def __init__(self):
        # Create / reset report file
        with open("Report.txt", "w") as f:
            f.write("Report File\n")

        # ==== Classifier & signal parameters ====
        self.num_class = 2
        self.channel = 3          # EMG channels
        self.wl = 100             # window length (samples)
        self.winc = 50            # window increment (overlap)
        self.tdfeatureN = 4       # MAV, WL, ZC, SSC for example

        # Feature settings for C tdfeats
        self.deadzone_zc = 0.025
        self.deadzone_turn = 0.015
        self.scale_zc = 15
        self.scale_mav = 2

        # Derived
        self.feature_dim = self.tdfeatureN * self.channel
        self.data_per_trial = 200        # will be updated after loading trial
        self.win_per_trial = (
            self.data_per_trial // self.winc
            - (self.wl // self.winc - 1)
        )

        # Buffers
        self.testdata = array.array('f', [0.0] * (self.channel * self.data_per_trial))

        # Normalization + LDA params
        self.xmean = array.array('f', [0.0] * self.feature_dim)
        self.xstd = array.array('f', [1.0] * self.feature_dim)
        self.Wg = array.array('f', [0.0] * (self.num_class * self.feature_dim))
        self.Cg = array.array('f', [0.0] * self.num_class)

        # ==== Load DLL ====
        dll_path = os.path.abspath("libfunctions.dll")
        try:
            self.lib = ctypes.CDLL(dll_path)
            logger.info("Loaded DLL: %s", dll_path)
        except OSError as e:
            self.lib = None
            logger.error("Could not load DLL %s: %s", dll_path, e)
            raise

        # Set function signatures for LDA_test
        self.lib.LDA_test.argtypes = [
            ctypes.POINTER(ctypes.c_float),  # data window
            ctypes.POINTER(ctypes.c_float),  # Wg
            ctypes.POINTER(ctypes.c_float),  # Cg
            ctypes.POINTER(ctypes.c_float),  # xmean
            ctypes.POINTER(ctypes.c_float),  # xstd
            ctypes.c_int, ctypes.c_int,      # wl, channel
            ctypes.c_int, ctypes.c_int,      # feature_dim, num_class
            ctypes.c_float, ctypes.c_float,  # deadzone_zc, deadzone_turn
            ctypes.c_int, ctypes.c_int,      # scale_mav, scale_zc
            ctypes.c_int                     # tdfeatureN
        ]
        self.lib.LDA_test.restype = ctypes.c_int

    # -------------------------------------------------
    # Small helper for the text report
    # -------------------------------------------------
    def add_report(self, line: str):
        with open("Report.txt", "a") as f:
            f.write(line + "\n")

    # -------------------------------------------------
    # Load weights from my_lda_weights_for_microcontroller.c
    # -------------------------------------------------
    def load_weights_from_c(self, c_path: Path):
        """
        Parse my_lda_weights_for_microcontroller.c and fill:
            self.Wg   <- Wg_init
            self.Cg   <- Cg_init
            self.xstd <- xstd_init
            self.xmean <- xmean_init
        """
        c_path = Path(c_path)
        text = c_path.read_text()

        def extract_array(name: str, target: array.array):
            pattern = rf"float\s+{name}\s*\[[^\]]*\]\s*=\s*\{{([^}}]*)\}};"
            m = re.search(pattern, text, re.MULTILINE | re.DOTALL)
            if not m:
                raise ValueError(f"Could not find array {name} in {c_path}")

            body = m.group(1)
            nums = re.findall(
                r"[-+]?\d+\.\d+(?:[eE][-+]?\d+)?|[-+]?\d+",
                body
            )
            vals = [float(x) for x in nums]

            if len(vals) < len(target):
                raise ValueError(
                    f"{name}: only {len(vals)} values, expected {len(target)}"
                )

            for i in range(len(target)):
                target[i] = vals[i]

        extract_array("Wg_init", self.Wg)
        extract_array("Cg_init", self.Cg)
        extract_array("xstd_init", self.xstd)
        extract_array("xmean_init", self.xmean)

        logger.info("Loaded weights from %s", c_path)
        self.add_report(f"Loaded weights from: {c_path}")

    # -------------------------------------------------
    # Load ONE trial (timestamps + EMG) into self.testdata
    # -------------------------------------------------
    def load_trial_with_timestamps(self, trial_path: Path):
        """
        Load a single trial file:

            timestamp   ch1   ch2   ch3
            16:04:11.572 1.29 1.32 1.31
            ...

        Returns:
            timestamps (list of str)
        """
        trial_path = Path(trial_path)
        with trial_path.open("r") as f:
            lines = [line.strip() for line in f if line.strip()]

        if not lines:
            raise ValueError(f"Trial file {trial_path} is empty")

        header = lines[0].split()
        num_channels_in_file = len(header) - 1
        if num_channels_in_file != self.channel:
            raise ValueError(
                f"{trial_path}: header has {num_channels_in_file} channels, "
                f"but self.channel={self.channel}"
            )

        data_lines = lines[1:]
        timestamps = []
        values = []

        for line in data_lines:
            parts = line.split()
            timestamps.append(parts[0])  # timestamp
            ch_vals = [float(v) for v in parts[1:1 + self.channel]]
            values.extend(ch_vals)

        num_samples = len(timestamps)

        # Update trial length & number of windows based on this file
        self.data_per_trial = num_samples
        self.win_per_trial = (
            self.data_per_trial // self.winc
            - (self.wl // self.winc - 1)
        )

        needed = self.channel * self.data_per_trial
        if len(self.testdata) < needed:
            self.testdata = array.array('f', [0.0] * needed)
        else:
            for i in range(len(self.testdata)):
                self.testdata[i] = 0.0

        self.testdata[:needed] = array.array("f", values)

        logger.info(
            "Loaded trial %s: samples=%d, win_per_trial=%d",
            trial_path.name, num_samples, self.win_per_trial
        )
        return timestamps

    # -------------------------------------------------
    # Create a new SESSION_REALTEST_... folder under realtimetest
    # -------------------------------------------------
    def create_realtest_session(self, realtimetest_root: Path, trial_path: Path):
        """
        Create:

            realtimetest/SESSION_REALTEST_YYYYmmdd_HHmmss/

        Copy trial_1.txt and video_1.avi into that folder.

        Returns:
            session_dir, copied_trial_path
        """
        realtimetest_root = Path(realtimetest_root)
        realtimetest_root.mkdir(exist_ok=True)

        stamp = datetime.now().strftime("%Y%m%d_%H%M%S")
        session_name = f"SESSION_REALTEST_{stamp}"
        session_dir = realtimetest_root / session_name
        session_dir.mkdir(exist_ok=True)

        trial_path = Path(trial_path)

        # Copy trial file
        copied_trial = session_dir / trial_path.name
        shutil.copy2(trial_path, copied_trial)

        # Try to copy matching video (video_1.avi) if it exists
           # Try to copy matching video_X.avi where X matches trial_X.txt
    # e.g. trial_6.txt -> video_6.avi
        stem = trial_path.stem  # "trial_6"
        parts = stem.split("_")
        if len(parts) == 2 and parts[1].isdigit():
            idx_str = parts[1]
            video_name = f"video_{idx_str}.avi"
        else:
            # Fallback if filename is weird
            video_name = "video_1.avi"

        src_video = trial_path.parent / video_name
        if src_video.exists():
            dst_video = session_dir / video_name
            shutil.copy2(src_video, dst_video)
            logger.info("Copied video to session: %s", dst_video)
        else:
            logger.warning("No matching video found for %s (looked for %s)", trial_path.name, video_name)


        logger.info("Created real-test session: %s", session_dir)
        self.add_report(f"Created real-test session: {session_dir}")

        return session_dir, copied_trial

    # -------------------------------------------------
    # Classify ONE trial and save into the new SESSION_REALTEST_...
    # WITH STABILIZER LIKE RunLDATest()
    # -------------------------------------------------
    def classify_single_trial_to_realtimetest(self, trial_path: Path,
                                              realtimetest_root: Path):
        """
        1) Create new realtimetest/SESSION_REALTEST_YYYYmmdd_HHmmss.
        2) Copy trial_1.txt (and video_1.avi) into the session.
        3) Run classifier on the trial (original or copied).
        4) Apply same stabilizer logic as STM32 RunLDATest():
               - temp, count1, count2, count3.
               - only output a class when its count threshold is exceeded.
        5) Save predictions as:

               <session>/predictions/trial_1.txt

           format:
               timestamp    class    window
           (one line per *stable* decision)
        """
        if self.lib is None:
            raise RuntimeError("DLL not loaded; cannot call LDA_test.")

        # Create session & copy files
        session_dir, session_trial_path = self.create_realtest_session(
            realtimetest_root, trial_path
        )

        # Load trial from the *copied* file into self.testdata
        timestamps = self.load_trial_with_timestamps(session_trial_path)

        # Prepare predictions file inside session/predictions
        pred_dir = session_dir / "predictions"
        pred_dir.mkdir(exist_ok=True)
        out_path = pred_dir / session_trial_path.name

        # Pointers to model and normalization arrays
        Wg_ptr = ctypes.cast(self.Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        Cg_ptr = ctypes.cast(self.Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        xmean_ptr = ctypes.cast(self.xmean.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        xstd_ptr = ctypes.cast(self.xstd.buffer_info()[0], ctypes.POINTER(ctypes.c_float))

        base_addr = self.testdata.buffer_info()[0]
        elem_size = ctypes.sizeof(ctypes.c_float)

        total_win_num = 0

        # --- Stabilizer state (mirror of C RunLDATest) ---
        temp = 0
        count1 = 0
        count2 = 0
        count3 = 0

        with out_path.open("w") as f:
            f.write("timestamp\tclass\twindow\n")

            m = 0
            while m < self.win_per_trial:
                # Window m starts at sample index m * WINC
                start_sample = m * self.winc
                start_float_index = start_sample * self.channel
                end_float_index = start_float_index + self.wl * self.channel

                # Safety: stop if we’d run off the buffer
                if end_float_index > len(self.testdata):
                    break

                # Pointer to start of this window
                offset_addr = base_addr + start_float_index * elem_size
                window_ptr = ctypes.cast(offset_addr, ctypes.POINTER(ctypes.c_float))

                # Raw LDA decision for this window
                decision = self.lib.LDA_test(
                    window_ptr,
                    Wg_ptr,
                    Cg_ptr,
                    xmean_ptr,
                    xstd_ptr,
                    ctypes.c_int(self.wl),
                    ctypes.c_int(self.channel),
                    ctypes.c_int(self.feature_dim),
                    ctypes.c_int(self.num_class),
                    ctypes.c_float(self.deadzone_zc),
                    ctypes.c_float(self.deadzone_turn),
                    ctypes.c_int(self.scale_mav),
                    ctypes.c_int(self.scale_zc),
                    ctypes.c_int(self.tdfeatureN),
                )

                raw_class = int(decision)
                total_win_num += 1
                window_idx = m + 1

                # ====== STABILIZER: mirror of C code ======
                if temp != raw_class:
                    # New class → reset all counters
                    temp = raw_class
                    count1 = 0
                    count2 = 0
                    count3 = 0
                    stable_class = None
                else:
                    stable_class = None
                    if raw_class == 1:
                        count1 += 1
                        if count1 > 5:
                            stable_class = 1
                            count1 = 0
                    elif raw_class == 2:
                        count2 += 1
                        if count2 > 2:
                            stable_class = 2
                            count2 = 0
                    elif raw_class == 3:
                        count3 += 1
                        if count3 > 2:
                            stable_class = 3
                            count3 = 0
                
                # Timestamp for this window = first sample in the window
                ts = timestamps[start_sample] if start_sample < len(timestamps) else timestamps[-1]

                # Only log when a stable decision is reached (like UART transmit)
                if stable_class is not None:
                    f.write(f"{ts}\t{stable_class}\t{window_idx}\n")

                m += 1

        logger.info(
            "Classified trial %s: %d windows (raw) -> %s",
            session_trial_path.name, total_win_num, out_path
        )
        self.add_report(
            f"Classified {session_trial_path.name}: {total_win_num} raw windows, "
            f"stable predictions -> {out_path}"
        )

        return session_dir, out_path, total_win_num


# -------------------------------------------------
# Example usage for ONE TRIAL
# -------------------------------------------------
if __name__ == "__main__":
    # Simple logging to file
    log_folder = Path("logs")
    log_folder.mkdir(exist_ok=True)

    logging.basicConfig(
        level=logging.INFO,
        format="%(asctime)s [%(levelname)s] %(name)s: %(message)s",
        handlers=[logging.FileHandler(log_folder / "realtimeclassifier.log", mode="w")]
    )

    rc = realtimeclassifier()

    # 1) Load the trained weights from your C file
    rc.load_weights_from_c("my_lda_weights_for_microcontroller.c")

    # 2) Path to the ONE trial you want to classify (in realtimetest)
    trial_file = Path(
        r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251212_161614\trial_8.txt"
    )

    # 3) Base folder where you keep all sessions (realtimetest)
    realtimetest_root = Path(
        r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest"
    )

    # 4) Classify that single trial and create a new SESSION_REALTEST_...
    session_dir, pred_path, nwin = rc.classify_single_trial_to_realtimetest(
        trial_file, realtimetest_root
    )

    print(f"New session created at: {session_dir}")
    print(f"Predictions saved to:   {pred_path}")
    print(f"Number of raw windows:  {nwin}")
