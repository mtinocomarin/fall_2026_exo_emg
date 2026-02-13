// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 64.06%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:41:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.345686, 2.345761,
    1.230854, -1.231015,
    -0.119564, 0.119607,
    -0.166069, 0.166128,
    1.198645, -1.198669,
    -1.809700, 1.809703,
    -0.109006, 0.109009,
    -0.121813, 0.121813,
    0.057921, -0.057858,
    0.215951, -0.216047,
    0.202745, -0.202717,
    -0.125760, 0.125792,
};

float Cg_init[2] = {
    -0.763742, -0.763769
};

float xstd_init[12] = {
    0.000992, 0.000173, 0.024269, 0.117618, 0.004019, 0.001242, 0.089480, 0.156583, 0.001164, 0.000179, 0.030383, 0.115230
};

float xmean_init[12] = {
    0.005946, -0.007614, 0.014500, 0.195250, 0.010656, -0.006264, 0.158167, 0.562250, 0.005088, -0.007553, 0.029333, 0.249750
};

