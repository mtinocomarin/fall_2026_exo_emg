// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.81%
// test_accuracy: 66.67%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:09:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.663345, 0.663487,
    1.510458, -1.510835,
    -0.607641, 0.607791,
    -0.238624, 0.238728,
    -0.065454, 0.065559,
    0.419900, -0.419998,
    -1.666735, 1.666821,
    0.504894, -0.504927,
    -0.135173, 0.135191,
    -0.763486, 0.763481,
    0.523820, -0.523821,
    1.220838, -1.220859,
};

float Cg_init[2] = {
    -0.649027, -0.649088
};

float xstd_init[12] = {
    0.001083, 0.000126, 0.027810, 0.091273, 0.003082, 0.000953, 0.061834, 0.157137, 0.006337, 0.002633, 0.165105, 0.255938
};

float xmean_init[12] = {
    0.005529, -0.007708, 0.009630, 0.137963, 0.004493, -0.007474, 0.026420, 0.139630, 0.012755, -0.005353, 0.194815, 0.564630
};

