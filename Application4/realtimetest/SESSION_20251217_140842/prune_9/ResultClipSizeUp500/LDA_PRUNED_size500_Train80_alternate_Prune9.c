// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.44%
// test_accuracy: 62.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:41:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.009773, 4.009737,
    1.087335, -1.087212,
    0.485571, -0.485605,
    0.036150, -0.036208,
    0.388707, -0.388747,
    -1.373960, 1.374012,
    0.201567, -0.201559,
    0.228288, -0.228286,
    0.369440, -0.369467,
    -0.411610, 0.411634,
    0.587741, -0.587738,
    0.390466, -0.390474,
};

float Cg_init[2] = {
    -1.274328, -1.274332
};

float xstd_init[12] = {
    0.001117, 0.000207, 0.031017, 0.129188, 0.004036, 0.001158, 0.079322, 0.159132, 0.000912, 0.000143, 0.032604, 0.111509
};

float xmean_init[12] = {
    0.006067, -0.007601, 0.014815, 0.201270, 0.010410, -0.006338, 0.142222, 0.549524, 0.005135, -0.007563, 0.029206, 0.247619
};

