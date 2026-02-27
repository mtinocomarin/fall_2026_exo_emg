// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt']}
// generated: 2026-02-13 17:10:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.136312, 0.136316,
    -0.046534, 0.046502,
    0.000000, 0.000000,
    2.201010, 2.201010,
    0.273107, 0.273107,
    0.263086, 0.263086,
    0.823697, 0.823697,
    1.260936, 1.260936,
    -0.610452, -0.610452,
    -0.898695, -0.898695,
    -1.335283, -1.335283,
    -0.781820, -0.781820,
};

float Cg_init[2] = {
    1.949595, -1.973084
};

float xstd_init[12] = {
    0.000224, 0.000014, 1.000000, 0.015033, 0.001788, 0.000628, 0.069508, 0.148080, 0.001783, 0.000493, 0.072959, 0.158003
};

float xmean_init[12] = {
    0.002726, -0.007911, 0.000000, 0.006667, 0.008350, -0.006666, 0.132000, 0.456667, 0.006350, -0.007071, 0.102667, 0.356667
};

