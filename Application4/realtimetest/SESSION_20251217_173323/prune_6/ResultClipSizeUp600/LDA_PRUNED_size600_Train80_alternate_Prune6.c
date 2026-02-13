// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.66%
// test_accuracy: 70.91%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:09:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.557717, 0.557716,
    1.087944, -1.087940,
    -0.411469, 0.411469,
    -0.055693, 0.055686,
    0.433080, -0.433071,
    -0.163434, 0.163436,
    -1.139971, 1.139972,
    0.114341, -0.114352,
    -0.191758, 0.191746,
    -0.516214, 0.516236,
    0.416413, -0.416440,
    1.018144, -1.018127,
};

float Cg_init[2] = {
    -0.527308, -0.527309
};

float xstd_init[12] = {
    0.001079, 0.000117, 0.025570, 0.089452, 0.002915, 0.000915, 0.057606, 0.145727, 0.005847, 0.002429, 0.156831, 0.249981
};

float xmean_init[12] = {
    0.005520, -0.007718, 0.008485, 0.129371, 0.004356, -0.007492, 0.023496, 0.130909, 0.011987, -0.005620, 0.183777, 0.557762
};

