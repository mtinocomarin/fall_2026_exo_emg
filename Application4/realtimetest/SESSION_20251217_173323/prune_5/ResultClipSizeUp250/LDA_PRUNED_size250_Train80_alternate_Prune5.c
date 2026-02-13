// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.29%
// test_accuracy: 72.50%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 18:08:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.681992, 0.682032,
    1.050321, -1.050448,
    -0.210778, 0.210803,
    -0.137570, 0.137608,
    1.170654, -1.170638,
    0.068633, -0.068596,
    -1.358943, 1.358947,
    -0.913793, 0.913766,
    -0.300062, 0.300107,
    -0.774707, 0.774685,
    0.148051, -0.148044,
    2.092345, -2.092359,
};

float Cg_init[2] = {
    -0.759378, -0.759388
};

float xstd_init[12] = {
    0.001081, 0.000120, 0.024068, 0.091567, 0.002496, 0.000680, 0.060927, 0.146182, 0.005040, 0.001905, 0.163511, 0.248278
};

float xmean_init[12] = {
    0.005389, -0.007729, 0.007381, 0.122143, 0.004117, -0.007580, 0.024762, 0.129643, 0.011496, -0.005909, 0.178809, 0.531071
};

