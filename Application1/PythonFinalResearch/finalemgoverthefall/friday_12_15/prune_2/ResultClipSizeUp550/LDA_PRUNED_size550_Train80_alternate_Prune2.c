// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.50%
// test_accuracy: 72.50%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-12 12:39:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.762649, 0.762688,
    0.073585, -0.073647,
    0.155937, -0.155964,
    0.686288, -0.686278,
    -0.416825, 0.417100,
    0.172026, -0.172325,
    -0.026929, 0.026935,
    -0.038153, 0.038176,
    0.199814, -0.199633,
    -0.013776, 0.013426,
    -0.418931, 0.419031,
    -0.031174, 0.031254,
};

float Cg_init[2] = {
    -0.226594, -0.226600
};

float xstd_init[12] = {
    0.004777, 0.002221, 0.150250, 0.203508, 0.001151, 0.000202, 0.029581, 0.086513, 0.000670, 0.000163, 0.029748, 0.103168
};

float xmean_init[12] = {
    0.010576, -0.005590, 0.243112, 0.681733, 0.003420, -0.007756, 0.009733, 0.079867, 0.003522, -0.007735, 0.012489, 0.115600
};

