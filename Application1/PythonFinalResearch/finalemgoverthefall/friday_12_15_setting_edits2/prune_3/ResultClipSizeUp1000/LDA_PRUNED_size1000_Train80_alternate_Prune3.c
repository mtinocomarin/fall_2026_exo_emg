// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_3\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.14%
// test_accuracy: 66.78%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 12:37:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.635650, 0.635719,
    0.178867, -0.178887,
    0.367262, -0.367306,
    0.401278, -0.401264,
    -0.343748, 0.344150,
    0.208098, -0.208630,
    -0.074582, 0.074621,
    0.003127, -0.003064,
    0.219989, -0.220052,
    -0.047105, 0.047344,
    -0.397231, 0.397181,
    -0.010987, 0.010824,
};

float Cg_init[2] = {
    -0.163563, -0.163584
};

float xstd_init[12] = {
    0.003786, 0.001642, 0.147170, 0.201324, 0.000891, 0.000158, 0.022701, 0.073984, 0.000622, 0.000150, 0.028156, 0.099310
};

float xmean_init[12] = {
    0.009914, -0.005901, 0.236347, 0.677823, 0.003271, -0.007782, 0.006630, 0.068603, 0.003471, -0.007747, 0.011712, 0.108603
};

