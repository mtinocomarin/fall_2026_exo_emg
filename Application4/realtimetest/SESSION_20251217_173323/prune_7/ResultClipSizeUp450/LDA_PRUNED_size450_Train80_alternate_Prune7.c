// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.62%
// test_accuracy: 68.75%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 18:09:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.825308, 0.825305,
    1.383959, -1.383963,
    -0.273353, 0.273360,
    -0.417057, 0.417058,
    0.458267, -0.458264,
    -0.138561, 0.138548,
    -1.737136, 1.737140,
    0.624552, -0.624548,
    -0.330143, 0.330158,
    -0.675344, 0.675322,
    0.335395, -0.335390,
    1.489428, -1.489426,
};

float Cg_init[2] = {
    -0.730771, -0.730767
};

float xstd_init[12] = {
    0.001046, 0.000111, 0.022667, 0.079781, 0.002944, 0.000792, 0.052293, 0.135229, 0.005976, 0.002516, 0.164618, 0.254061
};

float xmean_init[12] = {
    0.005440, -0.007723, 0.006667, 0.123125, 0.004299, -0.007545, 0.019861, 0.125000, 0.011940, -0.005576, 0.182639, 0.546250
};

