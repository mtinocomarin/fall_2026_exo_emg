// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.84%
// test_accuracy: 59.38%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 13:47:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.848399, 0.848384,
    0.202551, -0.202516,
    0.224656, -0.224654,
    0.006892, -0.006917,
    -0.731378, 0.731400,
    -0.160898, 0.160874,
    0.408549, -0.408555,
    -0.031190, 0.031179,
    -1.308666, 1.308589,
    0.726634, -0.726489,
    -0.304321, 0.304276,
    0.392668, -0.392708,
};

float Cg_init[2] = {
    -0.502114, -0.502094
};

float xstd_init[12] = {
    0.001003, 0.000078, 0.011696, 0.080481, 0.002929, 0.000817, 0.083571, 0.171201, 0.000907, 0.000128, 0.017874, 0.074206
};

float xmean_init[12] = {
    0.006477, -0.007685, 0.004444, 0.140526, 0.008732, -0.006835, 0.103860, 0.453158, 0.004341, -0.007717, 0.008655, 0.130176
};

