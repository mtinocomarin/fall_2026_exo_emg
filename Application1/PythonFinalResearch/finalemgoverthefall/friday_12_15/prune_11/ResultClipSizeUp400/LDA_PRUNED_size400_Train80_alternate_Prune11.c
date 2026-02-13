// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.76%
// test_accuracy: 77.68%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-12 12:45:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.359483, 1.359485,
    0.375568, -0.375559,
    0.263533, -0.263550,
    1.380893, -1.380882,
    -0.535642, 0.535702,
    0.086891, -0.086970,
    -0.000254, 0.000258,
    -0.039268, 0.039280,
    0.044974, -0.044995,
    0.117546, -0.117495,
    -0.629878, 0.629866,
    0.007249, -0.007277,
};

float Cg_init[2] = {
    -0.561257, -0.561260
};

float xstd_init[12] = {
    0.004560, 0.001983, 0.151335, 0.208659, 0.001341, 0.000256, 0.030177, 0.097294, 0.000658, 0.000155, 0.027316, 0.097329
};

float xmean_init[12] = {
    0.010917, -0.005528, 0.250613, 0.693197, 0.003581, -0.007724, 0.012517, 0.086395, 0.003556, -0.007730, 0.012971, 0.118776
};

