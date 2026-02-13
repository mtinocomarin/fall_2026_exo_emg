// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.29%
// test_accuracy: 67.86%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 12:43:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.580476, 0.580501,
    -0.023814, 0.023815,
    0.384226, -0.384261,
    0.607633, -0.607615,
    -0.313254, 0.313196,
    0.100034, -0.099967,
    -0.058132, 0.058124,
    -0.091861, 0.091841,
    0.279496, -0.279519,
    -0.086946, 0.087110,
    -0.562576, 0.562532,
    0.033987, -0.034086,
};

float Cg_init[2] = {
    -0.261218, -0.261221
};

float xstd_init[12] = {
    0.004255, 0.001975, 0.149938, 0.204184, 0.001081, 0.000191, 0.027685, 0.082143, 0.000654, 0.000162, 0.029864, 0.105760
};

float xmean_init[12] = {
    0.010266, -0.005715, 0.243963, 0.687429, 0.003382, -0.007763, 0.008648, 0.076229, 0.003514, -0.007735, 0.012762, 0.116458
};

