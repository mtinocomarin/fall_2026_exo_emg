// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 71.88%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:43:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.311262, 4.311262,
    1.689215, -1.689181,
    -0.652097, 0.652099,
    0.571431, -0.571454,
    -2.832570, 2.832591,
    0.780398, -0.780404,
    -0.630377, 0.630372,
    0.350685, -0.350682,
    0.979661, -0.979706,
    -0.505776, 0.505842,
    1.090428, -1.090443,
    0.793137, -0.793153,
};

float Cg_init[2] = {
    -2.455823, -2.455829
};

float xstd_init[12] = {
    0.000925, 0.000126, 0.020387, 0.108661, 0.003913, 0.001123, 0.082270, 0.181131, 0.000771, 0.000125, 0.031060, 0.095336
};

float xmean_init[12] = {
    0.005974, -0.007630, 0.011111, 0.181111, 0.010509, -0.006335, 0.145185, 0.551667, 0.005131, -0.007570, 0.029259, 0.256111
};

