// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.37%
// test_accuracy: 67.11%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_19.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 14:43:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.954439, 5.954341,
    5.014595, -5.014461,
    -0.417387, 0.417372,
    -3.168864, 3.168809,
    -1.877634, 1.877611,
    0.607047, -0.607042,
    -0.276881, 0.276874,
    1.810972, -1.810941,
    -0.114711, 0.114691,
    0.911245, -0.911208,
    0.271035, -0.271039,
    -1.115806, 1.115788,
};

float Cg_init[2] = {
    -2.062017, -2.061979
};

float xstd_init[12] = {
    0.001382, 0.000188, 0.023641, 0.140458, 0.003994, 0.001180, 0.089107, 0.193395, 0.000883, 0.000153, 0.037427, 0.125529
};

float xmean_init[12] = {
    0.006129, -0.007621, 0.012632, 0.206842, 0.009320, -0.006560, 0.128421, 0.488947, 0.005305, -0.007513, 0.032982, 0.271579
};

