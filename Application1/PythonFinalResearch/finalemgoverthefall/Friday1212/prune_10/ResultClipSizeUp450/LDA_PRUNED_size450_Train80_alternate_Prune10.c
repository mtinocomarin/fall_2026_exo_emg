// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.65%
// test_accuracy: 74.22%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 15:51:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.158114, 1.158135,
    -0.069320, 0.069307,
    0.523550, -0.523584,
    1.127385, -1.127363,
    1.098606, -1.098687,
    -1.182358, 1.182484,
    -0.019704, 0.019679,
    -0.079705, 0.079685,
    -0.622320, 0.622298,
    0.546402, -0.546282,
    -0.573588, 0.573547,
    0.213033, -0.213093,
};

float Cg_init[2] = {
    -0.537589, -0.537595
};

float xstd_init[12] = {
    0.003806, 0.001410, 0.103678, 0.172170, 0.001691, 0.000519, 0.030847, 0.085900, 0.001619, 0.000093, 0.020051, 0.065075
};

float xmean_init[12] = {
    0.009848, -0.006244, 0.174091, 0.582273, 0.003283, -0.007717, 0.007955, 0.052841, 0.003303, -0.007803, 0.005606, 0.069773
};

