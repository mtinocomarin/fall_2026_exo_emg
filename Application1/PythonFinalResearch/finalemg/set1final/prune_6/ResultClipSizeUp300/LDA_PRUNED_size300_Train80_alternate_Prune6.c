// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 65.00%
// test_accuracy: 55.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_3.txt', 'act1\\trial_5.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_5.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt']}
// generated: 2026-02-13 17:10:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.448275, 2.448279,
    0.879240, -0.879054,
    0.000000, 0.000000,
    -0.417450, -0.417450,
    -0.434116, -0.434116,
    -0.229198, -0.229198,
    -0.304581, -0.304581,
    0.566573, 0.566573,
    1.292746, 1.292746,
    1.565098, 1.565098,
    1.697773, 1.697773,
    1.866792, 1.866792,
};

float Cg_init[2] = {
    -3.519799, 1.465338
};

float xstd_init[12] = {
    0.000371, 0.000011, 1.000000, 0.019574, 0.002360, 0.000795, 0.074677, 0.148693, 0.002269, 0.000667, 0.075226, 0.179824
};

float xmean_init[12] = {
    0.002538, -0.007911, 0.000000, 0.014000, 0.008522, -0.006499, 0.146667, 0.494000, 0.006509, -0.007027, 0.101333, 0.320000
};

