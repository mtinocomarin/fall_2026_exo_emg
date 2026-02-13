// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 88.89%
// test_accuracy: 77.78%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:08:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.972497, 0.972493,
    -0.222324, 0.222365,
    0.592496, -0.592516,
    0.969133, -0.969136,
    1.219471, -1.219304,
    -1.503569, 1.503344,
    0.043119, -0.043093,
    -0.185320, 0.185345,
    1.109587, -1.109426,
    -0.069817, 0.069407,
    -0.582951, 0.583090,
    0.022063, -0.021929,
};

float Cg_init[2] = {
    -0.780327, -0.780297
};

float xstd_init[12] = {
    0.003643, 0.001317, 0.100575, 0.169051, 0.001679, 0.000529, 0.030186, 0.085797, 0.000526, 0.000084, 0.017974, 0.064057
};

float xmean_init[12] = {
    0.009862, -0.006264, 0.167161, 0.586018, 0.003316, -0.007691, 0.008580, 0.055648, 0.003117, -0.007811, 0.005000, 0.066852
};

