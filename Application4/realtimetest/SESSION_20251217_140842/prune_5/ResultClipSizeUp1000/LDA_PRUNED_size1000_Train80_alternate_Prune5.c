// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.45%
// test_accuracy: 70.39%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:40:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.477216, 1.477135,
    0.613741, -0.613539,
    0.278352, -0.278382,
    -0.255173, 0.255073,
    0.019728, -0.019753,
    -0.781583, 0.781587,
    -0.267402, 0.267398,
    0.601545, -0.601529,
    0.110790, -0.110761,
    0.251330, -0.251436,
    0.037354, -0.037336,
    -0.068191, 0.068231,
};

float Cg_init[2] = {
    -0.481583, -0.481576
};

float xstd_init[12] = {
    0.001025, 0.000182, 0.029716, 0.123233, 0.003845, 0.001158, 0.090537, 0.170129, 0.000986, 0.000164, 0.033786, 0.114076
};

float xmean_init[12] = {
    0.005903, -0.007621, 0.014418, 0.199618, 0.010252, -0.006371, 0.150750, 0.551579, 0.005039, -0.007554, 0.030494, 0.252440
};

