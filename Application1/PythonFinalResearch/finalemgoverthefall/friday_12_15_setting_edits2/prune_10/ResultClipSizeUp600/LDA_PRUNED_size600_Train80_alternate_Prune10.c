// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_10\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.74%
// test_accuracy: 73.86%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_17.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 12:40:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.816735, 0.816714,
    0.266399, -0.266348,
    0.518506, -0.518536,
    0.843161, -0.843152,
    -0.507865, 0.507785,
    0.261629, -0.261525,
    -0.105542, 0.105536,
    -0.148597, 0.148577,
    0.391360, -0.391410,
    -0.210271, 0.210389,
    -0.582793, 0.582773,
    -0.090616, 0.090563,
};

float Cg_init[2] = {
    -0.442687, -0.442692
};

float xstd_init[12] = {
    0.004149, 0.001778, 0.146535, 0.204013, 0.001213, 0.000212, 0.031349, 0.087815, 0.000700, 0.000180, 0.029894, 0.110032
};

float xmean_init[12] = {
    0.010390, -0.005722, 0.242590, 0.682893, 0.003480, -0.007748, 0.011074, 0.082645, 0.003561, -0.007723, 0.013333, 0.124133
};

