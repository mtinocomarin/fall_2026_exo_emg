import os, sys, ctypes, array, logging
import numpy as np
from matplotlib.figure import Figure
from matplotlib.backends.backend_qt5agg import FigureCanvasQTAgg as FigureCanvas

# === Configure Logging ===
logging.basicConfig(
    level=logging.INFO,
    filename='emg_feature_log.txt',
    filemode='w',
    format='%(asctime)s - %(levelname)s - %(message)s'
)

# === Load DLL ===
dll_path = os.path.abspath("libfunctions.dll")
lib = ctypes.CDLL(dll_path)

# Declare C function signatures
lib.tdfeats.argtypes = [ctypes.POINTER(ctypes.c_float), ctypes.c_int, ctypes.c_int, ctypes.c_int, ctypes.POINTER(ctypes.c_float)]
lib.feature_normalization.argtypes = [ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float), ctypes.c_int]
lib.LDA_train.argtypes = [ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_int), ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float)]
lib.LDA_train_accuracy.argtypes = [ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_int), ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float)]
lib.LDA_train_accuracy.restype = ctypes.c_float
lib.LDA_test.argtypes = [ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float)]
lib.LDA_test.restype = ctypes.c_int

class EMGFeature:
    def __init__(self, window_length=100, window_increment=50, channels=3):
        self.WL = window_length
        self.WINC = window_increment
        self.CHANNEL = channels
        self.TD_FEATURES = 4
        self.CLASS = 2
        self.FEATURE_DIM = self.TD_FEATURES * self.CHANNEL
        self.DATA_PER_TRIAL = 5000
        self.WL_DIV_WINC = self.WL // self.WINC - 1
        self.WIN_PER_TRIAL = self.DATA_PER_TRIAL // self.WINC - self.WL_DIV_WINC
        self.features = []

    def process_trial(self, filepath, class_idx, TrainData, Feature_matrix, TrainClass, feat_idx):
        try:
            with open(filepath, "r") as f:
                vals = []
                for line in f:
                    parts = line.strip().split()
                    if len(parts) >= 4:
                        try:
                            vals.extend(float(v) for v in parts[1:4])
                        except ValueError:
                            # likely a header line like: timestamp ch1 ch2 ch3
                            continue
                TrainData[:len(vals)] = array.array('f', vals)
        except FileNotFoundError:
            print(f"❌ {filepath} not found.")
            return feat_idx

        feat_ptr = ctypes.cast(Feature_matrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float))

        for win in range(self.WIN_PER_TRIAL):
            start = win * self.WINC * self.CHANNEL
            window = TrainData[start:start + self.WL * self.CHANNEL]
            w_ctypes = (ctypes.c_float * len(window))(*window)
            lib.tdfeats(w_ctypes, self.WL, self.CHANNEL, feat_idx, feat_ptr)
            TrainClass[feat_idx] = class_idx + 1
            feat_idx += 1
        return feat_idx

    def save_c_arrays(self, filename, Wg, Cg, xmean, xstd, feat_dim, nclass):
        with open(filename, "w") as f:
            f.write(f"float Wg_init[{feat_dim*nclass}] = {{\n")
            for j in range(feat_dim):
                line = "    " + ", ".join(f"{Wg[i + j*nclass]:.6f}" for i in range(nclass))
                if j < feat_dim - 1: line += ","
                f.write(line + "\n")
            f.write("};\n\n")

            f.write(f"float Cg_init[{nclass}] = {{\n    ")
            f.write(", ".join(f"{Cg[i]:.6f}" for i in range(nclass)))
            f.write("\n};\n\n")

            f.write(f"float xstd_init[{feat_dim}] = {{\n")
            for j in range(0, feat_dim, 4):
                seg = ", ".join(f"{xstd[j+k]:.6f}" for k in range(min(4, feat_dim - j)))
                f.write(f"    {seg}{',' if j+4 < feat_dim else ''}\n")
            f.write("};\n\n")

            f.write(f"float xmean_init[{feat_dim}] = {{\n")
            for j in range(0, feat_dim, 4):
                seg = ", ".join(f"{xmean[j+k]:.6f}" for k in range(min(4, feat_dim - j)))
                f.write(f"    {seg}{',' if j+4 < feat_dim else ''}\n")
            f.write("};\n")

    def training(self, base_path, n_actions, n_train, n_test, testdata):
        train_set, test_set = {}, {}
        for a in range(1, n_actions + 1):
            act = f"act{a}"
            act_path = os.path.join(base_path, act)
            trial_files = sorted(
                [f for f in os.listdir(act_path) if f.startswith("trial_") and f.endswith(".txt")],
                key=lambda x: int(x.split("_")[1].split(".")[0])
            )
            train_set[act] = [f for f in trial_files if int(f.split("_")[1].split(".")[0]) % 2]
            test_set[act] = [f for f in trial_files if int(f.split("_")[1].split(".")[0]) % 2 == 0]

        print("\nOdd/Even split:")
        for act in train_set:
            print(f"{act}: Train → {train_set[act]}, Test → {test_set[act]}")

        total_train_win = n_actions * n_train * self.WIN_PER_TRIAL
        TrainData = array.array('f', [0.0] * (self.CHANNEL * self.DATA_PER_TRIAL))
        Feature_matrix = array.array('f', [0.0] * (total_train_win * self.FEATURE_DIM))
        TrainClass = array.array('i', [0] * total_train_win)
        xmean = array.array('f', [0.0] * self.FEATURE_DIM)
        xstd = array.array('f', [1.0] * self.FEATURE_DIM)
        Wg = array.array('f', [0.0] * (self.FEATURE_DIM * n_actions))
        Cg = array.array('f', [0.0] * n_actions)

        print("\n**************** TRAINING ****************\n")
        feat_idx = 0
        for class_idx, (act, files) in enumerate(train_set.items()):
            for fname in files:
                feat_idx = self.process_trial(os.path.join(base_path, act, fname),
                                              class_idx, TrainData, Feature_matrix, TrainClass, feat_idx)

        lib.feature_normalization(
            ctypes.cast(Feature_matrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(xmean.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(xstd.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            feat_idx
        )

        lib.LDA_train(
            ctypes.cast(Feature_matrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(TrainClass.buffer_info()[0], ctypes.POINTER(ctypes.c_int)),
            ctypes.cast(Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        )

        acc = lib.LDA_train_accuracy(
            ctypes.cast(Feature_matrix.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(TrainClass.buffer_info()[0], ctypes.POINTER(ctypes.c_int)),
            ctypes.cast(Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float)),
            ctypes.cast(Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        )
        print(f"\nTraining accuracy: {acc*100:.2f}%\n")
        self.testing(base_path, test_set, Wg, Cg, xmean, xstd, n_actions)
        self.save_c_arrays("model_weights.c", Wg, Cg, xmean, xstd, self.FEATURE_DIM, n_actions)

    def testing(self, base_path, test_set, Wg, Cg, xmean, xstd, n_actions):
        print("\n**************** TESTING ****************\n")
        TestData = array.array('f', [0.0] * (self.CHANNEL * self.DATA_PER_TRIAL))
        wg_ptr = ctypes.cast(Wg.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        cg_ptr = ctypes.cast(Cg.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        xm_ptr = ctypes.cast(xmean.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
        xs_ptr = ctypes.cast(xstd.buffer_info()[0], ctypes.POINTER(ctypes.c_float))

        total_win = correct = 0
        for class_idx, (act, files) in enumerate(test_set.items()):
            for fname in files:
                try:
                      with open(os.path.join(base_path, act, fname), "r") as f:
                        vals = []
                        for line in f:
                            parts = line.strip().split()
                            if len(parts) >= 4:
                                try:
                                    vals.extend(float(v) for v in parts[1:4])  # skip timestamp
                                except ValueError:
                                    # likely header line: "timestamp ch1 ch2 ch3"
                                    continue
                        TestData[:len(vals)] = array.array('f', vals)
                except FileNotFoundError:
                    print(f"❌ {fname} missing")
                    continue

                for w in range(self.WIN_PER_TRIAL):
                    off = w * self.WINC * self.CHANNEL
                    window = TestData[off:off + self.WL * self.CHANNEL]
                    win_ct = (ctypes.c_float * len(window))(*window)
                    res = lib.LDA_test(win_ct, wg_ptr, cg_ptr, xm_ptr, xs_ptr)
                    if res == class_idx + 1:
                        correct += 1
                    total_win += 1

        print(f"\nTest accuracy: {correct / total_win * 100:.2f}% ({correct}/{total_win})\n")

    def extract(self, raw_emg, normalize=True):
        raw_emg = np.asarray(raw_emg, dtype=np.float32)
        n_samples = raw_emg.shape[0]
        logging.info(f"Extracting features from {n_samples} samples...")

        feats = []
        for start in range(0, n_samples - self.WL + 1, self.WINC):
            window = raw_emg[start:start + self.WL].flatten(order='C')
            win_c = (ctypes.c_float * len(window))(*window)
            feat_arr = array.array('f', [0.0] * (self.TD_FEATURES * self.CHANNEL))
            feat_ptr = ctypes.cast(feat_arr.buffer_info()[0], ctypes.POINTER(ctypes.c_float))
            lib.tdfeats(win_c, self.WL, self.CHANNEL, 0, feat_ptr)

            feature_vec = np.frombuffer(feat_arr, dtype=np.float32).copy()
            feats.append(feature_vec)

            # ✅ Log the extracted feature vector
            logging.info(f"Window start={start} | Features: {feature_vec}")

        if not feats:
            self.features = np.empty((0, self.TD_FEATURES, self.CHANNEL), dtype=np.float32)
            logging.warning("⚠️ No feature windows extracted — input too short?")
            return self.features

        flat_feats = np.vstack(feats)  # shape: (n_windows, 12)

        if normalize:
            logging.info("Normalizing extracted features...")
            n_windows = flat_feats.shape[0]
            xmean = np.zeros(flat_feats.shape[1], dtype=np.float32)
            xstd = np.ones(flat_feats.shape[1], dtype=np.float32)

            lib.feature_normalization(
                flat_feats.ctypes.data_as(ctypes.POINTER(ctypes.c_float)),
                xmean.ctypes.data_as(ctypes.POINTER(ctypes.c_float)),
                xstd.ctypes.data_as(ctypes.POINTER(ctypes.c_float)),
                n_windows
            )
            logging.info("✅ Feature normalization complete.")

        self.features = flat_feats.reshape(-1, self.TD_FEATURES, self.CHANNEL)
        logging.info(f"✅ Extracted {self.features.shape[0]} windows of features.")
        return self.features

    def create_plot_canvas(self):
        fig = Figure(figsize=(6, 6), dpi=100, facecolor='#2e2e2e')
        fig.subplots_adjust(hspace=0.6)
        canvas = FigureCanvas(fig)
        axs = [fig.add_subplot(4, 1, i + 1) for i in range(4)]
        titles = ["MAV", "Waveform Length", "Zero Crossings", "Slope Sign Changes"]
        for ax, title in zip(axs, titles):
            ax.set_title(title)
            ax.set_xlim(0, 100)
            ax.set_ylim(0, 2)
            ax.set_facecolor('#1e1e1e')
            ax.tick_params(colors='white')
            ax.title.set_color('white')
            ax.grid(True)
        return canvas, axs
