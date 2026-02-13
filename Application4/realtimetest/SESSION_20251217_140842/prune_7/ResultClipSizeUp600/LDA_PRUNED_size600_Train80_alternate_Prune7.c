// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.43%
// test_accuracy: 67.05%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:41:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.708480, 2.708530,
    0.877391, -0.877499,
    0.283628, -0.283594,
    -0.019213, 0.019248,
    -0.034199, 0.034181,
    -0.564115, 0.564090,
    0.040071, -0.040059,
    0.068573, -0.068572,
    -0.092889, 0.092994,
    0.014537, -0.014693,
    0.382086, -0.382062,
    0.112268, -0.112219,
};

float Cg_init[2] = {
    -0.855717, -0.855733
};

float xstd_init[12] = {
    0.001069, 0.000188, 0.030318, 0.120442, 0.003896, 0.001196, 0.087321, 0.152211, 0.001136, 0.000175, 0.033643, 0.117883
};

float xmean_init[12] = {
    0.005976, -0.007616, 0.015084, 0.192525, 0.010513, -0.006312, 0.152997, 0.572525, 0.005121, -0.007553, 0.029630, 0.257980
};

