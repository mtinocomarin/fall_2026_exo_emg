// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.33%
// test_accuracy: 63.75%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:42:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.945687, 4.945854,
    1.592666, -1.592964,
    0.242663, -0.242619,
    0.265017, -0.264897,
    0.154423, -0.154437,
    -0.922485, 0.922472,
    -0.100978, 0.100992,
    0.451112, -0.451132,
    0.151472, -0.151365,
    0.085056, -0.085205,
    0.274820, -0.274788,
    0.141809, -0.141778,
};

float Cg_init[2] = {
    -1.540397, -1.540442
};

float xstd_init[12] = {
    0.001169, 0.000202, 0.031589, 0.136693, 0.004180, 0.001212, 0.086039, 0.165421, 0.000884, 0.000141, 0.032748, 0.112656
};

float xmean_init[12] = {
    0.006107, -0.007595, 0.015778, 0.198000, 0.010629, -0.006282, 0.149333, 0.552000, 0.005229, -0.007550, 0.032889, 0.259000
};

