// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.48%
// test_accuracy: 70.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_18.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:09:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.809718, 0.809802,
    1.719579, -1.719831,
    -0.534168, 0.534266,
    -0.492380, 0.492447,
    0.990340, -0.990317,
    -0.441881, 0.441883,
    -1.667022, 1.667065,
    0.157271, -0.157282,
    0.179019, -0.179003,
    -1.239359, 1.239350,
    0.752682, -0.752667,
    1.191435, -1.191457,
};

float Cg_init[2] = {
    -0.749325, -0.749359
};

float xstd_init[12] = {
    0.001098, 0.000136, 0.029333, 0.093676, 0.002960, 0.000841, 0.061767, 0.156050, 0.006202, 0.002434, 0.166754, 0.254172
};

float xmean_init[12] = {
    0.005470, -0.007712, 0.010476, 0.132381, 0.004475, -0.007499, 0.026349, 0.138333, 0.012483, -0.005486, 0.192381, 0.550238
};

