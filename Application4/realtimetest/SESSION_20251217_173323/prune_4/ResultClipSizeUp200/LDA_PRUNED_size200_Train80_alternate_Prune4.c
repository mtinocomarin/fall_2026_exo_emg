// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.22%
// test_accuracy: 73.33%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 18:08:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.502449, 0.502442,
    0.588740, -0.588736,
    -0.167047, 0.167042,
    -0.171483, 0.171487,
    2.762520, -2.762521,
    -0.082068, 0.082074,
    -1.326383, 1.326383,
    -2.495776, 2.495772,
    0.678475, -0.678457,
    -1.526390, 1.526359,
    0.695777, -0.695760,
    1.654878, -1.654883,
};

float Cg_init[2] = {
    -0.863844, -0.863841
};

float xstd_init[12] = {
    0.001079, 0.000124, 0.022345, 0.087696, 0.002356, 0.000704, 0.049861, 0.140016, 0.004500, 0.001627, 0.164785, 0.251287
};

float xmean_init[12] = {
    0.005519, -0.007722, 0.007704, 0.127555, 0.004094, -0.007561, 0.021926, 0.126667, 0.011077, -0.006126, 0.173333, 0.523111
};

