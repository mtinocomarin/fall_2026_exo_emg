// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 64.29%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:43:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -12.788564, 12.788401,
    6.982402, -6.982266,
    -0.265970, 0.265969,
    2.001580, -2.001584,
    -1.263759, 1.263735,
    -4.537200, 4.537184,
    -1.401178, 1.401160,
    -2.566382, 2.566345,
    -2.875150, 2.875056,
    5.532498, -5.532385,
    1.659765, -1.659747,
    2.788333, -2.788306,
};

float Cg_init[2] = {
    -6.348318, -6.348175
};

float xstd_init[12] = {
    0.001052, 0.000157, 0.025809, 0.112726, 0.005055, 0.001443, 0.078339, 0.162675, 0.000852, 0.000120, 0.031462, 0.101757
};

float xmean_init[12] = {
    0.006097, -0.007598, 0.014603, 0.196190, 0.011202, -0.006018, 0.155556, 0.543810, 0.005206, -0.007572, 0.032381, 0.253333
};

