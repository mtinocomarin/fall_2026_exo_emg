// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.73%
// test_accuracy: 71.59%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:42:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.815907, 3.815721,
    1.140492, -1.140184,
    0.454120, -0.454141,
    0.105133, -0.105264,
    -0.602549, 0.602498,
    -0.876045, 0.876080,
    0.323692, -0.323712,
    0.169919, -0.169863,
    0.461782, -0.461858,
    0.246076, -0.245956,
    0.160480, -0.160481,
    -0.238452, 0.238402,
};

float Cg_init[2] = {
    -1.351925, -1.351887
};

float xstd_init[12] = {
    0.001077, 0.000153, 0.021975, 0.116658, 0.004325, 0.001234, 0.081271, 0.158052, 0.000941, 0.000141, 0.030851, 0.118563
};

float xmean_init[12] = {
    0.006034, -0.007631, 0.010606, 0.179545, 0.010722, -0.006253, 0.150606, 0.551818, 0.005136, -0.007566, 0.028788, 0.254545
};

