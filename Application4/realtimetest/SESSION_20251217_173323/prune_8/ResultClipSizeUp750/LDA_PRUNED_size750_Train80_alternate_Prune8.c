// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.29%
// test_accuracy: 73.57%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_14.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:10:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.326763, 0.326745,
    -0.009938, 0.009977,
    0.512382, -0.512376,
    0.341876, -0.341891,
    1.040713, -1.040680,
    -1.348778, 1.348705,
    -1.020535, 1.020570,
    0.502287, -0.502299,
    -0.363683, 0.363685,
    -0.608260, 0.608262,
    0.411214, -0.411240,
    1.449418, -1.449391,
};

float Cg_init[2] = {
    -0.657227, -0.657217
};

float xstd_init[12] = {
    0.001234, 0.000210, 0.027060, 0.095672, 0.002973, 0.000920, 0.053367, 0.139891, 0.005794, 0.002328, 0.162119, 0.269387
};

float xmean_init[12] = {
    0.005686, -0.007689, 0.009351, 0.138052, 0.004393, -0.007466, 0.020693, 0.133507, 0.011770, -0.005689, 0.179827, 0.546753
};

