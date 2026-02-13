// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.61%
// test_accuracy: 69.44%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:42:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.279974, 5.279840,
    1.583968, -1.583808,
    0.429862, -0.429875,
    0.478067, -0.478117,
    0.202735, -0.202752,
    -1.472538, 1.472595,
    0.427140, -0.427138,
    0.147417, -0.147420,
    -0.527006, 0.526865,
    1.180155, -1.179990,
    0.584494, -0.584492,
    -0.438043, 0.437995,
};

float Cg_init[2] = {
    -1.837808, -1.837757
};

float xstd_init[12] = {
    0.001023, 0.000147, 0.022350, 0.112269, 0.004509, 0.001284, 0.079767, 0.165582, 0.000963, 0.000144, 0.031803, 0.118197
};

float xmean_init[12] = {
    0.006070, -0.007609, 0.012222, 0.193889, 0.010899, -0.006164, 0.154815, 0.552778, 0.005176, -0.007557, 0.032963, 0.258889
};

