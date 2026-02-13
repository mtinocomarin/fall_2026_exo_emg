// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 92.69%
// test_accuracy: 82.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:07:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.738925, 0.738939,
    -0.682097, 0.682080,
    1.114702, -1.114722,
    0.597421, -0.597404,
    1.596029, -1.596021,
    -2.501531, 2.501533,
    0.572355, -0.572358,
    -0.003526, 0.003523,
    1.261537, -1.261570,
    -0.276854, 0.276915,
    -0.696014, 0.695998,
    0.209733, -0.209753,
};

float Cg_init[2] = {
    -0.895924, -0.895935
};

float xstd_init[12] = {
    0.003864, 0.001423, 0.100198, 0.172302, 0.001766, 0.000552, 0.031517, 0.088066, 0.000575, 0.000101, 0.021308, 0.068384
};

float xmean_init[12] = {
    0.009938, -0.006210, 0.170769, 0.574308, 0.003329, -0.007682, 0.007795, 0.054154, 0.003149, -0.007804, 0.005641, 0.067846
};

