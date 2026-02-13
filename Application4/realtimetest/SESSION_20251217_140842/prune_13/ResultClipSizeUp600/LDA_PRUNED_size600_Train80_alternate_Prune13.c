// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.45%
// test_accuracy: 69.32%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:43:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.485057, 3.484931,
    0.927369, -0.927173,
    0.541649, -0.541662,
    0.032902, -0.032963,
    -0.065794, 0.065730,
    -0.698288, 0.698343,
    0.009938, -0.009944,
    0.031628, -0.031588,
    -0.117383, 0.117315,
    0.480399, -0.480325,
    0.169898, -0.169884,
    -0.205483, 0.205452,
};

float Cg_init[2] = {
    -1.222530, -1.222513
};

float xstd_init[12] = {
    0.001178, 0.000163, 0.023448, 0.114697, 0.004296, 0.001243, 0.086090, 0.172510, 0.000982, 0.000152, 0.031400, 0.130555
};

float xmean_init[12] = {
    0.006126, -0.007604, 0.011717, 0.207879, 0.010674, -0.006248, 0.157576, 0.546061, 0.005162, -0.007551, 0.033131, 0.258788
};

