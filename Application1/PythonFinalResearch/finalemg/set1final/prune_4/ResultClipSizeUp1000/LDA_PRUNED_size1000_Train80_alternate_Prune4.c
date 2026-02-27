// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 57.24%
// test_accuracy: 48.68%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt']}
// generated: 2026-02-13 17:10:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.533227, 0.533226,
    0.120870, -0.120917,
    0.000000, 0.000000,
    -0.381417, -0.381417,
    0.347624, 0.347624,
    0.297026, 0.297026,
    0.905295, 0.905295,
    1.597415, 1.597415,
    -0.706298, -0.706298,
    -0.692029, -0.692029,
    -0.717790, -0.717790,
    -0.409498, -0.409498,
};

float Cg_init[2] = {
    0.596027, -0.825516
};

float xstd_init[12] = {
    0.000303, 0.000016, 1.000000, 0.013848, 0.001908, 0.000563, 0.065211, 0.128558, 0.001828, 0.000552, 0.075626, 0.174298
};

float xmean_init[12] = {
    0.002609, -0.007910, 0.000000, 0.005526, 0.007882, -0.006784, 0.126491, 0.421579, 0.006456, -0.007012, 0.105088, 0.374474
};

