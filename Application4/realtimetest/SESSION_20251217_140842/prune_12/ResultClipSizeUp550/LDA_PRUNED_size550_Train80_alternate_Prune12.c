// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.75%
// test_accuracy: 63.75%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-17 14:42:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -7.012103, 7.012242,
    3.298259, -3.298493,
    -0.960669, 0.960718,
    0.956868, -0.956789,
    -1.200120, 1.200066,
    0.829845, -0.829845,
    -0.209512, 0.209542,
    0.773135, -0.773159,
    -1.253982, 1.254108,
    0.307326, -0.307511,
    1.052223, -1.052178,
    0.673652, -0.673613,
};

float Cg_init[2] = {
    -2.085533, -2.085582
};

float xstd_init[12] = {
    0.001227, 0.000223, 0.034884, 0.149256, 0.003872, 0.001128, 0.086018, 0.178970, 0.000855, 0.000133, 0.034101, 0.103751
};

float xmean_init[12] = {
    0.006163, -0.007579, 0.018333, 0.211000, 0.010652, -0.006275, 0.147000, 0.554500, 0.005111, -0.007568, 0.035000, 0.250500
};

