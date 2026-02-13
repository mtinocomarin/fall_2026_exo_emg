// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 70.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_14.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:08:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.184248, 0.184184,
    0.193560, -0.193428,
    -0.045916, 0.045890,
    0.199639, -0.199680,
    0.343307, -0.343373,
    -0.496797, 0.496819,
    -0.800086, 0.800122,
    0.205758, -0.205773,
    0.309961, -0.309937,
    -0.665067, 0.665074,
    0.342843, -0.342884,
    0.721900, -0.721877,
};

float Cg_init[2] = {
    -0.387079, -0.387076
};

float xstd_init[12] = {
    0.001114, 0.000180, 0.023363, 0.093256, 0.003133, 0.000960, 0.059687, 0.147296, 0.005506, 0.002150, 0.149601, 0.241500
};

float xmean_init[12] = {
    0.005639, -0.007695, 0.008652, 0.137334, 0.004526, -0.007435, 0.025719, 0.137334, 0.011801, -0.005790, 0.175645, 0.546489
};

