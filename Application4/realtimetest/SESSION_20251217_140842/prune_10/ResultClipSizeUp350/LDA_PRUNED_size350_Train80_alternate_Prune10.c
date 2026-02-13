// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.06%
// test_accuracy: 60.42%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 14:42:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.334610, 2.334712,
    0.786281, -0.786502,
    0.351450, -0.351453,
    -0.055777, 0.055889,
    0.826288, -0.826354,
    -1.981639, 1.981725,
    0.105124, -0.105115,
    -0.461243, 0.461244,
    -0.084298, 0.084400,
    0.265118, -0.265232,
    0.329268, -0.329241,
    -0.143410, 0.143434,
};

float Cg_init[2] = {
    -0.926214, -0.926240
};

float xstd_init[12] = {
    0.000953, 0.000143, 0.022745, 0.108384, 0.004625, 0.001485, 0.090894, 0.156675, 0.001489, 0.000172, 0.030346, 0.114904
};

float xmean_init[12] = {
    0.005906, -0.007633, 0.011481, 0.167778, 0.011651, -0.005923, 0.178889, 0.567778, 0.005282, -0.007563, 0.027407, 0.248333
};

