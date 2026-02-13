// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 69.79%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:43:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.295371, 5.295431,
    3.574396, -3.574548,
    -1.135372, 1.135387,
    -0.369380, 0.369466,
    -5.044896, 5.044881,
    1.871369, -1.871341,
    -0.007365, 0.007368,
    -0.106036, 0.106046,
    0.998535, -0.998503,
    -0.467392, 0.467362,
    1.079227, -1.079221,
    0.856132, -0.856136,
};

float Cg_init[2] = {
    -2.895898, -2.895931
};

float xstd_init[12] = {
    0.001061, 0.000139, 0.020514, 0.119146, 0.004285, 0.001231, 0.078983, 0.173064, 0.000779, 0.000125, 0.029318, 0.094347
};

float xmean_init[12] = {
    0.005915, -0.007639, 0.011667, 0.170000, 0.010550, -0.006276, 0.141667, 0.542500, 0.005151, -0.007562, 0.025000, 0.255833
};

