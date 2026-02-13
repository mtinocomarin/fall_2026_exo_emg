// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.75%
// test_accuracy: 70.14%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:13:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.656275, 0.656236,
    0.005164, -0.005144,
    0.463432, -0.463413,
    0.405393, -0.405397,
    -0.424324, 0.424415,
    0.083922, -0.084002,
    0.014351, -0.014360,
    0.221812, -0.221804,
    0.168718, -0.168701,
    -0.173315, 0.173280,
    -0.396066, 0.396082,
    0.242982, -0.242981,
};

float Cg_init[2] = {
    -0.270597, -0.270595
};

float xstd_init[12] = {
    0.004833, 0.002282, 0.351424, 0.120364, 0.001205, 0.000214, 0.054185, 0.133747, 0.000683, 0.000166, 0.050401, 0.145350
};

float xmean_init[12] = {
    0.010867, -0.005460, 0.466798, 1.033968, 0.003463, -0.007748, 0.014153, 0.621111, 0.003559, -0.007728, 0.016931, 0.701032
};

