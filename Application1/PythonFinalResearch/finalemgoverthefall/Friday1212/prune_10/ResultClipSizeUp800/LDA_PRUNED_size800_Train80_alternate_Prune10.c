// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.88%
// test_accuracy: 74.17%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:51:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.778479, 0.778532,
    -0.295004, 0.294977,
    0.634806, -0.634849,
    0.619619, -0.619602,
    1.191322, -1.191366,
    -1.123808, 1.123869,
    -0.268417, 0.268404,
    -0.032166, 0.032159,
    0.750296, -0.750223,
    -0.102845, 0.102700,
    -0.365686, 0.365746,
    0.069125, -0.069097,
};

float Cg_init[2] = {
    -0.568807, -0.568814
};

float xstd_init[12] = {
    0.003394, 0.001323, 0.104869, 0.170467, 0.001243, 0.000379, 0.019867, 0.069228, 0.000522, 0.000078, 0.015593, 0.060950
};

float xmean_init[12] = {
    0.009672, -0.006263, 0.177415, 0.594303, 0.003062, -0.007761, 0.005212, 0.049091, 0.003097, -0.007814, 0.003838, 0.063455
};

