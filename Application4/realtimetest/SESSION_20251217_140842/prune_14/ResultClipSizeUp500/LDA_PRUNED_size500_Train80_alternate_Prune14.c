// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 61.11%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 14:43:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.300033, 6.300036,
    0.974433, -0.974440,
    0.897883, -0.897882,
    0.261877, -0.261881,
    1.383586, -1.383541,
    -0.583160, 0.583103,
    -0.818593, 0.818603,
    0.048615, -0.048617,
    -2.126275, 2.126289,
    3.097687, -3.097699,
    0.060858, -0.060856,
    -0.024111, 0.024116,
};

float Cg_init[2] = {
    -2.118913, -2.118910
};

float xstd_init[12] = {
    0.001106, 0.000148, 0.025052, 0.102589, 0.004886, 0.001297, 0.095083, 0.201515, 0.001002, 0.000162, 0.034549, 0.135051
};

float xmean_init[12] = {
    0.006026, -0.007601, 0.011852, 0.191111, 0.009950, -0.006384, 0.147407, 0.525556, 0.005371, -0.007509, 0.037778, 0.281111
};

