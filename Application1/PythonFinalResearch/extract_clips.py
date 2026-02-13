import cv2
import csv
import os
import logging

def extract_clips(video_path, csv_path, base_folder, output_pattern="video_{trial}.avi"):
    if not os.path.exists(video_path):
        logging.error(f"❌ Video file not found: {video_path}")
        return

    # Open temporarily to get FPS and frame size
    cap_check = cv2.VideoCapture(video_path)
    if not cap_check.isOpened():
        logging.error(f"❌ Failed to open video file: {video_path}")
        return
    fps = cap_check.get(cv2.CAP_PROP_FPS)
    width = int(cap_check.get(cv2.CAP_PROP_FRAME_WIDTH))
    height = int(cap_check.get(cv2.CAP_PROP_FRAME_HEIGHT))
    cap_check.release()

    logging.info(f"🎥 FPS detected: {fps}")

    with open(csv_path, 'r') as csvfile:
        reader = csv.DictReader(csvfile)
        for idx, row in enumerate(reader, 1):
            set_num = row["set"]
            act_num = row["act"]
            trial_num = row["trial"]
            start_time = float(row["start"])
            end_time = float(row["end"])

            start_frame = int(start_time * fps)
            end_frame = int(end_time * fps)

            out_folder = os.path.join(base_folder, f"set{set_num}", f"act{act_num}")
            os.makedirs(out_folder, exist_ok=True)

            # Flexible output naming
            out_filename = output_pattern.format(index=idx, trial=trial_num, set=set_num, act=act_num)
            out_path = os.path.join(out_folder, out_filename)

            fourcc = cv2.VideoWriter_fourcc(*'XVID')
            out_writer = cv2.VideoWriter(out_path, fourcc, fps, (width, height))

            logging.info(f"✂️ Extracting {out_filename}: frames {start_frame}-{end_frame}")

            # Re-open capture for each clip to ensure accurate seeking
            cap = cv2.VideoCapture(video_path)
            if not cap.isOpened():
                logging.error(f"❌ Failed to reopen video file: {video_path}")
                continue

            cap.set(cv2.CAP_PROP_POS_FRAMES, start_frame)
            frames_written = 0

            while cap.get(cv2.CAP_PROP_POS_FRAMES) < end_frame:
                ret, frame = cap.read()
                if not ret:
                    logging.warning(f"⚠️ Frame read failed at {cap.get(cv2.CAP_PROP_POS_FRAMES)}")
                    break
                out_writer.write(frame)
                frames_written += 1

            out_writer.release()
            cap.release()
            logging.info(f"✅ Saved {out_path} ({frames_written} frames).")

    logging.info("✅ All clips extracted successfully.")
