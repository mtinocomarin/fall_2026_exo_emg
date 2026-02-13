// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.43%
// test_accuracy: 69.64%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:42:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.314193, 3.314328,
    1.281667, -1.281894,
    0.381934, -0.381891,
    -0.432057, 0.432136,
    -0.727813, 0.727825,
    -0.011685, 0.011657,
    -0.427033, 0.427047,
    0.640096, -0.640108,
    0.356119, -0.356082,
    0.299289, -0.299358,
    -0.117937, 0.117961,
    -0.039793, 0.039816,
};

float Cg_init[2] = {
    -1.105615, -1.105655
};

float xstd_init[12] = {
    0.001273, 0.000207, 0.031463, 0.140105, 0.004047, 0.001170, 0.082695, 0.168313, 0.000882, 0.000165, 0.030903, 0.120702
};

float xmean_init[12] = {
    0.006075, -0.007600, 0.015873, 0.203333, 0.010310, -0.006369, 0.146349, 0.558810, 0.005172, -0.007539, 0.028413, 0.267143
};

