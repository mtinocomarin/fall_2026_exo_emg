// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.60%
// test_accuracy: 72.32%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:48:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.993477, 0.993479,
    -0.147346, 0.147369,
    0.747133, -0.747162,
    0.701474, -0.701469,
    1.063324, -1.063339,
    -1.516933, 1.516953,
    0.093669, -0.093678,
    0.143874, -0.143872,
    -0.500588, 0.500605,
    0.751249, -0.751277,
    -0.629111, 0.629127,
    0.143902, -0.143903,
};

float Cg_init[2] = {
    -0.452434, -0.452447
};

float xstd_init[12] = {
    0.003652, 0.001385, 0.102648, 0.171662, 0.001677, 0.000511, 0.030352, 0.085825, 0.001202, 0.000094, 0.018851, 0.066488
};

float xmean_init[12] = {
    0.009757, -0.006245, 0.170441, 0.577778, 0.003247, -0.007714, 0.007831, 0.052064, 0.003232, -0.007805, 0.004868, 0.067937
};

