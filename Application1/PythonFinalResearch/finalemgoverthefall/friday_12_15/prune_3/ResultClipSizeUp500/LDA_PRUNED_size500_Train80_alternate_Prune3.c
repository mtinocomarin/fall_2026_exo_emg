// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.46%
// test_accuracy: 78.47%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-12 12:40:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.883603, 0.883607,
    0.146300, -0.146295,
    0.261784, -0.261795,
    0.737704, -0.737707,
    -0.251050, 0.251254,
    0.071293, -0.071491,
    -0.104091, 0.104079,
    -0.056072, 0.056073,
    0.221771, -0.221727,
    -0.017905, 0.017822,
    -0.393016, 0.393050,
    -0.140905, 0.140902,
};

float Cg_init[2] = {
    -0.262715, -0.262723
};

float xstd_init[12] = {
    0.004798, 0.002249, 0.151481, 0.204960, 0.001187, 0.000211, 0.030020, 0.089613, 0.000676, 0.000165, 0.029380, 0.105192
};

float xmean_init[12] = {
    0.010820, -0.005492, 0.250320, 0.690192, 0.003450, -0.007752, 0.010421, 0.079464, 0.003546, -0.007730, 0.013640, 0.122376
};

