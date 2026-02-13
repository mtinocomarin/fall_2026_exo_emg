// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.72%
// test_accuracy: 70.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-17 18:09:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.160198, 1.160151,
    1.112452, -1.112341,
    -0.205948, 0.205919,
    0.112053, -0.112085,
    3.448192, -3.448183,
    -0.055789, 0.055797,
    -1.917931, 1.917887,
    -2.815044, 2.815041,
    1.086963, -1.086936,
    -3.025844, 3.025806,
    1.502736, -1.502709,
    2.191736, -2.191756,
};

float Cg_init[2] = {
    -1.246891, -1.246880
};

float xstd_init[12] = {
    0.001090, 0.000131, 0.023103, 0.091035, 0.002376, 0.000735, 0.045773, 0.138529, 0.004376, 0.001601, 0.171345, 0.260507
};

float xmean_init[12] = {
    0.005476, -0.007723, 0.007521, 0.126667, 0.004037, -0.007559, 0.019829, 0.123077, 0.010905, -0.006169, 0.175385, 0.521026
};

