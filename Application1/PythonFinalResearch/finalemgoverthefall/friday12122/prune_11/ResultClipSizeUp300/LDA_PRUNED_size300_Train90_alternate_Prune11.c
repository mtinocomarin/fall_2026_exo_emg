// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 92.80%
// test_accuracy: 82.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 16:07:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.846946, 0.846960,
    -0.602668, 0.602655,
    1.096957, -1.096968,
    0.660202, -0.660194,
    1.615653, -1.615611,
    -2.510112, 2.510058,
    0.581361, -0.581348,
    -0.040456, 0.040459,
    1.214571, -1.214579,
    -0.289581, 0.289578,
    -0.701755, 0.701757,
    0.251815, -0.251810,
};

float Cg_init[2] = {
    -0.907298, -0.907297
};

float xstd_init[12] = {
    0.003913, 0.001444, 0.101507, 0.172183, 0.001795, 0.000562, 0.032104, 0.089295, 0.000576, 0.000103, 0.021701, 0.067605
};

float xmean_init[12] = {
    0.010003, -0.006185, 0.172054, 0.577920, 0.003356, -0.007676, 0.008107, 0.055200, 0.003154, -0.007804, 0.005867, 0.067680
};

