import numpy as np

# ============================================================
# tdfeats() parameter calibrator (GLOBAL, all 3 channels)
# Estimates:
#   DEADZONE_ZC, DEADZONE_TURN, SCALE_ZC, SCALE_MAV
#
# Matches your C tdfeats():
#   - mean subtraction PER WINDOW
#   - ZC uses: sign change AND (|mid|>=DZ OR |fst|>=DZ) with flag flip
#   - Turns uses: local extremum AND (|mid-fst|>DZ OR |mid-lst|>DZ)
#   - MAV is mean(|zero_mean|)
# ============================================================

def robust_mad(x: np.ndarray) -> float:
    x = np.asarray(x, dtype=np.float32)
    med = np.median(x)
    return float(np.median(np.abs(x - med)))

def sliding_windows_1d(x: np.ndarray, wl: int, step: int) -> np.ndarray:
    x = np.asarray(x, dtype=np.float32).reshape(-1)
    n = x.size
    if wl <= 0 or step <= 0:
        raise ValueError("window_length and step must be > 0")
    if n < wl:
        raise ValueError(f"trial too short: n={n} < window_length={wl}")
    num = 1 + (n - wl) // step
    if num <= 0:
        raise ValueError("no windows possible with given wl/step")
    s0 = x.strides[0]
    return np.lib.stride_tricks.as_strided(
        x, shape=(num, wl), strides=(step * s0, s0), writeable=False
    )

def load_emg_columns_from_file(trial_path: str) -> np.ndarray:
    """
    Loads Nx3 float array [ch1,ch2,ch3].
    Accepts whitespace/tabs/commas.
    Uses LAST 3 numeric columns per row (safe if extra cols exist).
    Requires at least timestamp + 3 channels (4 cols).
    """
    rows = []
    with open(trial_path, "r", encoding="utf-8", errors="ignore") as f:
        for line in f:
            s = line.strip()
            if not s:
                continue
            parts = s.replace(",", " ").split()
            if len(parts) < 4:
                continue
            try:
                ch1 = float(parts[-3])
                ch2 = float(parts[-2])
                ch3 = float(parts[-1])
            except Exception:
                continue
            rows.append((ch1, ch2, ch3))
    if not rows:
        raise ValueError(f"No valid EMG rows found in: {trial_path}")
    return np.asarray(rows, dtype=np.float32)

# ----------------------------
# Firmware-matching counters
# ----------------------------

def zc_count_firmware(window0: np.ndarray, deadzone_zc: float) -> int:
    """
    Matches your C ZC loop exactly (on zero-mean window):
      flag_prev=1
      for i=1..WL-2:
        fst=|w[i-1]| mid=|w[i]|
        if sign change between w[i] and w[i-1]:
          if mid>=DZ or fst>=DZ: flag_curr=-flag_prev
        if flag_curr!=flag_prev: zero_count++
    """
    w = np.asarray(window0, dtype=np.float32)
    n = w.size
    if n < 3:
        return 0
    zero_count = 0
    flag_prev = 1
    for i in range(1, n - 1):
        curr = w[i]
        prev = w[i - 1]
        mid = abs(curr)
        fst = abs(prev)

        flag_curr = flag_prev
        if (curr >= 0 and prev < 0) or (curr < 0 and prev >= 0):
            if (mid >= deadzone_zc) or (fst >= deadzone_zc):
                flag_curr = -flag_prev

        if flag_curr != flag_prev:
            zero_count += 1
        flag_prev = flag_curr
    return int(zero_count)

def turns_count_firmware(window0: np.ndarray, deadzone_turn: float) -> int:
    """
    Matches your C Turns loop exactly (on zero-mean window):
      for i=1..WL-2:
        fst=|w[i-1]| mid=|w[i]| lst=|w[i+1]|
        if local extremum:
          if |mid-fst|>DZ or |mid-lst|>DZ: turns++
    """
    w = np.asarray(window0, dtype=np.float32)
    n = w.size
    if n < 3:
        return 0
    turns = 0
    for i in range(1, n - 1):
        fst = abs(w[i - 1])
        mid = abs(w[i])
        lst = abs(w[i + 1])

        if (mid > fst and mid > lst) or (mid < fst and mid < lst):
            if (abs(mid - fst) > deadzone_turn) or (abs(mid - lst) > deadzone_turn):
                turns += 1
    return int(turns)

def mav_firmware(window0: np.ndarray) -> float:
    """mav = mean(|zero-mean window|)"""
    w = np.asarray(window0, dtype=np.float32)
    return float(np.mean(np.abs(w))) if w.size else 0.0

# ----------------------------
# Calibration
# ----------------------------

def calibrate_tdfeats_params_global(
    trial_path: str,
    window_length: int = 100,
    step: int = 50,
    baseline_fraction: float = 0.25,
    min_baseline_windows: int = 10,

    # Tune factors here:
    deadzone_zc_factor: float = 3.0,
    deadzone_turn_factor: float = 2.0,

    # How we pick scales:
    target_baseline_mav_after_scale: float = 1.0,  # MAV/SCALE_MAV ~ 1 on baseline
):
    emg_cols = load_emg_columns_from_file(trial_path)  # Nx3

    # Collect baseline windows across ALL channels for robust global estimates
    all_baseline_samples = []
    per_ch_stats = []

    for ch in range(3):
        x = emg_cols[:, ch].astype(np.float32)
        windows = sliding_windows_1d(x, window_length, step)          # (W, WL)
        win_means = np.mean(windows, axis=1, keepdims=True)
        windows0 = windows - win_means                                # zero-mean per window (matches C)

        # baseline selection by RMS (matches "quiet windows")
        rms = np.sqrt(np.mean(windows0 * windows0, axis=1))
        num_w = windows0.shape[0]
        k = int(round(baseline_fraction * num_w))
        k = max(k, min_baseline_windows)
        k = min(k, num_w)

        baseline_idx = np.argsort(rms)[:k]
        baseline_windows0 = windows0[baseline_idx]                    # (k, WL)

        all_baseline_samples.append(baseline_windows0.reshape(-1))

        per_ch_stats.append({
            "num_windows": num_w,
            "baseline_k": k,
            "baseline_rms_mean": float(np.mean(rms[baseline_idx])),
            "baseline_rms_median": float(np.median(rms[baseline_idx])),
        })

    all_baseline_samples = np.concatenate(all_baseline_samples, axis=0)

    # ---------- DEADZONES (global) ----------
    # Use MAD of baseline samples (already window-centered), convert with factor.
    mad = robust_mad(all_baseline_samples)
    if not np.isfinite(mad) or mad < 1e-9:
        mad = 1e-6

    DEADZONE_ZC = max(deadzone_zc_factor * mad, 1e-6)

    # For TURN threshold, use MAD of first-differences of abs(signal) on baseline.
    # This better matches "mid-fst" / "mid-lst" comparisons in your turns logic.
    abs_baseline = np.abs(all_baseline_samples.astype(np.float32))
    diffs = np.diff(abs_baseline)
    mad_diff = robust_mad(diffs) if diffs.size else mad
    if not np.isfinite(mad_diff) or mad_diff < 1e-9:
        mad_diff = mad
    DEADZONE_TURN = max(deadzone_turn_factor * mad_diff, 1e-6)

    # ---------- SCALES (global) ----------
    # Compute raw baseline ZC counts and MAV across all channels using these deadzones.
    all_baseline_zc = []
    all_baseline_mav = []

    for ch in range(3):
        x = emg_cols[:, ch].astype(np.float32)
        windows = sliding_windows_1d(x, window_length, step)
        win_means = np.mean(windows, axis=1, keepdims=True)
        windows0 = windows - win_means

        rms = np.sqrt(np.mean(windows0 * windows0, axis=1))
        num_w = windows0.shape[0]
        k = int(round(baseline_fraction * num_w))
        k = max(k, min_baseline_windows)
        k = min(k, num_w)
        baseline_idx = np.argsort(rms)[:k]

        for i in baseline_idx:
            w0 = windows0[i]
            all_baseline_zc.append(zc_count_firmware(w0, DEADZONE_ZC))
            all_baseline_mav.append(mav_firmware(w0))

    if len(all_baseline_zc) == 0:
        SCALE_ZC = 1
    else:
        SCALE_ZC = int(max(int(np.median(all_baseline_zc)), 1))

    if len(all_baseline_mav) == 0:
        SCALE_MAV = 1
    else:
        baseline_mav_med = float(np.median(all_baseline_mav))
        # Choose SCALE_MAV so baseline_mav_med / SCALE_MAV ≈ target
        SCALE_MAV = int(max(round(baseline_mav_med / max(target_baseline_mav_after_scale, 1e-6)), 1))

    diagnostics = {
        "mad_baseline": float(mad),
        "mad_absdiff_baseline": float(mad_diff),
        "baseline_zc_median_raw": float(np.median(all_baseline_zc)) if all_baseline_zc else 0.0,
        "baseline_zc_min_raw": int(np.min(all_baseline_zc)) if all_baseline_zc else 0,
        "baseline_zc_max_raw": int(np.max(all_baseline_zc)) if all_baseline_zc else 0,
        "baseline_mav_median_raw": float(np.median(all_baseline_mav)) if all_baseline_mav else 0.0,
        "per_channel": per_ch_stats,
        "window_length": window_length,
        "step": step,
        "baseline_fraction": baseline_fraction,
        "min_baseline_windows": min_baseline_windows,
        "deadzone_zc_factor": deadzone_zc_factor,
        "deadzone_turn_factor": deadzone_turn_factor,
        "target_baseline_mav_after_scale": target_baseline_mav_after_scale,
    }

    return DEADZONE_ZC, DEADZONE_TURN, SCALE_ZC, SCALE_MAV, diagnostics

def main():
    trial = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1\act1\trial_1.txt"

    DEADZONE_ZC, DEADZONE_TURN, SCALE_ZC, SCALE_MAV, diag = calibrate_tdfeats_params_global(
        trial_path=trial,
        window_length=100,   # WL
        step=50,             # WINC
        baseline_fraction=0.25,
        min_baseline_windows=10,
        deadzone_zc_factor=3.0,
        deadzone_turn_factor=2.0,
        target_baseline_mav_after_scale=1.0,
    )

    print("===== tdfeats() GLOBAL Calibration =====")
    print(f"Trial file: {trial}")
    print(f"WL/STEP  : {diag['window_length']}/{diag['step']}")
    print("---------------------------------------")
    print(f"#define DEADZONE_ZC     {DEADZONE_ZC:.6f}f")
    print(f"#define DEADZONE_TURN   {DEADZONE_TURN:.6f}f")
    print(f"#define SCALE_ZC        {SCALE_ZC}")
    print(f"#define SCALE_MAV       {SCALE_MAV}")
    print("---------------------------------------")
    print("Diagnostics:")
    print(f"  baseline MAD              : {diag['mad_baseline']:.8f}")
    print(f"  baseline abs-diff MAD      : {diag['mad_absdiff_baseline']:.8f}")
    print(f"  baseline ZC raw (med/min/max): {diag['baseline_zc_median_raw']:.1f}/"
          f"{diag['baseline_zc_min_raw']}/{diag['baseline_zc_max_raw']}")
    print(f"  baseline MAV raw median    : {diag['baseline_mav_median_raw']:.6f}")
    for i, st in enumerate(diag["per_channel"], start=1):
        print(f"  CH{i}: windows={st['num_windows']} baseline_k={st['baseline_k']} "
              f"baseline_rms_mean={st['baseline_rms_mean']:.6f}")

if __name__ == "__main__":
    main()
