// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.33%
// test_accuracy: 64.58%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:14:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.997878, 0.997890,
    0.051577, -0.051558,
    0.802613, -0.802611,
    0.465648, -0.465661,
    -0.030948, 0.030670,
    -0.226011, 0.226267,
    -0.072139, 0.072173,
    0.169829, -0.169833,
    -0.151321, 0.151200,
    -0.258655, 0.258848,
    -0.169314, 0.169258,
    0.538943, -0.538960,
};

float Cg_init[2] = {
    -0.398835, -0.398842
};

float xstd_init[12] = {
    0.004758, 0.002141, 0.352269, 0.122742, 0.001412, 0.000253, 0.063558, 0.137911, 0.000675, 0.000166, 0.051858, 0.136808
};

float xmean_init[12] = {
    0.010958, -0.005526, 0.461778, 1.036267, 0.003565, -0.007730, 0.019333, 0.625999, 0.003542, -0.007732, 0.014444, 0.706266
};

