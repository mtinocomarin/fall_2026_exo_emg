// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.15%
// test_accuracy: 70.83%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:43:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.586062, 5.585990,
    1.462227, -1.462129,
    0.453965, -0.453975,
    0.704057, -0.704082,
    0.603125, -0.603195,
    -1.439826, 1.439907,
    -0.170641, 0.170650,
    0.189322, -0.189323,
    -0.041716, 0.041655,
    1.054199, -1.054143,
    0.466918, -0.466908,
    -0.344898, 0.344885,
};

float Cg_init[2] = {
    -1.849213, -1.849196
};

float xstd_init[12] = {
    0.001091, 0.000148, 0.023576, 0.106743, 0.004481, 0.001296, 0.084710, 0.184698, 0.000914, 0.000144, 0.032933, 0.118479
};

float xmean_init[12] = {
    0.006191, -0.007574, 0.012346, 0.221481, 0.010535, -0.006224, 0.156049, 0.546667, 0.005364, -0.007526, 0.037037, 0.280741
};

