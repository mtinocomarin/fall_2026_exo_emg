// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.27%
// test_accuracy: 69.79%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:41:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.697093, 2.697053,
    0.883862, -0.883748,
    0.172001, -0.172005,
    0.088184, -0.088257,
    -0.080459, 0.080501,
    -0.448439, 0.448361,
    -0.447473, 0.447494,
    0.328716, -0.328717,
    -0.011579, 0.011627,
    0.418324, -0.418430,
    0.032209, -0.032183,
    -0.139001, 0.139041,
};

float Cg_init[2] = {
    -0.915624, -0.915628
};

float xstd_init[12] = {
    0.001110, 0.000183, 0.029369, 0.124900, 0.003893, 0.001189, 0.083223, 0.157270, 0.001079, 0.000167, 0.032084, 0.116295
};

float xmean_init[12] = {
    0.006005, -0.007612, 0.014444, 0.195208, 0.010428, -0.006338, 0.149167, 0.566042, 0.005172, -0.007550, 0.030278, 0.263542
};

