// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.12%
// test_accuracy: 73.57%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_14.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:09:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.415483, 0.415440,
    0.144525, -0.144430,
    0.421311, -0.421327,
    0.354999, -0.355026,
    0.844574, -0.844571,
    -1.027738, 1.027690,
    -0.946396, 0.946437,
    0.286910, -0.286927,
    -0.172495, 0.172504,
    -0.695897, 0.695908,
    0.374437, -0.374473,
    1.278628, -1.278601,
};

float Cg_init[2] = {
    -0.574043, -0.574034
};

float xstd_init[12] = {
    0.001193, 0.000202, 0.026034, 0.092672, 0.002882, 0.000886, 0.051808, 0.137143, 0.005716, 0.002277, 0.158174, 0.263440
};

float xmean_init[12] = {
    0.005646, -0.007693, 0.008571, 0.135715, 0.004338, -0.007485, 0.020397, 0.130238, 0.011800, -0.005717, 0.176111, 0.542381
};

