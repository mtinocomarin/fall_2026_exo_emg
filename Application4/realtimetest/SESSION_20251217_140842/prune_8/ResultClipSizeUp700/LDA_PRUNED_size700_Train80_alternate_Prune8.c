// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.83%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:41:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.140080, 2.140100,
    0.702820, -0.702873,
    0.395213, -0.395189,
    -0.358349, 0.358360,
    -0.431846, 0.431858,
    -0.718678, 0.718643,
    -0.302721, 0.302740,
    0.652552, -0.652556,
    0.734569, -0.734540,
    0.053604, -0.053681,
    0.166016, -0.166003,
    -0.375816, 0.375850,
};

float Cg_init[2] = {
    -0.808861, -0.808864
};

float xstd_init[12] = {
    0.001156, 0.000196, 0.030653, 0.132810, 0.003832, 0.001111, 0.085419, 0.166617, 0.000829, 0.000157, 0.032487, 0.112248
};

float xmean_init[12] = {
    0.005966, -0.007606, 0.014615, 0.204808, 0.010311, -0.006361, 0.147179, 0.563269, 0.005116, -0.007549, 0.029744, 0.263846
};

