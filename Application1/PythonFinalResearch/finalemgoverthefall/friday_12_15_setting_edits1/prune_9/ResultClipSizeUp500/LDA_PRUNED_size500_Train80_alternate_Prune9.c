// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.13%
// test_accuracy: 73.61%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-12 13:15:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.582621, 0.582595,
    0.049770, -0.049754,
    0.672875, -0.672862,
    0.466988, -0.466989,
    -0.585950, 0.585921,
    0.090363, -0.090327,
    0.053168, -0.053170,
    0.265679, -0.265671,
    0.167261, -0.167276,
    -0.243960, 0.243965,
    -0.447872, 0.447877,
    0.191844, -0.191836,
};

float Cg_init[2] = {
    -0.375148, -0.375143
};

float xstd_init[12] = {
    0.004304, 0.001839, 0.333823, 0.123388, 0.001251, 0.000219, 0.057734, 0.136216, 0.000689, 0.000178, 0.053983, 0.147151
};

float xmean_init[12] = {
    0.010507, -0.005706, 0.450080, 1.029952, 0.003494, -0.007742, 0.015459, 0.617197, 0.003565, -0.007724, 0.019163, 0.699033
};

