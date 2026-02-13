// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.16%
// test_accuracy: 68.75%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-17 12:38:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.692715, 0.692775,
    0.208365, -0.208436,
    0.401709, -0.401763,
    0.563773, -0.563757,
    -0.294091, 0.293865,
    0.148144, -0.147819,
    -0.100285, 0.100279,
    -0.074041, 0.073959,
    0.241495, -0.241234,
    -0.081820, 0.081288,
    -0.453049, 0.453184,
    -0.031792, 0.031973,
};

float Cg_init[2] = {
    -0.240104, -0.240102
};

float xstd_init[12] = {
    0.003975, 0.001700, 0.148251, 0.203810, 0.001010, 0.000181, 0.025827, 0.079866, 0.000648, 0.000159, 0.028867, 0.104762
};

float xmean_init[12] = {
    0.010097, -0.005838, 0.238980, 0.680642, 0.003343, -0.007769, 0.008230, 0.073284, 0.003497, -0.007738, 0.012675, 0.115852
};

