// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.33%
// test_accuracy: 63.33%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_22.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 18:10:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.901102, 1.901067,
    1.592025, -1.591944,
    0.555933, -0.555947,
    0.486144, -0.486156,
    3.639573, -3.639562,
    -1.228519, 1.228499,
    -2.255040, 2.255014,
    -2.144947, 2.144950,
    1.042313, -1.042300,
    -4.750061, 4.750018,
    2.165292, -2.165257,
    3.317082, -3.317091,
};

float Cg_init[2] = {
    -1.694888, -1.694876
};

float xstd_init[12] = {
    0.001058, 0.000141, 0.025653, 0.091452, 0.002521, 0.000777, 0.049432, 0.137838, 0.004159, 0.001466, 0.147741, 0.250731
};

float xmean_init[12] = {
    0.005749, -0.007705, 0.008000, 0.136000, 0.003942, -0.007570, 0.020444, 0.108000, 0.010818, -0.006263, 0.159556, 0.508667
};

