// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.80%
// test_accuracy: 73.44%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 15:51:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.056686, 1.056696,
    -0.185266, 0.185267,
    0.475818, -0.475848,
    1.220810, -1.220793,
    1.054071, -1.054159,
    -1.201737, 1.201865,
    0.024921, -0.024945,
    -0.056820, 0.056803,
    -0.628892, 0.628885,
    0.526159, -0.526067,
    -0.597829, 0.597799,
    0.240642, -0.240691,
};

float Cg_init[2] = {
    -0.562216, -0.562225
};

float xstd_init[12] = {
    0.003826, 0.001431, 0.104534, 0.173242, 0.001723, 0.000530, 0.031486, 0.087409, 0.001652, 0.000095, 0.020486, 0.065645
};

float xmean_init[12] = {
    0.009854, -0.006229, 0.173889, 0.580476, 0.003313, -0.007712, 0.008095, 0.054524, 0.003327, -0.007801, 0.005873, 0.071072
};

