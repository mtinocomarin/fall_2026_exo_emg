// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.22%
// test_accuracy: 72.31%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_24.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt']}
// generated: 2025-12-17 18:09:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.585867, 0.585810,
    0.384826, -0.384693,
    0.022688, -0.022711,
    0.267468, -0.267513,
    0.563159, -0.563190,
    -0.577722, 0.577707,
    -0.828648, 0.828677,
    0.149623, -0.149634,
    0.090363, -0.090348,
    -0.613299, 0.613320,
    0.456538, -0.456580,
    0.851657, -0.851633,
};

float Cg_init[2] = {
    -0.516481, -0.516470
};

float xstd_init[12] = {
    0.001154, 0.000190, 0.026478, 0.096148, 0.003112, 0.000976, 0.055622, 0.147566, 0.005890, 0.002372, 0.159209, 0.258172
};

float xmean_init[12] = {
    0.005511, -0.007698, 0.009829, 0.134872, 0.004487, -0.007451, 0.022991, 0.133077, 0.011919, -0.005660, 0.183846, 0.547307
};

