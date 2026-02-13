// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.27%
// test_accuracy: 70.67%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_14.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:10:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.437313, 0.437237,
    0.285328, -0.285195,
    0.028277, -0.028314,
    0.238774, -0.238804,
    0.455943, -0.456023,
    -0.599626, 0.599684,
    -1.060612, 1.060623,
    0.425726, -0.425735,
    0.289265, -0.289229,
    -0.737786, 0.737784,
    0.471150, -0.471183,
    0.888350, -0.888347,
};

float Cg_init[2] = {
    -0.564715, -0.564710
};

float xstd_init[12] = {
    0.001149, 0.000158, 0.025359, 0.088022, 0.003047, 0.000956, 0.054979, 0.146275, 0.005795, 0.002334, 0.163623, 0.259911
};

float xmean_init[12] = {
    0.005582, -0.007703, 0.009455, 0.137455, 0.004451, -0.007458, 0.022384, 0.135152, 0.012066, -0.005614, 0.190707, 0.558909
};

