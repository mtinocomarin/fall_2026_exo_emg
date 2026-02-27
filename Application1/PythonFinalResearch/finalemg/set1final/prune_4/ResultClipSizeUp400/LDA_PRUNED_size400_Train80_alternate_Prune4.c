// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.00%
// test_accuracy: 67.86%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt']}
// generated: 2026-02-13 17:10:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.793382, 0.793383,
    -0.065072, 0.065163,
    0.000000, 0.000000,
    -0.442531, -0.442531,
    2.984606, 2.984606,
    3.198881, 3.198881,
    2.030788, 2.030788,
    2.046245, 2.046245,
    0.022359, 0.022359,
    -0.096280, -0.096280,
    -0.542210, -0.542210,
    0.581479, 0.581479,
};

float Cg_init[2] = {
    0.270308, -0.788862
};

float xstd_init[12] = {
    0.000304, 0.000014, 1.000000, 0.014824, 0.002151, 0.000721, 0.061186, 0.134684, 0.001929, 0.000492, 0.062441, 0.179320
};

float xmean_init[12] = {
    0.002665, -0.007912, 0.000000, 0.006429, 0.008238, -0.006628, 0.137619, 0.463571, 0.006304, -0.007124, 0.084286, 0.324286
};

