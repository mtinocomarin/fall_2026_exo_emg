// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 62.50%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt']}
// generated: 2025-12-17 14:43:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -21.483343, 21.483255,
    12.274532, -12.274496,
    1.345844, -1.345803,
    4.076412, -4.076415,
    1.966671, -1.966593,
    -7.164045, 7.163993,
    -2.539844, 2.539825,
    -5.461006, 5.460977,
    -26.056814, 26.056625,
    13.892433, -13.892262,
    9.535078, -9.535061,
    -0.067603, 0.067577,
};

float Cg_init[2] = {
    -11.249801, -11.249727
};

float xstd_init[12] = {
    0.001092, 0.000171, 0.023344, 0.109266, 0.005256, 0.001870, 0.110441, 0.181771, 0.002054, 0.000209, 0.037438, 0.114550
};

float xmean_init[12] = {
    0.006037, -0.007599, 0.016667, 0.185000, 0.011747, -0.005616, 0.180000, 0.571667, 0.005793, -0.007502, 0.031111, 0.285000
};

