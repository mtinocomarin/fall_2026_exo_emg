// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.69%
// test_accuracy: 74.04%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:47:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.485789, 0.485808,
    -0.418050, 0.418027,
    0.273054, -0.273070,
    0.571993, -0.571985,
    0.763176, -0.762996,
    -0.886491, 0.886227,
    -0.006247, 0.006316,
    -0.061272, 0.061284,
    0.720571, -0.720593,
    -0.145578, 0.145631,
    -0.333020, 0.333002,
    0.090981, -0.091011,
};

float Cg_init[2] = {
    -0.394638, -0.394619
};

float xstd_init[12] = {
    0.003910, 0.001531, 0.110281, 0.172006, 0.001322, 0.000408, 0.023795, 0.073458, 0.000508, 0.000077, 0.015101, 0.059997
};

float xmean_init[12] = {
    0.009880, -0.006174, 0.181136, 0.594286, 0.003055, -0.007757, 0.005604, 0.047583, 0.003085, -0.007814, 0.003810, 0.062308
};

