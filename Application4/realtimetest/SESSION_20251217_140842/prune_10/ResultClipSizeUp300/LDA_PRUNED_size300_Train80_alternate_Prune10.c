// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.33%
// test_accuracy: 67.50%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 14:42:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.644976, 2.644950,
    1.054962, -1.054918,
    0.074915, -0.074915,
    -0.259200, 0.259182,
    -0.253956, 0.253934,
    -0.619262, 0.619272,
    0.379258, -0.379254,
    -0.709440, 0.709445,
    0.055301, -0.055301,
    0.339662, -0.339681,
    0.502288, -0.502283,
    0.079154, -0.079134,
};

float Cg_init[2] = {
    -1.097209, -1.097201
};

float xstd_init[12] = {
    0.000925, 0.000135, 0.020636, 0.105153, 0.003920, 0.001174, 0.084470, 0.162800, 0.000918, 0.000154, 0.030252, 0.115890
};

float xmean_init[12] = {
    0.005845, -0.007651, 0.008889, 0.170667, 0.010930, -0.006175, 0.160000, 0.573333, 0.005145, -0.007563, 0.025778, 0.250000
};

