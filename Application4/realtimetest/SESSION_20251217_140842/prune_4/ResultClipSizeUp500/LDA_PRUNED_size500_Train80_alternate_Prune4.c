// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.43%
// test_accuracy: 69.44%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:40:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.651554, 1.651554,
    0.391471, -0.391475,
    0.253445, -0.253436,
    0.203270, -0.203278,
    0.191323, -0.191285,
    -0.954870, 0.954796,
    -0.077296, 0.077300,
    -0.025745, 0.025759,
    0.194305, -0.194249,
    0.267528, -0.267594,
    0.134098, -0.134089,
    -0.115847, 0.115865,
};

float Cg_init[2] = {
    -0.533249, -0.533250
};

float xstd_init[12] = {
    0.000955, 0.000174, 0.026473, 0.114098, 0.003874, 0.001191, 0.087198, 0.160674, 0.001110, 0.000177, 0.033065, 0.111145
};

float xmean_init[12] = {
    0.005914, -0.007620, 0.013951, 0.191111, 0.010626, -0.006283, 0.156790, 0.571852, 0.005015, -0.007558, 0.029506, 0.246111
};

