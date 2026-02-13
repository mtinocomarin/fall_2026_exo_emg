// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.75%
// test_accuracy: 72.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 18:10:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.151162, 0.151116,
    0.529564, -0.529436,
    -0.180598, 0.180546,
    -0.178120, 0.178085,
    1.904648, -1.904797,
    -0.407423, 0.407541,
    -1.285320, 1.285259,
    -1.472667, 1.472731,
    -0.840119, 0.840108,
    -0.384488, 0.384521,
    -0.169480, 0.169468,
    2.903651, -2.903651,
};

float Cg_init[2] = {
    -0.965923, -0.965922
};

float xstd_init[12] = {
    0.000911, 0.000093, 0.016013, 0.075223, 0.002409, 0.000494, 0.062141, 0.145061, 0.004956, 0.001751, 0.146206, 0.254315
};

float xmean_init[12] = {
    0.005272, -0.007739, 0.006333, 0.111500, 0.004221, -0.007595, 0.026333, 0.135500, 0.011398, -0.005949, 0.176667, 0.528500
};

