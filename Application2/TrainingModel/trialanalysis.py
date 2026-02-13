import os
import ctypes
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from scipy.spatial.distance import mahalanobis
from trainingModel import trainclass

class trialanalysis:
    def __init__(self):
        self.model = trainclass()
        self.centroids = None
        self.distance_matrix = None
        self.trial_names = None

    def analyze_manifest_tests_vs_training(self, manifest_path, plot=True):
        """
        Compare tests listed in a manifest file to ALL training-trial centroids.

        Manifest format (free spacing OK):
            action 1
            object 1
            C:\\path\\to\\set1\\act1\\trial_1.txt

            object 2
            C:\\path\\to\\set2\\act1\\trial_1.txt
            ...
            action 2
            C:\\path\\to\\set6\\act1\\trial_1.txt
            ...

        Requires:
            - self.model.train_model(...)   already called
            - self.analyze_train_set()      already called (populates self.centroids/self.trial_names)

        Returns:
            results_dict: {
                "<label>": [(train_trial_name, distance), ... (nearest→farthest)],
                ...
            }

        Also sets:
            self.manifest_test_to_train_distance_matrix (n_tests x n_train_trials)
            self.manifest_test_labels (list of test labels, same row order as matrix)
        """
        if self.centroids is None or self.trial_names is None:
            raise RuntimeError("Run analyze_train_set() after training before calling this.")

        # --- parse manifest into (action, object, path) rows ---
        entries = []
        cur_action = None
        cur_object = None

        def is_path_line(s):
            s = s.strip()
            return len(s) > 0 and (s.endswith(".txt") or s.endswith(".TXT"))

        with open(manifest_path, "r", encoding="utf-8") as f:
            for raw in f:
                line = raw.strip()
                if not line:
                    continue
                low = line.lower()
                if low.startswith("action"):
                    cur_action = line  # keep original text e.g., "action 1"
                    continue
                if low.startswith("object"):
                    cur_object = line  # keep original text e.g., "object 2"
                    continue
                if is_path_line(line):
                    entries.append((cur_action, cur_object, line))

        if not entries:
            print("⚠️ No entries parsed from manifest.")
            return {}

        # --- compute distances for each manifest test file ---
        test_labels = []
        all_rows = []
        skipped = []

        for (act_lbl, obj_lbl, path) in entries:
            # Build a readable label
            base = os.path.basename(path)
            label_parts = []
            if act_lbl: label_parts.append(act_lbl)
            if obj_lbl: label_parts.append(obj_lbl)
            label_parts.append(base)
            label = " | ".join(label_parts)

            lda_test = self._project_single_trial_to_lda(path)
            if lda_test is None or lda_test.shape[0] == 0:
                print(f"⚠️ Skipping (no full windows): {path}")
                skipped.append(path)
                continue

            # Simple centroid over windows (length-agnostic)
            test_centroid = lda_test.mean(axis=0).astype(np.float32)

            dists = np.array(
                self.compute_mahalanobis_distances(test_centroid, self.centroids),
                dtype=np.float32
            )
            all_rows.append(dists)
            test_labels.append(label)

        if not all_rows:
            print("⚠️ No valid test trials from manifest to compare.")
            return {}

        dist_mat = np.vstack(all_rows).astype(np.float32)
        self.manifest_test_to_train_distance_matrix = dist_mat
        self.manifest_test_labels = test_labels

        # --- build sorted results per test ---
        results = {}
        for i, lbl in enumerate(test_labels):
            order = np.argsort(dist_mat[i])
            results[lbl] = [(self.trial_names[j], float(dist_mat[i, j])) for j in order]

        # --- optional heatmap ---
        if plot:
            plt.figure(figsize=(max(10, len(self.trial_names) * 0.5),
                                max(6, len(test_labels) * 0.4)))
            sns.heatmap(
                dist_mat,
                xticklabels=self.trial_names,
                yticklabels=test_labels,
                annot=True,
                fmt=".2f",
                cmap="viridis"
            )
            plt.title("Mahalanobis Distance: Manifest Tests → Training Trial Centroids (LDA space)")
            plt.xlabel("Training trials")
            plt.ylabel("Manifest tests")
            plt.xticks(rotation=45, ha="right")
            plt.tight_layout()
            plt.show()

        if skipped:
            print(f"ℹ️ Skipped {len(skipped)} file(s) with no full windows.")

        return results


    def project_to_lda_space(self):
        """
        Projects normalized training features to LDA space using Wg and Cg.
        Returns: np.ndarray of shape (n_windows, n_classes)
        """
        model = self.model
        Wg = np.array(model.Wg, dtype=np.float32).reshape((model.feature_dim, model.num_class))
        Cg = np.array(model.Cg, dtype=np.float32)
        feature_norm = np.array(model.featurematrix, dtype=np.float32).reshape((-1, model.feature_dim))
        return feature_norm @ Wg + Cg

    def compute_mahalanobis_distances(self, test_vec, reference_matrix):
        """
        test_vec: (C,)     — vector in LDA space
        reference_matrix:  — (N, C) centroids
        Returns: list of Mahalanobis distances to all centroids
        """
        cov = np.cov(reference_matrix.T)
        cov_inv = np.linalg.inv(cov)
        return [mahalanobis(test_vec, ref, cov_inv) for ref in reference_matrix]

    def analyze_train_set(self):
        """
        Projects each training trial's windows into LDA space,
        computes centroid per trial, and stores them.
        """
        lda_proj = self.project_to_lda_space()

        # reset containers
        centroids = []
        trial_names = []

        for trial_name, (start_idx, end_idx) in self.model.trial_feature_ranges.items():
            trial_features = lda_proj[start_idx:end_idx]
            centroid = np.mean(trial_features, axis=0)
            centroids.append(centroid)
            trial_names.append(trial_name)

        self.centroids = np.array(centroids, dtype=np.float32)
        self.trial_names = trial_names

        # optional: visualize train↔train distances (kept from your original)
        self.distance_matrix = np.zeros((len(self.centroids), len(self.centroids)), dtype=np.float32)
        for i in range(len(self.centroids)):
            distances = self.compute_mahalanobis_distances(self.centroids[i], self.centroids)
            self.distance_matrix[i] = distances

        plt.figure(figsize=(10, 8))
        sns.heatmap(self.distance_matrix, xticklabels=self.trial_names, yticklabels=self.trial_names,
                    annot=True, fmt=".2f", cmap="viridis")
        plt.title("Mahalanobis Distance Between Training Trial Centroids")
        plt.xticks(rotation=45, ha="right")
        plt.tight_layout()
        plt.show()

    # ---------- helper to project ONE trial to LDA space ----------
    def _project_single_trial_to_lda(self, filepath):
        """
        Loads a single file, windows it, extracts TD features per window via C,
        normalizes with training stats (xmean/xstd), and projects to LDA space.
        Returns: np.ndarray (n_windows, num_class)
        """
        m = self.model

        # load raw interleaved floats into m.testdata
        m.load_trial_data(filepath, "testdata")
        flat_data = m.testdata

        feats_list = []
        win_idx = 0
        while True:
            start = win_idx * m.winc * m.channel
            end   = start + m.wl * m.channel
            if end > len(flat_data):
                break

            window = flat_data[start:end]
            window_ptr = (ctypes.c_float * len(window))(*window)

            # one feature vector
            fv = (ctypes.c_float * m.feature_dim)()
            m.lib.tdfeats(
                window_ptr,
                m.wl,
                m.channel,
                0,  # not used here
                ctypes.cast(fv, ctypes.POINTER(ctypes.c_float)),
                ctypes.c_float(m.deadzone_zc),
                ctypes.c_float(m.deadzone_turn),
                m.scale_mav,
                m.scale_zc,
                m.tdfeatureN
            )
            feats_list.append(np.frombuffer(fv, dtype=np.float32, count=m.feature_dim).copy())
            win_idx += 1

        if not feats_list:
            return None

        X = np.vstack(feats_list).astype(np.float32)  # [n_win, feature_dim]

        # normalize with training stats
        xmean = np.array(m.xmean, dtype=np.float32)
        xstd  = np.array(m.xstd,  dtype=np.float32)
        xstd_safe = np.where(xstd == 0.0, 1.0, xstd)
        Xn = (X - xmean) / xstd_safe

        # LDA mapping
        Wg = np.array(m.Wg, dtype=np.float32).reshape((m.feature_dim, m.num_class))
        Cg = np.array(m.Cg, dtype=np.float32)
        return Xn @ Wg + Cg  # [n_win, num_class]
    
    

    def analyze_test_and_training_set(self, testfile_path, class_idx=None, plot=True):
        """
        Compare one test trial to ALL training trial centroids:
        - assumes train_model() and analyze_train_set() already ran
        - returns a sorted list of (training_trial_name, distance)
        """
        if self.centroids is None or self.trial_names is None:
            raise RuntimeError("Run analyze_train_set() after training before calling this.")

        lda_test = self._project_single_trial_to_lda(testfile_path)
        if lda_test is None or lda_test.shape[0] == 0:
            print("⚠️ No full windows found in test trial.")
            return []

        test_centroid = lda_test.mean(axis=0).astype(np.float32)
        distances = np.array(self.compute_mahalanobis_distances(test_centroid, self.centroids), dtype=np.float32)

        order = np.argsort(distances)
        pairs = [(self.trial_names[i], float(distances[i])) for i in order]

        if plot:
            plt.figure(figsize=(10, 5))
            plt.bar(range(len(order)), distances[order])
            plt.xticks(range(len(order)), [self.trial_names[i] for i in order], rotation=45, ha="right")
            plt.ylabel("Mahalanobis distance")
            plt.title("Test Trial → Training Trial Centroids (LDA space)")
            plt.tight_layout()
            plt.show()

        return pairs
    

    def analyze_all_tests_vs_training(self, plot=True):
        """
        Compare ALL test trials to ALL training-trial centroids.

        Requires:
            - self.model.train_model(...) already called (with your split that sets testpath)
            - self.analyze_train_set() already called to populate self.centroids/self.trial_names

        Returns:
            results_dict: {
                "<test_label>": [(train_trial_name, distance), ... sorted nearest→farthest],
                ...
            }
            Also sets:
                self.test_to_train_distance_matrix  (n_tests x n_train_trials)
                self.test_trial_names                (list of test labels)
        """
        if self.centroids is None or self.trial_names is None:
            raise RuntimeError("Run analyze_train_set() after training before calling this.")

        m = self.model
        if not hasattr(m, "testpath") or not m.testpath:
            raise RuntimeError("No test set found on model (model.testpath is empty). "
                               "Make sure train_model(..., split_mode=...) populated testpath.")

        # Collect test file paths and labels
        test_files = []
        test_labels = []
        for cls_idx, files in m.testpath.items():
            for f in files:
                test_files.append(f)
                # Label with class index for clarity; adjust if you prefer just basename.
                test_labels.append(f"[c{cls_idx}] {os.path.basename(f)}")

        all_rows = []
        valid_labels = []
        skipped = []

        # Compute distances for each test trial
        for path, label in zip(test_files, test_labels):
            lda_test = self._project_single_trial_to_lda(path)
            if lda_test is None or lda_test.shape[0] == 0:
                print(f"⚠️ Skipping (no full windows): {path}")
                skipped.append(path)
                continue

            test_centroid = lda_test.mean(axis=0).astype(np.float32)
            dists = np.array(
                self.compute_mahalanobis_distances(test_centroid, self.centroids),
                dtype=np.float32
            )
            all_rows.append(dists)
            valid_labels.append(label)

        if not all_rows:
            print("⚠️ No valid test trials to compare.")
            return {}

        dist_mat = np.vstack(all_rows).astype(np.float32)
        self.test_to_train_distance_matrix = dist_mat
        self.test_trial_names = valid_labels

        # Build sorted results per test trial
        results = {}
        for i, lbl in enumerate(valid_labels):
            order = np.argsort(dist_mat[i])
            results[lbl] = [(self.trial_names[j], float(dist_mat[i, j])) for j in order]

        # Optional: heatmap (tests as rows, training-trial centroids as columns)
        if plot:
            plt.figure(figsize=(max(10, len(self.trial_names) * 0.5),
                                max(6, len(valid_labels) * 0.4)))
            sns.heatmap(
                dist_mat,
                xticklabels=self.trial_names,
                yticklabels=valid_labels,
                annot=True,
                fmt=".2f",
                cmap="viridis"
            )
            plt.title("Mahalanobis Distance: Test Trials → Training Trial Centroids (LDA space)")
            plt.xlabel("Training trials")
            plt.ylabel("Test trials")
            plt.xticks(rotation=45, ha="right")
            plt.tight_layout()
            plt.show()

        if skipped:
            print(f"ℹ️ Skipped {len(skipped)} test file(s) with no full windows.")

        return results



if __name__ == "__main__":
    base_path = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\FullSet\setadjust"
    split_mode = "alternate"
    m = trialanalysis()
    m.model.train_model(base_path, split_mode=split_mode)
    m.analyze_train_set()
