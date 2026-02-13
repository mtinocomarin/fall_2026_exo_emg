// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 62.50%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 14:40:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.124265, 2.124318,
    1.505989, -1.506098,
    -0.139602, 0.139605,
    -0.694560, 0.694627,
    0.925932, -0.925979,
    -2.035218, 2.035258,
    0.381560, -0.381566,
    -0.614412, 0.614429,
    -0.150596, 0.150672,
    0.461683, -0.461778,
    -0.326871, 0.326905,
    0.300383, -0.300378,
};

float Cg_init[2] = {
    -0.845252, -0.845280
};

float xstd_init[12] = {
    0.000977, 0.000175, 0.022847, 0.118860, 0.003496, 0.001175, 0.093114, 0.152760, 0.001329, 0.000177, 0.032563, 0.113091
};

float xmean_init[12] = {
    0.005928, -0.007620, 0.013000, 0.193000, 0.010931, -0.006189, 0.170667, 0.574000, 0.005194, -0.007551, 0.028000, 0.250500
};

