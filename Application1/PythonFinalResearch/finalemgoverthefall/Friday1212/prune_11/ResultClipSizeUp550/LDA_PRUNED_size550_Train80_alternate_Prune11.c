// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.90%
// test_accuracy: 73.12%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:51:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.903795, 0.903819,
    -0.173384, 0.173387,
    0.549806, -0.549843,
    1.025351, -1.025339,
    1.193851, -1.193916,
    -0.955164, 0.955275,
    -0.244825, 0.244791,
    -0.186260, 0.186247,
    -0.720241, 0.720341,
    0.328240, -0.328420,
    -0.443376, 0.443442,
    0.292824, -0.292758,
};

float Cg_init[2] = {
    -0.499046, -0.499068
};

float xstd_init[12] = {
    0.003570, 0.001206, 0.105226, 0.178929, 0.001535, 0.000435, 0.022868, 0.074351, 0.001960, 0.000098, 0.018959, 0.067623
};

float xmean_init[12] = {
    0.009762, -0.006294, 0.175556, 0.585143, 0.003199, -0.007749, 0.005651, 0.049429, 0.003318, -0.007805, 0.005397, 0.069048
};

