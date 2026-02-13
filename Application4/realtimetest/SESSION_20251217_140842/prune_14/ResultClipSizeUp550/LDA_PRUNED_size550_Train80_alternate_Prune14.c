// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 68.75%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:43:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -7.728370, 7.728279,
    5.605493, -5.605373,
    -1.756231, 1.756214,
    -0.435787, 0.435743,
    -4.867137, 4.867157,
    1.850188, -1.850189,
    -0.527547, 0.527524,
    0.117948, -0.117940,
    0.122088, -0.122149,
    0.216343, -0.216262,
    0.937365, -0.937384,
    1.287100, -1.287103,
};

float Cg_init[2] = {
    -3.607399, -3.607343
};

float xstd_init[12] = {
    0.001083, 0.000144, 0.021773, 0.120920, 0.004519, 0.001303, 0.083390, 0.178653, 0.000774, 0.000124, 0.030073, 0.094375
};

float xmean_init[12] = {
    0.005948, -0.007632, 0.013333, 0.172000, 0.010830, -0.006147, 0.143333, 0.549000, 0.005170, -0.007553, 0.029333, 0.254000
};

