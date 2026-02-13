// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.82%
// test_accuracy: 72.16%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:46:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.565322, 0.565330,
    -0.269394, 0.269445,
    0.308197, -0.308238,
    0.637694, -0.637687,
    0.680696, -0.680741,
    -0.818078, 0.818127,
    0.025354, -0.025358,
    -0.022295, 0.022295,
    -0.426929, 0.427120,
    0.331429, -0.331874,
    -0.329070, 0.329235,
    0.167488, -0.167322,
};

float Cg_init[2] = {
    -0.255481, -0.255513
};

float xstd_init[12] = {
    0.003974, 0.001533, 0.110343, 0.170349, 0.001446, 0.000417, 0.024343, 0.074000, 0.001641, 0.000089, 0.015693, 0.064213
};

float xmean_init[12] = {
    0.009975, -0.006164, 0.178384, 0.592546, 0.003107, -0.007754, 0.005576, 0.047394, 0.003220, -0.007810, 0.004121, 0.065091
};

