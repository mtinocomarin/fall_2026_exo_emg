import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.lines import Line2D

# ---------------------------
# Settings
# ---------------------------
trial_idx = 6

session_root = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_181930"
emg_path  = rf"{session_root}\trial_{trial_idx}.txt"
pred_path = rf"{session_root}\predictions\trial_{trial_idx}.txt"

apple_path = r"C:\Users\mtino\AppData\Local\Temp\a5b8a5c4-ebca-4137-8222-79f369c86bf5_Apple_Data.zip.bf5\Apple_Trial_5(Fail-Early_Release).csv"

DT = 0.01                 # time grid (s)
PLOT_MAX_SECONDS = None   # e.g. 12.0 to mimic your screenshot
CHANGE_SOURCE = "pred"    # "pred" or "apple" or "both"

# ---------------------------
# Color mapping (match your GUI)
# ---------------------------
def class_color(c: int):
    if c == 1:  # HOLD
        return (255/255, 50/255, 180/255)
    if c == 2:  # RELEASE
        return (60/255, 120/255, 255/255)
    return (0/255, 200/255, 80/255)

def add_emg_class_legend(ax):
    legend_items = [
        Line2D([0], [0], color=class_color(1), lw=2, label="Hold (1)"),
        Line2D([0], [0], color=class_color(2), lw=2, label="Release (2)"),
        Line2D([0], [0], color=class_color(0), lw=2, label="Other"),
    ]
    ax.legend(handles=legend_items, loc="upper right", frameon=True)

# ---------------------------
# Helpers
# ---------------------------
def parse_hms_ms(tstr: str) -> float:
    return pd.to_timedelta(tstr).total_seconds()

def step_hold(times, values, t_grid, fill=-999, as_int=True):
    times = np.asarray(times, dtype=float)
    values = np.asarray(values)

    idx = np.searchsorted(times, t_grid, side="right") - 1
    if as_int:
        out = np.full(t_grid.shape, fill, dtype=int)
        ok = idx >= 0
        out[ok] = values[idx[ok]].astype(int)
        return out
    else:
        out = np.full(t_grid.shape, np.nan, dtype=float)
        ok = idx >= 0
        out[ok] = values[idx[ok]].astype(float)
        return out

def find_best_offset(tA, yA, tB, yB, dt=0.01, search_pad=2.0, min_overlap=3.0):
    tA = np.asarray(tA, float) - float(tA[0])
    tB = np.asarray(tB, float) - float(tB[0])
    yA = np.asarray(yA, int)
    yB = np.asarray(yB, int)

    lenA, lenB = float(tA[-1]), float(tB[-1])
    max_shift = max(lenA, lenB) + search_pad
    offsets = np.arange(-max_shift, max_shift + dt, dt)

    best = {"offset": None, "score": -1.0, "overlap_s": 0.0}

    for off in offsets:
        start = max(0.0, -off)
        end   = min(lenA, lenB - off)
        overlap = end - start
        if overlap < min_overlap:
            continue

        tg = np.arange(start, end, dt)
        a = step_hold(tA, yA, tg, as_int=True)
        b = step_hold(tB, yB, tg + off, as_int=True)

        valid = (a != -999) & (b != -999)
        if valid.sum() < int(min_overlap / dt):
            continue

        score = (a[valid] == b[valid]).mean()
        if score > best["score"]:
            best = {"offset": float(off), "score": float(score), "overlap_s": float(overlap)}
    return best

def change_times(t_grid, labels):
    labels = np.asarray(labels, int)
    idx = np.where(labels[1:] != labels[:-1])[0] + 1
    return t_grid[idx]

def overlay_colored_segments(ax, t, y, cls, lw=1.8):
    """
    Light baseline + colored segments where cls is constant.
    """
    ax.plot(t, y, linewidth=1.0, alpha=0.35)  # baseline

    n = len(t)
    i = 0
    while i < n:
        c = int(cls[i])
        j = i + 1
        while j < n and int(cls[j]) == c:
            j += 1
        ax.plot(t[i:j], y[i:j], color=class_color(c), linewidth=lw)
        i = j

# ---------------------------
# Load EMG + predictions
# ---------------------------
dfE = pd.read_csv(emg_path, sep=r"\s+|,", engine="python")
dfE.columns = [c.strip().lower() for c in dfE.columns]

tE_abs = dfE["timestamp"].astype(str).map(parse_hms_ms).to_numpy()
tE = tE_abs - tE_abs[0]

ch_cols = [c for c in dfE.columns if c != "timestamp"]
emg = dfE[ch_cols].astype(float).to_numpy()

dfP = pd.read_csv(pred_path, sep=r"\s+", engine="python")
dfP.columns = [c.strip().lower() for c in dfP.columns]

tP_abs = dfP["timestamp"].astype(str).map(parse_hms_ms).to_numpy()
tP = tP_abs - tE_abs[0]
pred_cls = dfP["class"].astype(int).to_numpy()

ordP = np.argsort(tP)
tP, pred_cls = tP[ordP], pred_cls[ordP]

# ---------------------------
# Load Apple
# ---------------------------
dfB = pd.read_csv(apple_path)
dfB.rename(columns={c: c.strip() for c in dfB.columns}, inplace=True)

tB = dfB["Time [s]"].astype(float).to_numpy()
yB = dfB["EMG Class"].astype(int).to_numpy()

ordB = np.argsort(tB)
tB, yB = tB[ordB], yB[ordB]

def col_if_exists(name):
    return dfB[name].astype(float).to_numpy() if name in dfB.columns else None

dist_mm   = col_if_exists("Distance [mm]")
thumb_mA  = col_if_exists("Thumb Current [mA]")
index_mA  = col_if_exists("Index Current [mA]")
middle_mA = col_if_exists("Middle Current [mA]")
ring_mA   = col_if_exists("Ring Current [mA]")

thumb_N   = col_if_exists("Thumb Force [N]")
index_N   = col_if_exists("Index Force [N]")
middle_N  = col_if_exists("Middle Force [N]")
ring_N    = col_if_exists("Ring Force [N]")

# ---------------------------
# Offset (pred class vs apple EMG class)
# ---------------------------
best = find_best_offset(tP, pred_cls, tB, yB, dt=DT, search_pad=2.0, min_overlap=3.0)
off = best["offset"]

print("===== BEST ALIGNMENT =====")
print(f"Trial index    : {trial_idx}")
print(f"Offset (sec)   : {off:+.3f}")
print(f"Match score    : {best['score']*100:.2f}%")
print(f"Overlap used   : {best['overlap_s']:.2f} s")

# ---------------------------
# Common grid (prediction timeline)
# ---------------------------
tP0 = tP - tP[0]
tB0 = tB - tB[0]

start = max(0.0, -off)
end   = min(tP0[-1], tB0[-1] - off)

plot_end = end if PLOT_MAX_SECONDS is None else min(end, start + float(PLOT_MAX_SECONDS))
t_grid = np.arange(start, plot_end, DT)

pred_cls_g  = step_hold(tP0, pred_cls, t_grid, as_int=True)
apple_cls_g = step_hold(tB0, yB,       t_grid + off, as_int=True)

# EMG (interpolated to grid)
emg_grid = np.zeros((t_grid.size, emg.shape[1]), float)
for k in range(emg.shape[1]):
    emg_grid[:, k] = np.interp(t_grid, tE, emg[:, k])

# Apple signals (step hold onto grid)
def apple_g(arr):
    if arr is None:
        return None
    return step_hold(tB0, arr, t_grid + off, as_int=False)

dist_g   = apple_g(dist_mm)
thumb_g  = apple_g(thumb_mA)
index_g  = apple_g(index_mA)
middle_g = apple_g(middle_mA)
ring_g   = apple_g(ring_mA)

thumbF_g  = apple_g(thumb_N)
indexF_g  = apple_g(index_N)
middleF_g = apple_g(middle_N)
ringF_g   = apple_g(ring_N)

# Dotted vertical lines at class changes
change_t = []
if CHANGE_SOURCE in ("pred", "both"):
    change_t.append(change_times(t_grid, pred_cls_g))
if CHANGE_SOURCE in ("apple", "both"):
    change_t.append(change_times(t_grid, apple_cls_g))
change_t = np.unique(np.concatenate(change_t)) if change_t else np.array([])

# ---------------------------
# Subplots (NO separate class plot)
# - EMG plot colored by class + legend box
# - Currents
# - Forces
# - Distance
# + dotted class-change lines across all
# ---------------------------
have_curr  = any(x is not None for x in [thumb_g, index_g, middle_g, ring_g])
have_force = any(x is not None for x in [thumbF_g, indexF_g, middleF_g, ringF_g])
have_dist  = dist_g is not None

rows = 1  # EMG
if have_curr:
    rows += 1
if have_force:
    rows += 1
if have_dist:
    rows += 1

fig, axs = plt.subplots(rows, 1, sharex=True, figsize=(16, 9))
if rows == 1:
    axs = [axs]

ri = 0

# (1) EMG plot (colored segments by PRED class)
ax = axs[ri]; ri += 1
for k in range(emg_grid.shape[1]):
    overlay_colored_segments(ax, t_grid, emg_grid[:, k], pred_cls_g, lw=1.8)
ax.set_ylabel("EMG (V)")
ax.grid(True, alpha=0.25)
add_emg_class_legend(ax)  # ✅ legend box like plot 2

# (2) Currents
if have_curr:
    ax = axs[ri]; ri += 1
    if thumb_g  is not None: ax.plot(t_grid, thumb_g,  label="Thumb mA")
    if index_g  is not None: ax.plot(t_grid, index_g,  label="Index mA")
    if middle_g is not None: ax.plot(t_grid, middle_g, label="Middle mA")
    if ring_g   is not None: ax.plot(t_grid, ring_g,   label="Ring mA")
    ax.set_ylabel("Current (mA)")
    ax.legend(loc="upper right", frameon=True)
    ax.grid(True, alpha=0.25)

# (3) Forces
if have_force:
    ax = axs[ri]; ri += 1
    if thumbF_g  is not None: ax.plot(t_grid, thumbF_g,  label="Thumb N")
    if indexF_g  is not None: ax.plot(t_grid, indexF_g,  label="Index N")
    if middleF_g is not None: ax.plot(t_grid, middleF_g, label="Middle N")
    if ringF_g   is not None: ax.plot(t_grid, ringF_g,   label="Ring N")
    ax.set_ylabel("Force (N)")
    ax.legend(loc="upper right", frameon=True)
    ax.grid(True, alpha=0.25)

# (4) Distance
if have_dist:
    ax = axs[ri]; ri += 1
    ax.plot(t_grid, dist_g)
    ax.set_ylabel("Dist (mm)")
    ax.grid(True, alpha=0.25)

# dotted lines across all plots
for ax in axs:
    for tt in change_t:
        ax.axvline(tt, linestyle=":", linewidth=1.0, alpha=0.65)

axs[-1].set_xlabel("Time (s)  [Prediction timeline]")

# ✅ Updated title
fig.suptitle(
    f"Real-Time Experiment ",
    y=0.98
)

plt.tight_layout()
plt.show()
