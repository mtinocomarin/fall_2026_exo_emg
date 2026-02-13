import pandas as pd
import matplotlib.pyplot as plt

# === Load the EMG data ===
file_path = r"C:\Users\mtino\OneDrive\Desktop\PythonFinalResearch\finalemg\set1\act1\trial_1.txt"  # Replace with your actual filename
df = pd.read_csv(file_path, sep="\t")

# === Convert timestamp to time (optional) ===
df['timestamp'] = pd.to_datetime(df['timestamp'], format='%H:%M:%S.%f')

# === Compute the "middle" (baseline) value of each channel ===
baseline_ch1 = df['ch1'].median()  # or use .mean()
baseline_ch2 = df['ch2'].median()
baseline_ch3 = df['ch3'].median()

print("Estimated Baseline (Median):")
print(f"CH1: {baseline_ch1:.6f}, CH2: {baseline_ch2:.6f}, CH3: {baseline_ch3:.6f}")

# === Optional: Zero-center each signal ===
df['ch1_centered'] = df['ch1'] - baseline_ch1
df['ch2_centered'] = df['ch2'] - baseline_ch2
df['ch3_centered'] = df['ch3'] - baseline_ch3

# === Plot original vs centered ===
plt.figure(figsize=(12, 6))
plt.plot(df['ch1'], label='CH1 Raw', alpha=0.4)
plt.plot(df['ch1_centered'], label='CH1 Centered', linestyle='--')
plt.axhline(0, color='gray', linestyle=':', linewidth=1)
plt.legend()
plt.title("EMG CH1: Raw vs Zero-Centered")
plt.xlabel("Sample Index")
plt.ylabel("Amplitude")
plt.grid(True)
plt.tight_layout()
plt.show()
