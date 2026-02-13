// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.50%
// test_accuracy: 53.12%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:42:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.555547, 6.555648,
    2.954352, -2.954446,
    -0.259877, 0.259887,
    0.511018, -0.511014,
    2.523788, -2.523813,
    -2.305214, 2.305197,
    -0.241716, 0.241728,
    0.308459, -0.308463,
    -2.014575, 2.014702,
    1.256098, -1.256227,
    0.334896, -0.334881,
    -0.500437, 0.500470,
};

float Cg_init[2] = {
    -1.888956, -1.888993
};

float xstd_init[12] = {
    0.001193, 0.000214, 0.029379, 0.136650, 0.004559, 0.001442, 0.092512, 0.162711, 0.001471, 0.000176, 0.032968, 0.120585
};

float xmean_init[12] = {
    0.006213, -0.007563, 0.017667, 0.220500, 0.011105, -0.006110, 0.168000, 0.544000, 0.005261, -0.007545, 0.036667, 0.261000
};

