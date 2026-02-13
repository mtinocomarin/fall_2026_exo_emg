// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.86%
// test_accuracy: 67.14%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_18.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:09:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.080717, 1.080880,
    1.937718, -1.938209,
    -0.515617, 0.515794,
    -0.544949, 0.545077,
    0.881983, -0.881930,
    -0.469797, 0.469751,
    -1.677643, 1.677772,
    0.336811, -0.336834,
    0.612448, -0.612430,
    -1.727404, 1.727411,
    1.019157, -1.019136,
    1.133259, -1.133307,
};

float Cg_init[2] = {
    -0.878491, -0.878562
};

float xstd_init[12] = {
    0.001135, 0.000141, 0.030467, 0.096616, 0.002896, 0.000839, 0.056283, 0.146809, 0.006201, 0.002432, 0.170194, 0.259400
};

float xmean_init[12] = {
    0.005492, -0.007709, 0.011429, 0.135584, 0.004398, -0.007516, 0.022684, 0.131169, 0.012316, -0.005524, 0.188571, 0.540520
};

