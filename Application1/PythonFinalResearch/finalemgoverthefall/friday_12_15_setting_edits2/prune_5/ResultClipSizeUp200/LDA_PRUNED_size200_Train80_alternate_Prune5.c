// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.27%
// test_accuracy: 85.42%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-17 12:38:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.120741, 1.120757,
    0.027030, -0.027054,
    0.759810, -0.759810,
    0.912258, -0.912232,
    0.079121, -0.078919,
    -0.107028, 0.106780,
    0.134648, -0.134650,
    -0.647555, 0.647602,
    0.194659, -0.194722,
    -0.459446, 0.459553,
    -0.437752, 0.437737,
    -0.023464, 0.023417,
};

float Cg_init[2] = {
    -0.600683, -0.600688
};

float xstd_init[12] = {
    0.004133, 0.001689, 0.133953, 0.176371, 0.001544, 0.000285, 0.037972, 0.100934, 0.000667, 0.000158, 0.024081, 0.102677
};

float xmean_init[12] = {
    0.010673, -0.005774, 0.241482, 0.701975, 0.003624, -0.007718, 0.012840, 0.086173, 0.003541, -0.007735, 0.011029, 0.121235
};

