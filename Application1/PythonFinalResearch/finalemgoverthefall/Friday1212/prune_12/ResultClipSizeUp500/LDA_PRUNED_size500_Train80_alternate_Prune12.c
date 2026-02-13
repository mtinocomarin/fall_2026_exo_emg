// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.28%
// test_accuracy: 74.31%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:52:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.068404, 1.068377,
    -0.024196, 0.024229,
    0.672552, -0.672589,
    0.900525, -0.900498,
    1.240920, -1.241020,
    -1.487551, 1.487694,
    -0.152790, 0.152760,
    -0.077676, 0.077660,
    0.986839, -0.986899,
    0.009777, -0.009577,
    -0.800484, 0.800410,
    0.158080, -0.158161,
};

float Cg_init[2] = {
    -0.802419, -0.802436
};

float xstd_init[12] = {
    0.003675, 0.001387, 0.104916, 0.174455, 0.001703, 0.000537, 0.031323, 0.089524, 0.000511, 0.000086, 0.019379, 0.061161
};

float xmean_init[12] = {
    0.009773, -0.006234, 0.168667, 0.587667, 0.003305, -0.007696, 0.008741, 0.057222, 0.003111, -0.007810, 0.005333, 0.066889
};

