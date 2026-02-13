// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 62.50%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt']}
// generated: 2025-12-17 14:43:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -37.815434, 37.815468,
    -10.456325, 10.456354,
    -8.585030, 8.585034,
    -6.881725, 6.881740,
    66.664276, -66.664307,
    -107.057632, 107.057701,
    -14.820000, 14.820036,
    -0.300729, 0.300726,
    -43.888359, 43.888500,
    146.957550, -146.957870,
    1.374670, -1.374662,
    -45.020176, 45.020271,
};

float Cg_init[2] = {
    -33.137035, -33.137131
};

float xstd_init[12] = {
    0.000843, 0.000134, 0.016510, 0.085790, 0.004725, 0.001808, 0.119058, 0.156546, 0.002389, 0.000257, 0.038605, 0.136137
};

float xmean_init[12] = {
    0.005897, -0.007618, 0.010000, 0.170000, 0.010150, -0.006077, 0.180000, 0.535000, 0.005440, -0.007541, 0.035000, 0.235000
};

