// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 62.50%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 14:43:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -9.152329, 9.152251,
    5.297256, -5.297124,
    -2.477861, 2.477886,
    3.073536, -3.073617,
    -2.916446, 2.916513,
    -1.087345, 1.087391,
    -0.759745, 0.759739,
    -0.247095, 0.247017,
    -5.528964, 5.528564,
    1.533299, -1.532979,
    3.255342, -3.255364,
    -0.263699, 0.263702,
};

float Cg_init[2] = {
    -5.611479, -5.611418
};

float xstd_init[12] = {
    0.000945, 0.000148, 0.022487, 0.105830, 0.005072, 0.001726, 0.094416, 0.168756, 0.001707, 0.000176, 0.034097, 0.104520
};

float xmean_init[12] = {
    0.006039, -0.007603, 0.014815, 0.180000, 0.011893, -0.005727, 0.171111, 0.558889, 0.005647, -0.007520, 0.034074, 0.281111
};

