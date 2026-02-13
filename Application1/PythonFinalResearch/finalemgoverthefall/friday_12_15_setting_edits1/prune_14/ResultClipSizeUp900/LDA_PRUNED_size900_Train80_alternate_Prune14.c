// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.50%
// test_accuracy: 69.85%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_26.txt', 'act2\\trial_3.txt', 'act2\\trial_10.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 13:18:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.419896, 0.419905,
    0.018602, -0.018630,
    0.756288, -0.756259,
    0.383686, -0.383683,
    -0.883725, 0.883636,
    0.381096, -0.381000,
    0.090038, -0.090040,
    0.237021, -0.237021,
    0.340571, -0.340557,
    -0.317457, 0.317431,
    -0.420238, 0.420245,
    0.460340, -0.460340,
};

float Cg_init[2] = {
    -0.413461, -0.413450
};

float xstd_init[12] = {
    0.003781, 0.001594, 0.331539, 0.124029, 0.001101, 0.000200, 0.051227, 0.129228, 0.000616, 0.000141, 0.045629, 0.135708
};

float xmean_init[12] = {
    0.009993, -0.005905, 0.427885, 1.034510, 0.003413, -0.007758, 0.012418, 0.616863, 0.003460, -0.007748, 0.011983, 0.692745
};

