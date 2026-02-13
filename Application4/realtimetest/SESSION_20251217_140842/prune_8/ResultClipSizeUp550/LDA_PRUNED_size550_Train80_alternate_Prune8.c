// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.38%
// test_accuracy: 68.75%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:41:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.423433, 3.423555,
    1.152656, -1.152865,
    0.124714, -0.124676,
    0.227059, -0.226982,
    0.519874, -0.519924,
    -1.126702, 1.126749,
    -0.391124, 0.391120,
    0.291265, -0.291269,
    0.046709, -0.046663,
    0.269505, -0.269541,
    0.113936, -0.113927,
    -0.134620, 0.134623,
};

float Cg_init[2] = {
    -1.141312, -1.141349
};

float xstd_init[12] = {
    0.001070, 0.000182, 0.028803, 0.123123, 0.004046, 0.001236, 0.086218, 0.155622, 0.001139, 0.000174, 0.032598, 0.117991
};

float xmean_init[12] = {
    0.006003, -0.007610, 0.014833, 0.193250, 0.010512, -0.006290, 0.150833, 0.561750, 0.005204, -0.007544, 0.032000, 0.262250
};

