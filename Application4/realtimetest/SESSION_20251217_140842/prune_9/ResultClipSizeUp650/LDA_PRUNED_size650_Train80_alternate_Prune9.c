// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.83%
// test_accuracy: 67.71%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.194646, 3.194705,
    1.186856, -1.186928,
    0.246115, -0.246107,
    -0.092209, 0.092227,
    -0.131125, 0.131140,
    -0.297036, 0.296992,
    -0.287247, 0.287268,
    0.318587, -0.318594,
    -0.049635, 0.049703,
    0.453924, -0.454018,
    0.158476, -0.158453,
    -0.067836, 0.067854,
};

float Cg_init[2] = {
    -0.957178, -0.957198
};

float xstd_init[12] = {
    0.001148, 0.000191, 0.030457, 0.130967, 0.003815, 0.001112, 0.080557, 0.163835, 0.000854, 0.000138, 0.031526, 0.112528
};

float xmean_init[12] = {
    0.006062, -0.007608, 0.014127, 0.197381, 0.010341, -0.006375, 0.146825, 0.561905, 0.005113, -0.007567, 0.028254, 0.253572
};

