// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.00%
// test_accuracy: 76.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 15:52:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.386910, 1.386932,
    -0.225630, 0.225670,
    1.255507, -1.255515,
    1.120474, -1.120496,
    1.971035, -1.970996,
    -2.718916, 2.718874,
    0.420995, -0.421006,
    -0.009190, 0.009208,
    -0.592976, 0.593031,
    0.683660, -0.683906,
    -0.462980, 0.463047,
    0.395506, -0.395386,
};

float Cg_init[2] = {
    -0.867107, -0.867126
};

float xstd_init[12] = {
    0.003710, 0.001361, 0.101168, 0.176621, 0.001810, 0.000564, 0.033518, 0.093003, 0.001047, 0.000091, 0.016278, 0.060836
};

float xmean_init[12] = {
    0.009856, -0.006218, 0.170800, 0.573000, 0.003364, -0.007690, 0.008133, 0.055800, 0.003294, -0.007801, 0.004933, 0.068800
};

