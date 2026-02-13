// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 47.50%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_2.txt']}
// generated: 2025-12-17 14:43:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -18.904594, 18.904875,
    5.680252, -5.680384,
    -0.186300, 0.186318,
    -3.288155, 3.288206,
    3.983792, -3.983793,
    5.807991, -5.808154,
    -3.160522, 3.160581,
    -5.099577, 5.099666,
    -9.269271, 9.269464,
    14.635035, -14.635319,
    2.578933, -2.578971,
    -2.039826, 2.039880,
};

float Cg_init[2] = {
    -5.852198, -5.852354
};

float xstd_init[12] = {
    0.001096, 0.000141, 0.026349, 0.106603, 0.003913, 0.000965, 0.099213, 0.179074, 0.001051, 0.000177, 0.029051, 0.116004
};

float xmean_init[12] = {
    0.006057, -0.007613, 0.009333, 0.202000, 0.009194, -0.006587, 0.146667, 0.504000, 0.005137, -0.007543, 0.030667, 0.236000
};

