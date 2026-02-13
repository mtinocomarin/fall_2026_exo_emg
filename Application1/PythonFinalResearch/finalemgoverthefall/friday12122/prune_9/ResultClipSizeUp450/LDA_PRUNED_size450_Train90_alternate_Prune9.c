// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.26%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 16:06:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.034486, 1.034545,
    -0.041061, 0.041088,
    0.500827, -0.500860,
    0.976815, -0.976840,
    1.003770, -1.003933,
    -1.118729, 1.118894,
    -0.032317, 0.032309,
    -0.067488, 0.067497,
    -0.477945, 0.478174,
    0.460946, -0.461490,
    -0.504570, 0.504761,
    0.191997, -0.191759,
};

float Cg_init[2] = {
    -0.469941, -0.470004
};

float xstd_init[12] = {
    0.003725, 0.001373, 0.100165, 0.170708, 0.001666, 0.000512, 0.029594, 0.082874, 0.001484, 0.000089, 0.018653, 0.065329
};

float xmean_init[12] = {
    0.009803, -0.006284, 0.166420, 0.580648, 0.003263, -0.007711, 0.007716, 0.051852, 0.003261, -0.007807, 0.005309, 0.067778
};

