// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.05%
// test_accuracy: 65.81%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 12:42:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.640635, 0.640663,
    0.194987, -0.194987,
    0.413003, -0.413039,
    0.480323, -0.480314,
    -0.416462, 0.416389,
    0.166648, -0.166538,
    -0.046043, 0.046039,
    0.033989, -0.034030,
    0.269225, -0.269213,
    -0.044544, 0.044589,
    -0.480188, 0.480179,
    -0.047212, 0.047165,
};

float Cg_init[2] = {
    -0.217591, -0.217597
};

float xstd_init[12] = {
    0.003861, 0.001658, 0.147940, 0.205233, 0.000960, 0.000171, 0.024577, 0.077147, 0.000636, 0.000155, 0.029430, 0.103025
};

float xmean_init[12] = {
    0.009992, -0.005876, 0.238810, 0.678998, 0.003309, -0.007774, 0.007727, 0.072419, 0.003495, -0.007740, 0.012636, 0.114598
};

