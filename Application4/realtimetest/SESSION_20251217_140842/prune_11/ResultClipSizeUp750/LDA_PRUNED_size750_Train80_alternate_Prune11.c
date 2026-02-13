// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.29%
// test_accuracy: 66.07%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:42:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.325144, 3.325190,
    1.484126, -1.484170,
    0.796403, -0.796400,
    -1.237963, 1.237970,
    -0.300221, 0.300233,
    -0.219936, 0.219897,
    -0.782894, 0.782924,
    0.787050, -0.787065,
    -0.262219, 0.262279,
    0.942905, -0.943001,
    -0.309288, 0.309314,
    -0.031545, 0.031573,
};

float Cg_init[2] = {
    -1.208100, -1.208120
};

float xstd_init[12] = {
    0.001351, 0.000222, 0.033314, 0.145560, 0.004087, 0.001188, 0.085940, 0.178051, 0.000919, 0.000149, 0.031951, 0.120819
};

float xmean_init[12] = {
    0.006147, -0.007586, 0.016571, 0.214857, 0.010363, -0.006353, 0.152762, 0.556857, 0.005203, -0.007546, 0.028190, 0.263143
};

