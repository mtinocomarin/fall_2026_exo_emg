// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.21%
// test_accuracy: 63.89%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 14:41:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.171020, 3.171006,
    0.997354, -0.997317,
    0.347141, -0.347142,
    0.063200, -0.063223,
    0.148793, -0.148832,
    -0.815927, 0.815949,
    0.039003, -0.038992,
    0.080139, -0.080133,
    -0.019264, 0.019295,
    -0.086421, 0.086334,
    0.493818, -0.493803,
    0.081993, -0.081958,
};

float Cg_init[2] = {
    -1.001880, -1.001882
};

float xstd_init[12] = {
    0.001044, 0.000191, 0.029243, 0.119536, 0.004011, 0.001247, 0.083498, 0.150955, 0.001197, 0.000182, 0.033775, 0.117992
};

float xmean_init[12] = {
    0.005975, -0.007614, 0.015309, 0.193580, 0.010533, -0.006298, 0.149630, 0.559753, 0.005129, -0.007552, 0.030123, 0.256049
};

