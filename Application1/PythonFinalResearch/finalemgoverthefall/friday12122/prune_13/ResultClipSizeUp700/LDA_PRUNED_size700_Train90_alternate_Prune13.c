// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.29%
// test_accuracy: 78.85%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:09:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.792952, 0.792883,
    -0.110453, 0.110505,
    0.639407, -0.639429,
    0.699418, -0.699387,
    1.059678, -1.059664,
    -1.059861, 1.059833,
    -0.282308, 0.282338,
    -0.049780, 0.049774,
    0.841351, -0.841545,
    -0.173423, 0.173943,
    -0.380895, 0.380712,
    0.034439, -0.034628,
};

float Cg_init[2] = {
    -0.610841, -0.610857
};

float xstd_init[12] = {
    0.003142, 0.001082, 0.101315, 0.167094, 0.001329, 0.000414, 0.021099, 0.071835, 0.000526, 0.000079, 0.016210, 0.062848
};

float xmean_init[12] = {
    0.009645, -0.006315, 0.173378, 0.589498, 0.003115, -0.007744, 0.005797, 0.048896, 0.003102, -0.007814, 0.004281, 0.063144
};

