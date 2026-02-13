// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.86%
// test_accuracy: 74.11%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:41:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.236017, 2.235984,
    0.829177, -0.829081,
    0.232222, -0.232228,
    -0.185000, 0.184944,
    -0.414256, 0.414301,
    -0.306966, 0.306898,
    -0.584241, 0.584256,
    0.437128, -0.437126,
    0.452100, -0.452087,
    0.280855, -0.280897,
    -0.023148, 0.023161,
    -0.191388, 0.191404,
};

float Cg_init[2] = {
    -0.779594, -0.779593
};

float xstd_init[12] = {
    0.001154, 0.000185, 0.028679, 0.126566, 0.003827, 0.001121, 0.085128, 0.165139, 0.000835, 0.000154, 0.029877, 0.115952
};

float xmean_init[12] = {
    0.005951, -0.007616, 0.013810, 0.198393, 0.010393, -0.006356, 0.152143, 0.572857, 0.005086, -0.007559, 0.027143, 0.259107
};

