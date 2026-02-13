import re
import shutil
from pathlib import Path


def collect_trials_and_videos(root_folder):
    """
    Scan a folder (e.g. 'finalemg') for subfolders named set1, set2, ...
    
    IGNORE set1.
    Start numbering trials from set2 as trial_1.txt, video_1.avi.

    Expected structure:
        setX/
          act1/
            trial_1.txt
            video_1.avi

    Output:
        set1final/
          trial_1.txt
          video_1.avi
          trial_2.txt
          video_2.avi
          ...
    """
    root = Path(root_folder)

    if not root.is_dir():
        raise ValueError(f"{root} is not a directory")

    # Output folder
    out_dir = root / "set1final"
    out_dir.mkdir(exist_ok=True)

    # Find folders named set<number>
    set_dirs = [
        p for p in root.iterdir()
        if p.is_dir() and re.fullmatch(r"set\d+", p.name)
    ]

    # Sort numerically: set1, set2, set3, ...
    set_dirs.sort(key=lambda p: int(re.search(r"\d+", p.name).group()))

    trial_index = 1

    for set_dir in set_dirs:
        set_num = int(re.search(r"\d+", set_dir.name).group())

        # 🔴 SKIP set1
        if set_num == 1:
            print("[INFO] Skipping set1")
            continue

        act_dir = set_dir / "act1"
        if not act_dir.is_dir():
            print(f"[WARN] {set_dir} has no 'act1' folder, skipping.")
            continue

        # Possible trial filenames
        trial_candidates = [
            act_dir / "trial_1.txt",
            act_dir / "trial1.txt",
            act_dir / "trial.txt",
        ]

        # Possible video filenames
        video_candidates = [
            act_dir / "video_1.avi",
            act_dir / "video1.avi",
            act_dir / "video.avi",
        ]

        trial_src = next((p for p in trial_candidates if p.exists()), None)
        video_src = next((p for p in video_candidates if p.exists()), None)

        if trial_src is None:
            print(f"[WARN] No trial file found in {act_dir}, skipping.")
            continue
        if video_src is None:
            print(f"[WARN] No video file found in {act_dir}, skipping.")
            continue

        # Destination filenames (renumbered)
        trial_dst = out_dir / f"trial_{trial_index}.txt"
        video_dst = out_dir / f"video_{trial_index}.avi"

        print(f"[INFO] {set_dir.name} -> {trial_dst.name}, {video_dst.name}")

        shutil.copy2(trial_src, trial_dst)
        shutil.copy2(video_src, video_dst)

        trial_index += 1


if __name__ == "__main__":
    collect_trials_and_videos(
        r"C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg"
    )
