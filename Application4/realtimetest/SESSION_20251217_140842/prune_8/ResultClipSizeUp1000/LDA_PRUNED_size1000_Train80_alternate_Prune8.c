// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.11%
// test_accuracy: 73.68%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:41:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.776079, 2.776180,
    1.278093, -1.278342,
    0.444679, -0.444602,
    -0.486466, 0.486558,
    -0.148011, 0.148029,
    -0.836236, 0.836192,
    -0.073502, 0.073515,
    0.825040, -0.825052,
    0.621489, -0.621425,
    -0.133855, 0.133768,
    0.056243, -0.056239,
    -0.005149, 0.005183,
};

float Cg_init[2] = {
    -0.866506, -0.866522
};

float xstd_init[12] = {
    0.001118, 0.000200, 0.033262, 0.133645, 0.003696, 0.001080, 0.089182, 0.173979, 0.000859, 0.000165, 0.033805, 0.118196
};

float xmean_init[12] = {
    0.006006, -0.007614, 0.015789, 0.202895, 0.009801, -0.006478, 0.141579, 0.536842, 0.005119, -0.007543, 0.030439, 0.263553
};

