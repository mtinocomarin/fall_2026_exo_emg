// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.00%
// test_accuracy: 66.25%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 14:42:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.338403, 6.338455,
    2.877946, -2.878022,
    -0.254965, 0.254975,
    0.180994, -0.180968,
    -0.383363, 0.383311,
    -0.633536, 0.633538,
    0.030790, -0.030752,
    0.920622, -0.920640,
    0.212125, -0.212012,
    -0.126698, 0.126513,
    0.520256, -0.520202,
    -0.001834, 0.001873,
};

float Cg_init[2] = {
    -1.864032, -1.864049
};

float xstd_init[12] = {
    0.001191, 0.000210, 0.032360, 0.143903, 0.003846, 0.001134, 0.085798, 0.173713, 0.000873, 0.000136, 0.033060, 0.110081
};

float xmean_init[12] = {
    0.006161, -0.007587, 0.016267, 0.205200, 0.010484, -0.006311, 0.147733, 0.551200, 0.005227, -0.007551, 0.034133, 0.264400
};

