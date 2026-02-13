// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.27%
// test_accuracy: 69.32%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:42:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.309211, 3.309145,
    0.749651, -0.749505,
    0.353019, -0.353031,
    0.287307, -0.287377,
    -0.468237, 0.468185,
    -0.721745, 0.721778,
    -0.145902, 0.145900,
    0.362339, -0.362305,
    0.460235, -0.460222,
    0.194237, -0.194272,
    0.222077, -0.222057,
    -0.274011, 0.274014,
};

float Cg_init[2] = {
    -1.243652, -1.243651
};

float xstd_init[12] = {
    0.001006, 0.000142, 0.020301, 0.108038, 0.004143, 0.001188, 0.081582, 0.162819, 0.000947, 0.000144, 0.030105, 0.116019
};

float xmean_init[12] = {
    0.006013, -0.007638, 0.009455, 0.177818, 0.010619, -0.006285, 0.149576, 0.560000, 0.005031, -0.007584, 0.025939, 0.239636
};

