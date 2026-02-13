// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.32%
// test_accuracy: 64.29%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 14:42:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.892146, 4.892253,
    2.856282, -2.856385,
    0.556656, -0.556665,
    -1.933593, 1.933646,
    -0.335568, 0.335519,
    0.202452, -0.202470,
    -0.996044, 0.996107,
    1.210513, -1.210534,
    -0.560762, 0.560881,
    1.069962, -1.070167,
    -0.320913, 0.320969,
    -0.020761, 0.020812,
};

float Cg_init[2] = {
    -1.601983, -1.602035
};

float xstd_init[12] = {
    0.001424, 0.000235, 0.035077, 0.155078, 0.003834, 0.001142, 0.086872, 0.188079, 0.000916, 0.000145, 0.032512, 0.119307
};

float xmean_init[12] = {
    0.006250, -0.007567, 0.018333, 0.228929, 0.010165, -0.006394, 0.150238, 0.547500, 0.005247, -0.007537, 0.030238, 0.275357
};

