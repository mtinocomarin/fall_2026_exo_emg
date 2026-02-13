// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.22%
// test_accuracy: 70.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_18.txt']}
// generated: 2025-12-17 18:08:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.740677, 0.740799,
    1.212168, -1.212497,
    -0.311023, 0.311148,
    -0.393690, 0.393782,
    0.760082, -0.760033,
    -0.378847, 0.378804,
    -1.288869, 1.288927,
    0.043313, -0.043320,
    0.510486, -0.510478,
    -1.224660, 1.224664,
    0.663271, -0.663266,
    0.840649, -0.840668,
};

float Cg_init[2] = {
    -0.586627, -0.586670
};

float xstd_init[12] = {
    0.001070, 0.000132, 0.027644, 0.093159, 0.002986, 0.000847, 0.060684, 0.152824, 0.005890, 0.002309, 0.158408, 0.242623
};

float xmean_init[12] = {
    0.005546, -0.007707, 0.009796, 0.136735, 0.004427, -0.007497, 0.025850, 0.133878, 0.012267, -0.005600, 0.186531, 0.544694
};

