// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.67%
// test_accuracy: 62.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:42:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.116785, 4.116797,
    1.327802, -1.327840,
    -0.656057, 0.656062,
    -1.183662, 1.183692,
    -1.352246, 1.352234,
    -3.410454, 3.410475,
    2.527258, -2.527260,
    -0.275231, 0.275227,
    0.927313, -0.927277,
    0.031718, -0.031751,
    0.161378, -0.161385,
    1.722074, -1.722070,
};

float Cg_init[2] = {
    -2.229292, -2.229295
};

float xstd_init[12] = {
    0.000784, 0.000117, 0.009220, 0.093179, 0.003532, 0.001251, 0.101745, 0.146813, 0.001478, 0.000190, 0.028647, 0.107605
};

float xmean_init[12] = {
    0.005698, -0.007648, 0.003556, 0.182667, 0.010282, -0.006242, 0.164444, 0.586667, 0.005051, -0.007572, 0.023111, 0.229333
};

