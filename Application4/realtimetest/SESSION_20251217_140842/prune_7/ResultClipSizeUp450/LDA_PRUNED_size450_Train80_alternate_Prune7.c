// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.14%
// test_accuracy: 64.06%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:41:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.728991, 2.729135,
    1.373367, -1.373657,
    -0.098773, 0.098842,
    -0.218965, 0.219076,
    1.171906, -1.171982,
    -1.829765, 1.829840,
    -0.240458, 0.240454,
    -0.031087, 0.031080,
    0.089801, -0.089746,
    0.292516, -0.292585,
    0.149609, -0.149578,
    -0.283887, 0.283908,
};

float Cg_init[2] = {
    -0.920239, -0.920288
};

float xstd_init[12] = {
    0.001035, 0.000179, 0.024815, 0.118938, 0.004138, 0.001280, 0.090746, 0.157142, 0.001215, 0.000183, 0.031099, 0.119249
};

float xmean_init[12] = {
    0.005929, -0.007621, 0.014259, 0.186389, 0.010846, -0.006211, 0.159630, 0.560278, 0.005110, -0.007558, 0.030185, 0.252500
};

