// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.58%
// test_accuracy: 78.33%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:09:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.778226, 0.778204,
    -0.103604, 0.103614,
    0.645534, -0.645563,
    0.716417, -0.716385,
    1.049685, -1.049804,
    -1.059084, 1.059233,
    -0.233935, 0.233923,
    -0.090542, 0.090523,
    0.727928, -0.728026,
    0.098069, -0.097709,
    -0.464031, 0.463892,
    -0.061543, 0.061395,
};

float Cg_init[2] = {
    -0.610409, -0.610414
};

float xstd_init[12] = {
    0.003035, 0.001053, 0.100527, 0.164523, 0.001289, 0.000401, 0.020552, 0.070741, 0.000526, 0.000075, 0.015454, 0.062279
};

float xmean_init[12] = {
    0.009535, -0.006358, 0.171879, 0.588303, 0.003108, -0.007746, 0.005737, 0.049455, 0.003100, -0.007816, 0.003838, 0.063637
};

