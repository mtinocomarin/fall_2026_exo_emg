// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 91.61%
// test_accuracy: 82.14%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-12 16:09:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.052401, 1.052419,
    -0.308299, 0.308299,
    0.759958, -0.759978,
    0.935734, -0.935721,
    1.617960, -1.617806,
    -1.969983, 1.969732,
    0.035070, -0.035023,
    -0.194240, 0.194283,
    1.105118, -1.105060,
    -0.148902, 0.148724,
    -0.628985, 0.629041,
    0.133943, -0.133878,
};

float Cg_init[2] = {
    -0.867619, -0.867590
};

float xstd_init[12] = {
    0.003726, 0.001273, 0.100062, 0.169143, 0.001731, 0.000539, 0.026973, 0.085035, 0.000556, 0.000094, 0.020012, 0.065800
};

float xmean_init[12] = {
    0.009911, -0.006239, 0.166543, 0.584844, 0.003387, -0.007672, 0.008613, 0.057019, 0.003162, -0.007804, 0.005797, 0.069938
};

