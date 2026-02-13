// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.94%
// test_accuracy: 68.75%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:09:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.921154, 0.921154,
    1.675815, -1.675838,
    -0.176558, 0.176570,
    -0.478793, 0.478798,
    0.315573, -0.315588,
    -0.052771, 0.052783,
    -1.838995, 1.838999,
    0.658073, -0.658069,
    -0.260195, 0.260215,
    -0.767004, 0.766979,
    0.427101, -0.427098,
    1.346202, -1.346197,
};

float Cg_init[2] = {
    -0.698379, -0.698378
};

float xstd_init[12] = {
    0.001112, 0.000132, 0.027930, 0.093533, 0.003041, 0.000864, 0.056435, 0.143989, 0.006003, 0.002477, 0.160284, 0.246560
};

float xmean_init[12] = {
    0.005496, -0.007714, 0.009231, 0.131154, 0.004362, -0.007511, 0.022179, 0.127692, 0.012047, -0.005590, 0.179615, 0.550769
};

