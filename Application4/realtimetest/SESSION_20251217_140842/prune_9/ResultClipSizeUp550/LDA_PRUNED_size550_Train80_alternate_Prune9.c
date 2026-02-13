// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 66.25%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.026509, 4.026573,
    1.441455, -1.441559,
    0.221505, -0.221489,
    0.164626, -0.164593,
    0.397450, -0.397455,
    -0.896318, 0.896301,
    -0.200067, 0.200082,
    0.333803, -0.333814,
    0.035317, -0.035250,
    0.296970, -0.297059,
    0.278500, -0.278481,
    -0.138177, 0.138194,
};

float Cg_init[2] = {
    -1.193098, -1.193116
};

float xstd_init[12] = {
    0.001101, 0.000191, 0.029740, 0.128951, 0.003929, 0.001139, 0.082637, 0.161580, 0.000880, 0.000140, 0.031902, 0.112792
};

float xmean_init[12] = {
    0.006056, -0.007607, 0.014095, 0.196000, 0.010427, -0.006335, 0.147619, 0.556857, 0.005127, -0.007566, 0.029905, 0.250572
};

