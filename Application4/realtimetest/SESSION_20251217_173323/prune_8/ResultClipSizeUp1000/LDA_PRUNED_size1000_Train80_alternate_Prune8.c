// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.80%
// test_accuracy: 66.84%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_22.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:10:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.344772, 0.344710,
    0.303644, -0.303539,
    -0.003531, 0.003503,
    0.304544, -0.304573,
    0.502074, -0.502161,
    -0.612455, 0.612535,
    -0.996127, 0.996125,
    0.267161, -0.267168,
    0.598539, -0.598498,
    -1.003622, 1.003606,
    0.600897, -0.600932,
    0.786085, -0.786073,
};

float Cg_init[2] = {
    -0.580303, -0.580299
};

float xstd_init[12] = {
    0.001057, 0.000131, 0.018741, 0.073942, 0.002873, 0.000902, 0.052194, 0.143334, 0.005631, 0.002293, 0.161959, 0.260500
};

float xmean_init[12] = {
    0.005471, -0.007720, 0.006124, 0.124402, 0.004361, -0.007489, 0.021053, 0.134450, 0.012034, -0.005605, 0.190367, 0.554163
};

