// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.50%
// test_accuracy: 70.77%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:09:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.499252, 0.499168,
    0.391455, -0.391254,
    0.014515, -0.014561,
    0.245811, -0.245875,
    0.546946, -0.547026,
    -0.624451, 0.624465,
    -0.775199, 0.775232,
    0.123459, -0.123462,
    0.100967, -0.100930,
    -0.582178, 0.582189,
    0.341545, -0.341595,
    0.906502, -0.906475,
};

float Cg_init[2] = {
    -0.483159, -0.483143
};

float xstd_init[12] = {
    0.001125, 0.000183, 0.025571, 0.093769, 0.003056, 0.000961, 0.054739, 0.145502, 0.005755, 0.002305, 0.155560, 0.253766
};

float xmean_init[12] = {
    0.005553, -0.007699, 0.009073, 0.134438, 0.004435, -0.007458, 0.022564, 0.130414, 0.011767, -0.005733, 0.178856, 0.545680
};

