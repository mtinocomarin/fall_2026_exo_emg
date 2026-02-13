// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 67.31%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.004014, 2.004027,
    0.764284, -0.764321,
    0.372106, -0.372089,
    -0.304835, 0.304841,
    0.186624, -0.186572,
    -0.951120, 0.951049,
    -0.061649, 0.061655,
    0.439003, -0.439001,
    0.240852, -0.240831,
    0.089964, -0.089993,
    0.157208, -0.157203,
    -0.148445, 0.148456,
};

float Cg_init[2] = {
    -0.645960, -0.645954
};

float xstd_init[12] = {
    0.001066, 0.000183, 0.028455, 0.125671, 0.003558, 0.001021, 0.084759, 0.165272, 0.000865, 0.000156, 0.031856, 0.113577
};

float xmean_init[12] = {
    0.005913, -0.007627, 0.012821, 0.191231, 0.010274, -0.006387, 0.150154, 0.561538, 0.004950, -0.007572, 0.027692, 0.249231
};

