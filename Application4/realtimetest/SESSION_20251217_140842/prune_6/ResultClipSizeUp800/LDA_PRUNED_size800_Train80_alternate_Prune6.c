// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.33%
// test_accuracy: 70.83%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:41:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.975048, 1.975097,
    0.630465, -0.630585,
    0.443846, -0.443812,
    -0.217218, 0.217262,
    -0.078281, 0.078335,
    -0.692076, 0.692020,
    -0.201671, 0.201663,
    0.599947, -0.599947,
    0.345673, -0.345666,
    0.029065, -0.029030,
    0.193526, -0.193531,
    -0.179360, 0.179334,
};

float Cg_init[2] = {
    -0.625905, -0.625902
};

float xstd_init[12] = {
    0.001080, 0.000184, 0.028048, 0.125856, 0.003575, 0.001023, 0.084642, 0.165507, 0.000839, 0.000152, 0.032063, 0.112394
};

float xmean_init[12] = {
    0.005916, -0.007625, 0.012622, 0.197734, 0.010264, -0.006393, 0.151200, 0.559867, 0.004982, -0.007568, 0.028000, 0.250667
};

