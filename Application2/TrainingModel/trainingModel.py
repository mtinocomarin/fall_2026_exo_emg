
import ctypes
import os
import array
from collections import defaultdict
import os
from collections import defaultdict
import ctypes
import os
import array
import numpy as np
import random
import numpy as np
import os
import ctypes
import matplotlib.pyplot as plt
import seaborn as sns
from scipy.spatial import distance

class trainclass:
    def __init__(self):
        self.typesplit = 1
        self.trainpath = None
        self.testpath = None

        # === Classifier and Signal Parameters ===
        self.num_class = 2
        self.channel = 3
        self.wl = 100
        self.winc = 50
        self.tdfeatureN = 4

        # === Feature Extraction Settings ===
        #define DEADZONE_ZC    0.011      //estimated baseline noise level for calculating zero crossings
        #define DEADZONE_TURN    0.005   //estimated noise level for calculating slope sign changes
        self.deadzone_zc = 0.025  
        self.deadzone_turn = 0.015
        self.scale_zc = 15
        self.scale_mav = 2

        # === Feature Index Constants ===
        self.feature_mav_idx = 0
        self.feature_len_idx = 1
        self.feature_zero_idx = 2
        self.feature_turn_idx = 3

        # === Derived Parameters ===
        self.feature_dim = self.tdfeatureN * self.channel
        self.trial_per_class = 2
        self.data_per_trial = 500
        self.win_per_trial = self.data_per_trial // self.winc - (self.wl // self.winc - 1)
        total_windows = self.num_class * self.trial_per_class * self.win_per_trial

        # === Data Storage === (using array.array instead of numpy)
        self.traindata = array.array('f', [0.0] * (self.channel * self.data_per_trial))
        self.testdata = array.array('f', [0.0] * (self.channel * self.data_per_trial))
        self.trainclass = array.array('i', [0] * total_windows)
        self.featurematrix = array.array('f', [0.0] * (total_windows * self.feature_dim))
        self.testfeaturematrix = array.array('f', [0.0] * (total_windows * self.feature_dim))

        # Normalization and LDA Parameters
        self.xmean = array.array('f', [0.0] * self.feature_dim)
        self.xstd = array.array('f', [1.0] * self.feature_dim)
        self.Wg = array.array('f', [0.0] * (self.num_class * self.feature_dim))
        self.Cg = array.array('f', [0.0] * self.num_class)

        self.trial_feature_ranges = {} 

        # === Load DLL ===
        dll_path = os.path.abspath("libfunctions.dll")
        self.lib = ctypes.CDLL(dll_path)

        # === Function Signatures ===
        self.lib.mulAB.argtypes = [ctypes.POINTER(ctypes.c_float)] * 3 + [ctypes.c_int] * 3
        self.lib.addition.argtypes = [ctypes.POINTER(ctypes.c_float)] * 3 + [ctypes.c_int, ctypes.c_int]

        self.lib.tdfeats.argtypes = [
            ctypes.POINTER(ctypes.c_float), ctypes.c_int, ctypes.c_int, ctypes.c_int,
            ctypes.POINTER(ctypes.c_float),
            ctypes.c_float, ctypes.c_float, ctypes.c_int, ctypes.c_int, ctypes.c_int
        ]

        self.lib.feature_normalization.argtypes = [
            ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
            ctypes.POINTER(ctypes.c_float), ctypes.c_int, ctypes.c_int
        ]
        self.lib.feature_normalization_apply.argtypes = [
            ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
            ctypes.POINTER(ctypes.c_float), ctypes.c_int
        ]

        self.lib.LDA_train.argtypes = [
            ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_int),
            ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
            ctypes.c_int, ctypes.c_int, ctypes.c_int, ctypes.c_int
        ]
        self.lib.LDA_train_accuracy.argtypes = self.lib.LDA_train.argtypes
        self.lib.LDA_train_accuracy.restype = ctypes.c_float

        self.lib.LDA_test.argtypes = [
            ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
            ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
            ctypes.POINTER(ctypes.c_float), ctypes.c_int, ctypes.c_int,
            ctypes.c_int, ctypes.c_int, ctypes.c_float, ctypes.c_float,
            ctypes.c_int, ctypes.c_int, ctypes.c_int
        ]
        self.lib.LDA_test.restype = ctypes.c_int

        self.lib.Lower_Triangular_Solve.argtypes = [
            ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
            ctypes.POINTER(ctypes.c_float), ctypes.c_int
        ]
        self.lib.Upper_Triangular_Solve.argtypes = self.lib.Lower_Triangular_Solve.argtypes
        self.lib.Choleski_LU_Decomposition.argtypes = [ctypes.POINTER(ctypes.c_float), ctypes.c_int]
        self.lib.Choleski_LU_Solve.argtypes = self.lib.Lower_Triangular_Solve.argtypes

        self.lib.majority_vote.argtypes = [
            ctypes.POINTER(ctypes.c_int), ctypes.c_int, ctypes.c_int
        ]
        self.lib.majority_vote.restype = ctypes.c_int



    def update_internal_settings(self):
        """
        Updates internal buffers and derived variables after splitting data.
        Should be called after setting self.trial_per_class.
        """
        self.feature_dim = self.tdfeatureN * self.channel
        self.win_per_trial = self.data_per_trial // self.winc - (self.wl // self.winc - 1)
        self.total_windows = self.num_class * self.trial_per_class * self.win_per_trial

        self.traindata = array.array('f', [0.0] * (self.channel * self.data_per_trial))
        self.testdata = array.array('f', [0.0] * (self.channel * self.data_per_trial))
        self.trainclass = array.array('i', [0] * self.total_windows)
        self.featurematrix = array.array('f', [0.0] * (self.total_windows * self.feature_dim))
        self.testfeaturematrix = array.array('f', [0.0] * (self.total_windows * self.feature_dim))

        # Recompute normalization and LDA parameters too
        self.xmean = array.array('f', [0.0] * self.feature_dim)
        self.xstd = array.array('f', [1.0] * self.feature_dim)
        self.Wg = array.array('f', [0.0] * (self.num_class * self.feature_dim))
        self.Cg = array.array('f', [0.0] * self.num_class)

        print(f"\n🔧 Internal settings updated:")
        print(f"   → num_class: {self.num_class}")
        print(f"   → trial_per_class: {self.trial_per_class}")
        print(f"   → win_per_trial: {self.win_per_trial}")
        print(f"   → total_windows: {self.total_windows}")



    def split_train_test(self, base_path, split_mode="50/50"):
        """
        Splits trial files in each class into training and testing sets using the specified mode.

        Args:
            base_path (str): Path to folder containing class subfolders (e.g., act1, act2, ...).
            split_mode (str): One of {"50/50", "alternate", "leave-one-out", "random"}

        Returns:
            Tuple (train_data, test_data) — both as dicts with class indices as keys.
        """
        train_data = defaultdict(list)
        test_data = defaultdict(list)

        class_folders = sorted([f for f in os.listdir(base_path) if os.path.isdir(os.path.join(base_path, f))])
        self.num_class = len(class_folders)

        for class_idx, class_name in enumerate(class_folders):
            class_path = os.path.join(base_path, class_name)
            trial_files = sorted([f for f in os.listdir(class_path) if f.endswith(".txt")])
            trial_paths = [os.path.join(class_path, fname) for fname in trial_files]

            if not trial_paths:
                print(f"⚠️ No trials found in {class_name}")
                continue

            if split_mode == "50/50":
                split_idx = len(trial_paths) // 2
                train_data[class_idx] = trial_paths[:split_idx]
                test_data[class_idx] = trial_paths[split_idx:]

            elif split_mode == "alternate":
                train_data[class_idx] = [p for i, p in enumerate(trial_paths) if i % 2 == 0]
                test_data[class_idx] = [p for i, p in enumerate(trial_paths) if i % 2 == 1]

            elif split_mode == "leave-one-out":
                if len(trial_paths) < 2:
                    print(f"⚠️ Not enough trials for leave-one-out in {class_name}")
                    continue
                train_data[class_idx] = trial_paths[:-1]
                test_data[class_idx] = [trial_paths[-1]]

            elif split_mode == "random":
                random.seed()  # Set for reproducibility
                shuffled = trial_paths[:]
                random.shuffle(shuffled)
                split_idx = len(shuffled) // 2
                train_data[class_idx] = shuffled[:split_idx]
                test_data[class_idx] = shuffled[split_idx:]

            else:
                raise ValueError(f"❌ Unknown split mode: {split_mode}")

            # ✅ Print splits
            print(f"\n📂 Class {class_idx} ({class_name}) TRAIN files:")
            for path in train_data[class_idx]:
                print("  ", path)

            print(f"\n📂 Class {class_idx} ({class_name}) TEST files:")
            for path in test_data[class_idx]:
                print("  ", path)

        self.trainpath = train_data
        self.testpath = test_data

        # ✅ Set trial_per_class based on number of training files in first class
        example_class = next(iter(train_data.values()), [])
        self.trial_per_class = len(example_class) if example_class else 0

        # 🔧 Update all dependent settings
        self.update_internal_settings()

        return train_data, test_data


    def load_trial_data(self, filepath, label):
        """
        Loads EMG data from a trial file into either self.traindata or self.testdata
        using time-major (sample-wise) interleaved format.

        Args:
            filepath (str): Path to trial file.
            label (str): Either 'traindata' or 'testdata' to indicate the target buffer.
        """
        if label == "traindata":
            buffer = self.traindata
        elif label == "testdata":
            buffer = self.testdata
        else:
            raise ValueError("❌ Invalid label. Use 'traindata' or 'testdata'.")

        ch = self.channel
        data_by_channel = [[] for _ in range(ch)]

        try:
            with open(filepath, "r") as f:
                for line in f:
                    parts = line.strip().split()

                    # Skip empty or malformed lines
                    if len(parts) < ch:
                        continue

                    # Try parsing; skip non-numeric headers like "timestamp ch1 ch2 ch3"
                    try:
                        # If the line has a timestamp, ignore the first column
                        offset = len(parts) - ch
                        for i in range(ch):
                            data_by_channel[i].append(float(parts[i + offset]))
                    except ValueError:
                        continue  # Skip non-numeric rows
        except FileNotFoundError:
            print(f"❌ File not found: {filepath}")
            return

        num_samples = len(data_by_channel[0])
        expected_samples = self.data_per_trial

        # 🚨 Check that the sample count matches expectation
        if num_samples != expected_samples:
            print(f"⚠️ Trial length mismatch: expected {expected_samples}, got {num_samples}.")
            print(f"⏭️ Skipping {filepath} due to mismatched sample count.")
            return

        interleaved = []

        # Interleave: [s1_ch1, s1_ch2, ..., s2_ch1, s2_ch2, ...]
        for i in range(num_samples):
            for j in range(ch):
                interleaved.append(data_by_channel[j][i])

        # Zero out and fill the buffer
        for i in range(len(buffer)):
            buffer[i] = 0.0

        buffer[:len(interleaved)] = array.array('f', interleaved)

        print(f"✅ Loaded {filepath} into {label} with {num_samples} samples per channel.")


    def generate_windows(self):
        """
        Generates overlapping windows from `self.traindata` using wl and winc.
        Returns:
            A list of array.array('f') where each is a flattened [ch1, ch2, ch3, ..., chN] for the window.
        """
        windows = []
        total_samples = self.channel * self.data_per_trial
        max_windows = self.win_per_trial

        for m in range(max_windows):
            start = m * self.winc * self.channel
            end = start + self.wl * self.channel
            if end > total_samples:
                break

            window = self.traindata[start:end]
            windows.append(window)

        print(f"✅ Generated {len(windows)} windows of size {self.wl} per channel.")
        return windows

    def save_windows_to_file(self, windows, class_idx, output_file="windows_output.txt"):
        """
        Save extracted windows to a file in C-style format:
        Window N (class X):
        val1_ch1    val1_ch2    val1_ch3
        val2_ch1    val2_ch2    val2_ch3
        ...
        """
        with open(output_file, 'w') as f:
            for w_idx, window in enumerate(windows):
                f.write(f"Window {w_idx} (class {class_idx + 1}):\n")
                # Write row-by-row: for each sample (0 to wl-1)
                for i in range(self.wl):
                    row = []
                    for ch in range(self.channel):
                        val = window[i + ch * self.wl]
                        row.append(f"{val:.6f}")
                    f.write("\t".join(row) + "\n")
                f.write("\n")
        print(f"📁 Saved {len(windows)} windows to {output_file}")


    def extract_features(self, windows, class_idx=0, start_idx=0):
        """
        Extract features from windows and store into self.featurematrix and self.trainclass.
        """
        feat_ptr = ctypes.cast(self.featurematrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        label_ptr = ctypes.cast(self.trainclass.buffer_info()[0], ctypes.POINTER(ctypes.c_int))

        for m, window in enumerate(windows):
            index = start_idx + m
            window_ptr = ctypes.cast(window.buffer_info()[0], ctypes.POINTER(ctypes.c_float))

            self.lib.tdfeats(
                window_ptr,
                self.wl,
                self.channel,
                index,  # Offset into the flat buffer
                feat_ptr,
                self.deadzone_zc,
                self.deadzone_turn,
                self.scale_mav,
                self.scale_zc,
                self.tdfeatureN
            )

            label_ptr[index] = class_idx + 1


    def train_model(self, folderpath, split_mode=None):
        """
        Train the model using the training data in `folderpath`.
        Extracts windows and features from each trial and stores them for LDA training.

        If split_mode is None, assumes self.trainpath and self.testpath are already set.
        """
        print("\n📁 Starting training using data from:", folderpath)

        # 🔧 Only split if a mode is specified
        if split_mode is not None:
            self.split_train_test(folderpath, split_mode)

        feat_idx = 0  # Keeps track of window count across all trials

        for class_idx, file_list in self.trainpath.items():
            print(f"\n📂 Processing Class {class_idx} with {len(file_list)} trials.")

            for trial_path in file_list:
                print(f"\n➡️ Loading: {trial_path}")

                # Step 1: Load data into self.traindata
                self.load_trial_data(trial_path, "traindata")

                # Step 2: Generate overlapping windows from the loaded data
                windows = self.generate_windows()

                # Step 3: Extract features from windows and store in self.featurematrix and self.trainclass
                self.extract_features(windows, class_idx=class_idx, start_idx=feat_idx)

                # Store start and end index for this trial
                trial_name = f"Class{class_idx+1}_{os.path.basename(trial_path)}"
                self.trial_feature_ranges[trial_name] = (feat_idx, feat_idx + len(windows))


                # Step 4: Update global feature index
                feat_idx += len(windows)

        print(f"\n📊 Total feature windows extracted: {feat_idx}")


        # === Normalize training features ===
        print("\n📐 Normalizing features...")
        self.lib.feature_normalization(
            ctypes.cast(self.featurematrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(self.xmean.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(self.xstd.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            feat_idx,
            self.feature_dim
        )
        print("✅ Feature normalization complete.")

        # === Train LDA model ===
        print("\n🧠 Training LDA classifier...")
        self.lib.LDA_train(
            ctypes.cast(self.featurematrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(self.trainclass.buffer_info()[0], ctypes.POINTER(ctypes.c_int)),
            ctypes.cast(self.Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(self.Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            self.feature_dim,
            self.num_class,
            self.win_per_trial,
            self.trial_per_class
        )
        print("✅ LDA training complete.")

        # === Evaluate training accuracy ===
        acc = self.lib.LDA_train_accuracy(
            ctypes.cast(self.featurematrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(self.trainclass.buffer_info()[0], ctypes.POINTER(ctypes.c_int)),
            ctypes.cast(self.Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(self.Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            self.feature_dim,
            self.num_class,
            self.win_per_trial,
            self.trial_per_class
        )
        print(f"🎯 Training Accuracy: {acc * 100:.2f}%")

    def export_model_to_c_file(self, filename="lda_model_params.c"):
        """
        Saves LDA model parameters (Wg, Cg, xmean, xstd) to a C-compatible header/source file.
        Automatically adapts sizes based on number of classes and features.
        """
        def format_array(name, arr, items_per_line):
            out = f"float {name}[{len(arr)}] = {{\n"
            for i in range(0, len(arr), items_per_line):
                line_vals = ", ".join(f"{arr[i + j]:.6f}" for j in range(min(items_per_line, len(arr) - i)))
                out += f"    {line_vals},\n"
            out = out.rstrip(",\n") + "\n};\n\n"
            return out

        with open(filename, "w") as f:
            f.write("// Auto-generated LDA model parameters\n\n")

            f.write(format_array("Wg_init", self.Wg, self.num_class))
            f.write(format_array("Cg_init", self.Cg, self.num_class))
            f.write(format_array("xstd_init", self.xstd, self.feature_dim))
            f.write(format_array("xmean_init", self.xmean, self.feature_dim))

        print(f"✅ Exported model parameters to: {filename}")



    def testmodel(self):
        """
        Test the LDA model using previously split self.testpath.
        Extracts features per window from self.testdata, normalizes them, and applies classification.
        """

        print("\n**************** TESTING ****************\n")
        total_windows = 0
        correct_preds = 0

        for class_idx, file_list in self.testpath.items():
            print(f"\n📂 Testing Class {class_idx} with {len(file_list)} trials.")

            for filepath in file_list:
                print(f"➡️ Processing file: {filepath}")
                try:
                    # 🟢 Load trial into self.testdata (interleaved format)
                    self.load_trial_data(filepath, "testdata")

                    flat_data = self.testdata
                    for m in range(self.win_per_trial):
                        start = m * self.winc * self.channel
                        end = start + self.wl * self.channel

                        if end > len(flat_data):
                            break  # Not enough data left for full window

                        window = flat_data[start:end]
                        window_ptr = (ctypes.c_float * len(window))(*window)

                        prediction = self.lib.LDA_test(
                            window_ptr,
                            ctypes.cast(self.Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                            ctypes.cast(self.Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                            ctypes.cast(self.xmean.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                            ctypes.cast(self.xstd.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                            self.feature_dim,
                            self.num_class,
                            self.wl,
                            self.channel,
                            ctypes.c_float(self.deadzone_zc),
                            ctypes.c_float(self.deadzone_turn),
                            self.scale_mav,
                            self.scale_zc,
                            self.tdfeatureN
                        )

                        if prediction == (class_idx + 1):
                            correct_preds += 1

                        total_windows += 1

                except Exception as e:
                    print(f"❌ Failed to process {filepath}: {e}")

        # Final Accuracy Report
        acc = 100.0 * correct_preds / total_windows if total_windows > 0 else 0
        print(f"\n✅ Testing accuracy: {acc:.2f}% ({correct_preds}/{total_windows})")

    def test_all_trials(self):
        """
        Test the already-trained LDA model on all trials in self.testpath.
        Calls test_single_trial(filepath, class_idx) for each trial and reports overall accuracy.
        """
        print("\n**************** TESTING (all trials) ****************\n")

        total_windows = 0
        correct_preds = 0

        for class_idx, file_list in self.testpath.items():
            print(f"\n📂 Testing Class {class_idx} with {len(file_list)} trials.")

            for filepath in file_list:
                print(f"➡️ Processing file: {filepath}")

                # Run the single trial test but also capture counts
                trial_correct, trial_total = self.test_single_trial(filepath, class_idx, return_counts=True)

                correct_preds += trial_correct
                total_windows += trial_total

        # Final Accuracy Report
        acc = 100.0 * correct_preds / total_windows if total_windows > 0 else 0
        print(f"\n✅ Overall testing accuracy: {acc:.2f}% ({correct_preds}/{total_windows})")


    def test_single_trial(self, filepath, class_idx, return_counts=False):
        """
        Test the already-trained LDA model on a single trial file.
        Counts per-window correct/incorrect predictions and prints accuracy.
        Requires:
            filepath  - path to the trial file
            class_idx - class index used during training (0-based)
        """
        print("\n**************** TESTING (single trial) ****************\n")

        total_windows = 0
        correct_preds = 0

        try:
            # 🟢 Load trial into self.testdata (interleaved format)
            self.load_trial_data(filepath, "testdata")

            flat_data = self.testdata
            for m in range(self.win_per_trial):
                start = m * self.winc * self.channel
                end = start + self.wl * self.channel

                if end > len(flat_data):
                    break  # Not enough data left for full window

                window = flat_data[start:end]
                window_ptr = (ctypes.c_float * len(window))(*window)

                prediction = self.lib.LDA_test(
                    window_ptr,
                    ctypes.cast(self.Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                    ctypes.cast(self.Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                    ctypes.cast(self.xmean.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                    ctypes.cast(self.xstd.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
                    self.feature_dim,
                    self.num_class,
                    self.wl,
                    self.channel,
                    ctypes.c_float(self.deadzone_zc),
                    ctypes.c_float(self.deadzone_turn),
                    self.scale_mav,
                    self.scale_zc,
                    self.tdfeatureN
                )

                if prediction == (class_idx + 1):
                    correct_preds += 1

                total_windows += 1

        except Exception as e:
            print(f"❌ Failed to process {filepath}: {e}")

        # ✅ Accuracy report
        acc = 100.0 * correct_preds / total_windows if total_windows > 0 else 0
        print(f"\n✅ Testing accuracy (single trial): {acc:.2f}% ({correct_preds}/{total_windows})")

        if return_counts:
            return correct_preds, total_windows
        

    def _compute_worst_trials_per_label(self, top_k=1):
        """
        Compute per-trial accuracy using the current trained LDA model and return
        the worst 'top_k' trials per label (e.g., per act1/act2).

        Returns
        -------
        worst_by_label : dict
            { 'act1': ['act1/trial_18.txt', ...], 'act2': [...], ... }
        all_trial_results : list of (trial_key, accuracy)
            Sorted ascending by accuracy.
        """
        import numpy as np

        # Basic checks (same assumptions as in train_analysis)
        if not hasattr(self, "Wg") or not hasattr(self, "Cg"):
            raise RuntimeError("Wg/Cg not found. Run train_model() first.")

        if not hasattr(self, "trial_feature_ranges") or not self.trial_feature_ranges:
            raise RuntimeError("trial_feature_ranges not found. "
                               "Make sure features were extracted with trial info.")

        if not hasattr(self, "featurematrix") or len(self.featurematrix) == 0:
            raise RuntimeError("featurematrix is empty. Run train_model() first.")

        # Convert featurematrix to (num_samples, feature_dim)
        feat = np.array(self.featurematrix, dtype=np.float32)
        if feat.size % self.feature_dim != 0:
            raise ValueError(
                f"featurematrix length {feat.size} is not divisible by feature_dim {self.feature_dim}"
            )
        num_samples = feat.size // self.feature_dim
        feat = feat.reshape((num_samples, self.feature_dim))

        # Labels (1..num_class)
        labels = np.array(self.trainclass, dtype=np.int32)
        if labels.size != num_samples:
            raise ValueError(
                f"trainclass length {labels.size} does not match num_samples {num_samples}"
            )

        # LDA params
        Wg_vec = np.array(self.Wg, dtype=np.float32)
        Cg_vec = np.array(self.Cg, dtype=np.float32)
        Wg_mat = Wg_vec.reshape((self.num_class, self.feature_dim), order="F")

        def classify_row(x_row):
            scores_row = Wg_mat @ x_row + Cg_vec
            return int(np.argmax(scores_row)) + 1   # 1..num_class

        trial_results = []

        # Per-trial accuracy
        for trial_key, (start_row, end_row) in self.trial_feature_ranges.items():
            s = int(start_row)
            e = int(end_row)
            if s < 0 or e > num_samples or s >= e:
                self.add_report(f"WARNING: invalid range for trial {trial_key}: ({s}, {e})")
                continue

            trial_feat = feat[s:e, :]
            trial_labels = labels[s:e]

            preds = [classify_row(trial_feat[i, :]) for i in range(trial_feat.shape[0])]
            preds = np.array(preds, dtype=np.int32)

            total = trial_labels.size
            correct = int((preds == trial_labels).sum())
            acc = correct / total if total > 0 else 0.0

            trial_results.append((trial_key, acc))

        # Sort by accuracy ascending
        trial_results.sort(key=lambda x: x[1])

        # Pick worst 'top_k' per label (act1, act2, ...)
        worst_by_label = {}
        for trial_key, acc in trial_results:
            label_name = trial_key.split("/")[0]  # 'act1', 'act2', ...
            bucket = worst_by_label.setdefault(label_name, [])
            if len(bucket) < top_k:
                bucket.append(trial_key)

        return worst_by_label, trial_results

    def multipletrainOpt(
        self,
        root_folder,
        upgrade=3,
        split_type="alternate",
        percentage=60,
        accuracy_report_name=None,
        make_plot=True,
    ):
        """
        For each ResultClipSizeUpXXXX dataset under `root_folder`:

          1. Copy the dataset into root_folder/newadjustment/ResultClipSizeUpXXXX
             so originals are untouched.
          2. Split into Train/Test and train LDA.
          3. Compute per-trial accuracy and remove the `upgrade` worst trials per
             label (e.g., worst K act1 trials and worst K act2 trials) from the
             *copied* dataset.
          4. Re-split Train/Test, retrain and test.
          5. Log train/test accuracy to a separate accuracy report and
             optionally make a summary plot.

        Parameters
        ----------
        root_folder : str or Path
            Folder containing ResultClipSizeUpXXXX subfolders.
        upgrade : int
            Number of worst trials to remove per label (act1, act2, ...).
        split_type : str
            Passed to split_training_testing().
        percentage : int
            Training percentage for split_training_testing().
        accuracy_report_name : str or None
            Base name for the accuracy report txt file. If None, a default
            name is used.
        make_plot : bool
            If True, generate a Train/Test vs SampleSize PNG.
        """
        import os
        import shutil
        from pathlib import Path
        import numpy as np
        import matplotlib.pyplot as plt

        root = Path(root_folder)
        if not root.exists():
            raise FileNotFoundError(f"{root} does not exist")

        # Where adjusted copies live
        new_root = root / "newadjustment"
        new_root.mkdir(exist_ok=True)

        # Find all dataset folders, e.g. ResultClipSizeUp200, ResultClipSizeUp300, ...
        dataset_dirs = [
            d for d in root.iterdir()
            if d.is_dir() and d.name.lower().startswith("resultclipsizeup")
        ]
        if not dataset_dirs:
            raise FileNotFoundError(f"No 'ResultClipSizeUp*' folders found in {root}")

        # Helper to get numeric sample size from folder name
        def size_key(p: Path):
            digits = "".join(ch for ch in p.name if ch.isdigit())
            return int(digits) if digits else 0

        dataset_dirs.sort(key=size_key)

        # For final accuracy report / plot
        sample_sizes = []
        train_accs = []
        test_accs = []

        # Accuracy report file
        if accuracy_report_name is None:
            accuracy_report_name = f"Accuracy_Report_Train{percentage}_Opt.txt"

        accuracy_report_path = new_root / accuracy_report_name

        # Clear previous report
        if accuracy_report_path.exists():
            accuracy_report_path.unlink()

        def wr_acc(line=""):
            with open(accuracy_report_path, "a", encoding="utf-8") as f:
                f.write(str(line) + "\n")

        wr_acc("==============================================")
        wr_acc(f"Optimized Multiple-Train Report (Train {percentage}%, upgrade={upgrade})")
        wr_acc(f"Source root: {root}")
        wr_acc(f"Adjusted root: {new_root}")
        wr_acc("==============================================\n")

        # ---- Loop over each dataset (each sample size) ----
        for ds in dataset_dirs:
            size = size_key(ds)
            sample_sizes.append(size)

            # 1) Copy into newadjustment so originals stay untouched
            adjusted_ds = new_root / ds.name
            if adjusted_ds.exists():
                # If you prefer to force a clean copy, uncomment the next line:
                # shutil.rmtree(adjusted_ds)
                # For now, we just re-use it.
                pass
            else:
                shutil.copytree(ds, adjusted_ds)

            self.add_report("")
            self.add_report("################################################")
            self.add_report(f"### OPT DATASET: {adjusted_ds.name}  ({adjusted_ds})")
            self.add_report("################################################")

            # 2) First split and train on the *unpruned* adjusted dataset
            self.data_set_location = adjusted_ds
            self.add_report(f"[OPT] Initial training on adjusted copy: {self.data_set_location}")

            self.split_training_testing(type=split_type, percentage=percentage)
            self.set_data_info()
            self.train_model()

            # Capture training accuracy from the last train_model call
            # (assuming train_model stored training accuracy in self.train_accuracy
            #  or similar. If not, you can skip this and only log test accuracy.)
            if hasattr(self, "train_accuracy"):
                base_train_acc = float(self.train_accuracy)
            else:
                base_train_acc = float("nan")

            # 3) Compute worst trials per label and remove them
            worst_by_label, all_trial_results = self._compute_worst_trials_per_label(
                top_k=upgrade
            )

            self.add_report("[OPT] Per-trial accuracies (ascending):")
            for trial_key, acc in all_trial_results:
                self.add_report(f"  {trial_key}: {acc*100:.2f}%")

            self.add_report("")
            self.add_report(f"[OPT] Removing up to {upgrade} worst trials per label:")

            for label_name, trial_list in worst_by_label.items():
                self.add_report(f"  Label {label_name}:")
                for trial_key in trial_list:
                    rel = Path(trial_key)             # e.g. "act1/trial_18.txt"
                    raw_file = adjusted_ds / rel
                    if raw_file.exists():
                        raw_file.unlink()
                        self.add_report(f"    Removed {raw_file}")
                    else:
                        self.add_report(f"    WARNING: file not found for removal: {raw_file}")

            self.add_report("")

            # 4) Re-split, retrain and test on the pruned dataset
            self.add_report("[OPT] Re-splitting Train/Test and retraining after pruning...")
            self.split_training_testing(type=split_type, percentage=percentage)
            self.set_data_info()
            self.train_model()
            opt_test_acc = self.test_model()  # returns window-level accuracy

            if hasattr(self, "train_accuracy"):
                opt_train_acc = float(self.train_accuracy)
            else:
                opt_train_acc = float("nan")

            train_accs.append(opt_train_acc * 100.0)
            test_accs.append(opt_test_acc * 100.0)

            # Log summary for this dataset
            wr_acc(f"Dataset: {adjusted_ds.name} (size={size})")
            wr_acc(f"  Train accuracy (after pruning) = {opt_train_acc*100:.2f}%")
            wr_acc(f"  Test  accuracy (after pruning) = {opt_test_acc*100:.2f}%")
            wr_acc("  Removed trials:")
            for label_name, trial_list in worst_by_label.items():
                wr_acc(f"    {label_name}: " + ", ".join(trial_list))
            wr_acc("")

            self.add_report(
                f"[OPT] Finished dataset {adjusted_ds.name} "
                f"(train={opt_train_acc*100:.2f}%, test={opt_test_acc*100:.2f}%)"
            )
            self.add_report("")

        # ---- Final plot across sample sizes ----
        if make_plot and sample_sizes:
            sample_sizes_arr = np.array(sample_sizes, dtype=np.int32)
            train_arr = np.array(train_accs, dtype=np.float32)
            test_arr = np.array(test_accs, dtype=np.float32)

            plt.figure(figsize=(6, 4))
            plt.plot(sample_sizes_arr, train_arr, marker="o", label="Train")
            plt.plot(sample_sizes_arr, test_arr, marker="o", label="Test")
            plt.xlabel("Sample Size")
            plt.ylabel("Accuracy (%)")
            plt.title(
                f"Accuracy vs. Sample Size (Train {percentage}% / Test {100-percentage}% , "
                f"upgrade={upgrade})"
            )
            plt.grid(True, linestyle="--", alpha=0.5)
            plt.legend()
            plt.tight_layout()

            plot_path = new_root / f"Accuracy_vs_SampleSize_Train{percentage}_Opt.png"
            plt.savefig(plot_path)
            plt.close()

            wr_acc("")
            wr_acc(f"Saved accuracy plot: {plot_path}")

        wr_acc("\n=== End of Optimized Multiple-Train Run ===")


if __name__ == "__main__":
    from pathlib import Path
    import logging

    log_folder = Path("logs")
    log_folder.mkdir(exist_ok=True)

    logging.basicConfig(
        level=logging.DEBUG,
        format="%(asctime)s [%(levelname)s] %(name)s: %(message)s",
        handlers=[logging.FileHandler(log_folder / "trainclass.log", mode="w")]
    )

    train_obj = trainclass()

    root_tabledata = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application2\TrainingModel\TableData"

    train_obj.multipletrainOpt(
        root_folder=root_tabledata,
        upgrade=3,                 # remove 3 worst trials per act1/act2
        split_type="alternate",
        percentage=90,
        accuracy_report_name="AccuracyReport_Train60_Opt.txt",
        make_plot=True,
    )

   