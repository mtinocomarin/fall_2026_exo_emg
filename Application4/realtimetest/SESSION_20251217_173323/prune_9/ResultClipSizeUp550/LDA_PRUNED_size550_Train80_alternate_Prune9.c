// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.00%
// test_accuracy: 77.00%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_21.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 18:10:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.687107, 0.687129,
    0.644217, -0.644293,
    0.386207, -0.386169,
    -0.119225, 0.119252,
    0.897010, -0.897000,
    -0.117570, 0.117556,
    -2.089914, 2.089925,
    0.653989, -0.653992,
    -1.078097, 1.078108,
    -0.605542, 0.605525,
    0.574129, -0.574131,
    2.020360, -2.020348,
};

float Cg_init[2] = {
    -0.896826, -0.896829
};

float xstd_init[12] = {
    0.001131, 0.000109, 0.022753, 0.078369, 0.002711, 0.000811, 0.046633, 0.125879, 0.006120, 0.002645, 0.171181, 0.269791
};

float xmean_init[12] = {
    0.005419, -0.007730, 0.006000, 0.115000, 0.004269, -0.007552, 0.017733, 0.124200, 0.011965, -0.005449, 0.190800, 0.553600
};

