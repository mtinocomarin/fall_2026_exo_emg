// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.83%
// test_accuracy: 65.79%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:09:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.365446, 0.365390,
    0.316421, -0.316321,
    -0.027039, 0.027016,
    0.078906, -0.078940,
    0.390175, -0.390260,
    -0.444173, 0.444261,
    -1.007712, 1.007711,
    0.187203, -0.187215,
    0.752636, -0.752609,
    -0.952457, 0.952448,
    0.499199, -0.499222,
    0.572682, -0.572672,
};

float Cg_init[2] = {
    -0.475594, -0.475590
};

float xstd_init[12] = {
    0.001073, 0.000139, 0.021155, 0.086683, 0.003078, 0.000964, 0.058530, 0.149437, 0.005488, 0.002187, 0.153133, 0.244020
};

float xmean_init[12] = {
    0.005562, -0.007707, 0.007072, 0.132308, 0.004517, -0.007438, 0.024993, 0.138543, 0.012131, -0.005665, 0.183536, 0.556680
};

