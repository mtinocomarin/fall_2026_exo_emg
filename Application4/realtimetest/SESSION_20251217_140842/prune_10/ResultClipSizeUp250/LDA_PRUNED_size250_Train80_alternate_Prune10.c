// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 56.25%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 14:42:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.363089, 3.363066,
    3.259923, -3.259900,
    -0.856649, 0.856659,
    -1.486294, 1.486268,
    1.637236, -1.637197,
    -3.912671, 3.912654,
    1.546294, -1.546302,
    -1.365352, 1.365337,
    -1.320334, 1.320232,
    0.828922, -0.828766,
    -0.728395, 0.728356,
    1.675129, -1.675159,
};

float Cg_init[2] = {
    -1.822923, -1.822908
};

float xstd_init[12] = {
    0.001061, 0.000199, 0.026328, 0.129242, 0.003869, 0.001336, 0.096639, 0.156414, 0.001577, 0.000181, 0.037169, 0.113859
};

float xmean_init[12] = {
    0.006047, -0.007592, 0.015000, 0.186667, 0.011484, -0.005958, 0.183333, 0.573333, 0.005206, -0.007569, 0.031667, 0.242500
};

