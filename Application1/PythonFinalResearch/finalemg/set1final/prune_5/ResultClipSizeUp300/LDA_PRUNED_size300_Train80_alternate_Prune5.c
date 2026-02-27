// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 63.33%
// test_accuracy: 60.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt']}
// generated: 2026-02-13 17:10:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.595070, 0.595067,
    -0.093871, 0.093978,
    0.000000, 0.000000,
    -0.417450, -0.417450,
    -0.052119, -0.052119,
    -0.292070, -0.292070,
    0.048557, 0.048557,
    1.714065, 1.714065,
    0.916958, 0.916958,
    0.329368, 0.329368,
    -0.188641, -0.188641,
    0.229654, 0.229654,
};

float Cg_init[2] = {
    -0.889558, 0.562675
};

float xstd_init[12] = {
    0.000193, 0.000013, 1.000000, 0.015162, 0.002142, 0.000735, 0.058897, 0.122810, 0.001923, 0.000478, 0.070292, 0.180650
};

float xmean_init[12] = {
    0.002686, -0.007913, 0.000000, 0.006667, 0.008555, -0.006567, 0.145778, 0.497333, 0.006443, -0.007123, 0.093333, 0.340000
};

