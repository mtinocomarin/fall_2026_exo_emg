// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.50%
// test_accuracy: 52.50%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 14:42:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.258459, 3.258446,
    1.117884, -1.117828,
    0.324524, -0.324520,
    -0.258102, 0.258074,
    0.295984, -0.296003,
    -0.361627, 0.361601,
    0.335469, -0.335460,
    -1.280526, 1.280551,
    -1.365648, 1.365667,
    1.570404, -1.570452,
    0.606916, -0.606914,
    0.434158, -0.434132,
};

float Cg_init[2] = {
    -1.219087, -1.219080
};

float xstd_init[12] = {
    0.000983, 0.000141, 0.021940, 0.105849, 0.003864, 0.001198, 0.096574, 0.189247, 0.000994, 0.000153, 0.028325, 0.110105
};

float xmean_init[12] = {
    0.005978, -0.007613, 0.008000, 0.194000, 0.010946, -0.006089, 0.166667, 0.569000, 0.005024, -0.007580, 0.026667, 0.230000
};

