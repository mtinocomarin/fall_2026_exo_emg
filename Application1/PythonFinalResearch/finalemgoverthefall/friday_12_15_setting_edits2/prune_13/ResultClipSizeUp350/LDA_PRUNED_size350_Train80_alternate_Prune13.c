// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.42%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_26.txt', 'act2\\trial_28.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-17 12:42:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.160509, 2.160589,
    0.343375, -0.343394,
    0.079622, -0.079645,
    2.807616, -2.807627,
    0.220348, -0.220645,
    -0.315027, 0.315285,
    -0.234522, 0.234574,
    -0.517875, 0.517850,
    0.245545, -0.245633,
    -0.530375, 0.530586,
    -0.694109, 0.694056,
    0.298410, -0.298485,
};

float Cg_init[2] = {
    -1.060626, -1.060643
};

float xstd_init[12] = {
    0.004372, 0.001878, 0.154082, 0.205683, 0.001525, 0.000268, 0.039605, 0.098499, 0.000670, 0.000175, 0.031413, 0.108235
};

float xmean_init[12] = {
    0.011237, -0.005413, 0.263977, 0.712105, 0.003604, -0.007721, 0.014269, 0.088596, 0.003564, -0.007723, 0.013450, 0.125263
};

