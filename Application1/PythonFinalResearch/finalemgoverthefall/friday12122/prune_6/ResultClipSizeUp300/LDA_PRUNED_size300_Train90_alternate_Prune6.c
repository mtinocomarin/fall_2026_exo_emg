// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.00%
// test_accuracy: 80.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 16:05:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.883050, 0.883075,
    -0.176874, 0.176908,
    0.670012, -0.670032,
    0.697301, -0.697309,
    1.193055, -1.192979,
    -1.798774, 1.798658,
    0.287609, -0.287595,
    0.188212, -0.188186,
    -0.230794, 0.230841,
    0.433201, -0.433466,
    -0.518989, 0.519082,
    0.261028, -0.260908,
};

float Cg_init[2] = {
    -0.450231, -0.450240
};

float xstd_init[12] = {
    0.003672, 0.001346, 0.097682, 0.165800, 0.001680, 0.000519, 0.029492, 0.083535, 0.000929, 0.000098, 0.020190, 0.068035
};

float xmean_init[12] = {
    0.009728, -0.006287, 0.165956, 0.569200, 0.003267, -0.007703, 0.006933, 0.051067, 0.003215, -0.007804, 0.005244, 0.068000
};

