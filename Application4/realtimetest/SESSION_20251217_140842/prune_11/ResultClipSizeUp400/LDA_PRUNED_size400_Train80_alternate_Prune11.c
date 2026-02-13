// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.71%
// test_accuracy: 62.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:42:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.883152, 3.883155,
    1.505702, -1.505741,
    0.362141, -0.362118,
    -0.018926, 0.018943,
    0.152595, -0.152576,
    -1.530318, 1.530318,
    -0.126561, 0.126534,
    0.085232, -0.085242,
    0.260985, -0.261049,
    1.088082, -1.087958,
    0.684173, -0.684184,
    -0.086975, 0.086935,
};

float Cg_init[2] = {
    -1.542415, -1.542406
};

float xstd_init[12] = {
    0.000900, 0.000141, 0.023481, 0.102159, 0.004174, 0.001197, 0.071891, 0.151015, 0.000849, 0.000117, 0.028259, 0.102151
};

float xmean_init[12] = {
    0.005937, -0.007644, 0.013333, 0.174286, 0.010885, -0.006193, 0.157714, 0.556571, 0.004981, -0.007603, 0.024381, 0.240000
};

