// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.50%
// test_accuracy: 72.50%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:10:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.873664, 0.873632,
    1.163349, -1.163272,
    0.068682, -0.068703,
    -0.243827, 0.243805,
    0.630754, -0.630746,
    0.033193, -0.033223,
    -2.078115, 2.078111,
    0.700789, -0.700782,
    -0.550832, 0.550832,
    -1.026663, 1.026659,
    0.603707, -0.603697,
    2.003997, -2.004004,
};

float Cg_init[2] = {
    -0.977737, -0.977722
};

float xstd_init[12] = {
    0.001104, 0.000112, 0.022570, 0.076189, 0.002623, 0.000705, 0.044624, 0.120757, 0.006178, 0.002654, 0.173789, 0.267068
};

float xmean_init[12] = {
    0.005441, -0.007725, 0.006000, 0.118750, 0.004205, -0.007588, 0.016833, 0.123000, 0.012188, -0.005433, 0.191333, 0.544500
};

