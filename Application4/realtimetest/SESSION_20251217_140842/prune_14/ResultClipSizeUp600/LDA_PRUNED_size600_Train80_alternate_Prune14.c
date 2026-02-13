// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.45%
// test_accuracy: 70.45%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 14:43:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.105657, 5.105517,
    2.548701, -2.548542,
    0.928872, -0.928865,
    0.374713, -0.374730,
    -3.673134, 3.672926,
    1.011436, -1.011290,
    0.353964, -0.353975,
    0.169148, -0.169110,
    1.902267, -1.902239,
    -0.403622, 0.403636,
    0.203314, -0.203305,
    -0.434611, 0.434580,
};

float Cg_init[2] = {
    -1.433959, -1.433922
};

float xstd_init[12] = {
    0.001160, 0.000154, 0.025329, 0.107192, 0.004693, 0.001282, 0.092950, 0.189614, 0.000949, 0.000158, 0.032786, 0.139367
};

float xmean_init[12] = {
    0.006084, -0.007598, 0.011515, 0.202727, 0.009838, -0.006450, 0.143636, 0.510000, 0.005367, -0.007513, 0.040000, 0.280000
};

