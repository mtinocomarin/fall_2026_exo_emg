// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.19%
// test_accuracy: 71.15%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:47:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.581183, 0.581178,
    -0.263609, 0.263607,
    0.329689, -0.329709,
    0.593785, -0.593771,
    0.654097, -0.653973,
    -0.746552, 0.746392,
    0.018338, -0.018296,
    -0.046667, 0.046667,
    -0.419979, 0.419887,
    0.365582, -0.365440,
    -0.311848, 0.311805,
    0.138049, -0.138122,
};

float Cg_init[2] = {
    -0.245641, -0.245627
};

float xstd_init[12] = {
    0.003868, 0.001513, 0.109318, 0.170589, 0.001397, 0.000401, 0.023403, 0.073211, 0.001586, 0.000087, 0.014946, 0.065656
};

float xmean_init[12] = {
    0.009872, -0.006182, 0.179488, 0.592785, 0.003085, -0.007760, 0.005411, 0.047639, 0.003222, -0.007810, 0.003820, 0.064563
};

