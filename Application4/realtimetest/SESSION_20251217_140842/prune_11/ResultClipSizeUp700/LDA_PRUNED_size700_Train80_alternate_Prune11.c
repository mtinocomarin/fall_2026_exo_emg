// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.69%
// test_accuracy: 69.23%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:42:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.106957, 3.106888,
    1.013642, -1.013452,
    0.757775, -0.757825,
    -0.690681, 0.690596,
    -0.796896, 0.796899,
    -0.032493, 0.032510,
    -0.334492, 0.334486,
    0.598927, -0.598914,
    0.191539, -0.191587,
    0.427359, -0.427308,
    -0.039591, 0.039591,
    -0.315115, 0.315107,
};

float Cg_init[2] = {
    -1.130432, -1.130429
};

float xstd_init[12] = {
    0.001350, 0.000234, 0.035405, 0.142471, 0.003941, 0.001157, 0.086635, 0.175791, 0.000934, 0.000150, 0.032612, 0.119502
};

float xmean_init[12] = {
    0.006150, -0.007594, 0.015795, 0.208923, 0.010327, -0.006363, 0.148923, 0.554461, 0.005113, -0.007564, 0.027282, 0.248308
};

