// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 76.25%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:14:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.990652, 0.990655,
    0.034192, -0.034184,
    0.919711, -0.919708,
    0.595574, -0.595574,
    -0.698609, 0.698638,
    0.267672, -0.267713,
    0.002843, -0.002836,
    0.298252, -0.298243,
    -0.397351, 0.397209,
    0.136378, -0.136177,
    -0.382267, 0.382198,
    0.389560, -0.389559,
};

float Cg_init[2] = {
    -0.509819, -0.509812
};

float xstd_init[12] = {
    0.004688, 0.002126, 0.333716, 0.119557, 0.001509, 0.000274, 0.070437, 0.136850, 0.000688, 0.000157, 0.048377, 0.148418
};

float xmean_init[12] = {
    0.010993, -0.005541, 0.458889, 1.036500, 0.003604, -0.007721, 0.020278, 0.618167, 0.003549, -0.007736, 0.015000, 0.691999
};

