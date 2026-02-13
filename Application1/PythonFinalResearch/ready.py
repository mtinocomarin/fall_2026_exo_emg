import re
import shutil
from pathlib import Path


def make_setready(source_folder, dest_setready):
    """
    From a folder containing trial_*.txt and video_*.avi, create:

        dest_setready/act1
        dest_setready/act2

    and distribute (trial_i, video_i) pairs:
        i odd  -> act1
        i even -> act2
    """

    src = Path(source_folder)
    dst_root = Path(dest_setready)

    if not src.is_dir():
        raise ValueError(f"{src} is not a directory")

    # Create destination + act folders
    act1_dir = dst_root / "act1"
    act2_dir = dst_root / "act2"
    act1_dir.mkdir(parents=True, exist_ok=True)
    act2_dir.mkdir(parents=True, exist_ok=True)

    # ---- Collect trial and video files by index ----
    trial_files = {}
    video_files = {}

    # trial_XX.txt
    for p in src.glob("trial_*.txt"):
        m = re.search(r"trial_(\d+)\.txt$", p.name)
        if m:
            idx = int(m.group(1))
            trial_files[idx] = p

    # video_XX.avi
    for p in src.glob("video_*.avi"):
        m = re.search(r"video_(\d+)\.avi$", p.name)
        if m:
            idx = int(m.group(1))
            video_files[idx] = p

    # Use only indices that have BOTH trial and video
    indices = sorted(set(trial_files.keys()) & set(video_files.keys()))

    if not indices:
        print("No matching trial_*.txt and video_*.avi pairs found.")
        return

    # ---- Distribute files ----
    for idx in indices:
        trial_src = trial_files[idx]
        video_src = video_files[idx]

        # Decide action folder: odd -> act1, even -> act2
        if idx % 2 == 1:
            act_dir = act1_dir
        else:
            act_dir = act2_dir

        trial_dst = act_dir / trial_src.name   # keep original name
        video_dst = act_dir / video_src.name   # keep original name

        print(f"[INFO] idx {idx}: {trial_src.name}, {video_src.name} -> {act_dir}")

        # Copy (use shutil.move if you want them moved instead)
        shutil.copy2(trial_src, trial_dst)
        shutil.copy2(video_src, video_dst)


if __name__ == "__main__":
    # 🔧 CHANGE THESE PATHS
    set1final_folder = r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\setfinal2\ResultClip"
    setready_folder = r"C:\path\to\finalemg\setready1"

    make_setready(set1final_folder, setready_folder)
