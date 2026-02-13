// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.06%
// test_accuracy: 69.79%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:41:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.156168, 2.156159,
    0.697197, -0.697163,
    0.293557, -0.293553,
    -0.071357, 0.071326,
    0.163124, -0.163083,
    -0.852609, 0.852539,
    -0.335455, 0.335471,
    0.170401, -0.170402,
    0.085363, -0.085308,
    0.416396, -0.416499,
    0.036329, -0.036305,
    -0.231368, 0.231406,
};

float Cg_init[2] = {
    -0.747459, -0.747465
};

float xstd_init[12] = {
    0.001079, 0.000176, 0.028507, 0.120292, 0.003886, 0.001199, 0.089908, 0.156505, 0.001053, 0.000163, 0.031210, 0.114331
};

float xmean_init[12] = {
    0.005925, -0.007623, 0.014321, 0.189259, 0.010729, -0.006258, 0.160000, 0.577778, 0.005093, -0.007562, 0.028889, 0.256667
};

