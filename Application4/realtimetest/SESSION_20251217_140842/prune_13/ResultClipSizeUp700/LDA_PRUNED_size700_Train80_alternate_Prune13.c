// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.44%
// test_accuracy: 66.35%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:43:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.625332, 2.625129,
    1.301361, -1.301045,
    0.250123, -0.250137,
    -1.126255, 1.126144,
    -0.760945, 0.760900,
    -0.240458, 0.240450,
    -0.013751, 0.013715,
    0.365950, -0.365868,
    0.209062, -0.209087,
    0.285425, -0.285369,
    -0.057808, 0.057816,
    -0.197088, 0.197054,
};

float Cg_init[2] = {
    -1.109277, -1.109240
};

float xstd_init[12] = {
    0.001294, 0.000173, 0.020600, 0.118538, 0.004253, 0.001229, 0.089774, 0.176656, 0.000959, 0.000146, 0.029522, 0.121647
};

float xmean_init[12] = {
    0.006034, -0.007629, 0.009573, 0.188205, 0.010572, -0.006285, 0.158291, 0.550769, 0.005098, -0.007568, 0.024273, 0.246154
};

