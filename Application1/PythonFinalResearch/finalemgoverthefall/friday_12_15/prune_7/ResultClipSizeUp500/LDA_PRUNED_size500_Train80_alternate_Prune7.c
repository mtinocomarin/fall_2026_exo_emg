// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.89%
// test_accuracy: 77.08%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 12:43:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.932013, 0.931997,
    0.258453, -0.258418,
    0.373423, -0.373447,
    0.910925, -0.910926,
    -0.474134, 0.474058,
    0.140816, -0.140725,
    -0.009524, 0.009532,
    -0.151035, 0.151014,
    0.326296, -0.326273,
    0.070976, -0.070994,
    -0.682853, 0.682861,
    -0.235358, 0.235349,
};

float Cg_init[2] = {
    -0.423582, -0.423586
};

float xstd_init[12] = {
    0.004337, 0.001865, 0.146147, 0.201247, 0.001255, 0.000225, 0.031778, 0.092612, 0.000688, 0.000174, 0.029846, 0.106898
};

float xmean_init[12] = {
    0.010524, -0.005690, 0.241660, 0.681423, 0.003481, -0.007745, 0.011200, 0.081956, 0.003545, -0.007728, 0.013570, 0.120978
};

