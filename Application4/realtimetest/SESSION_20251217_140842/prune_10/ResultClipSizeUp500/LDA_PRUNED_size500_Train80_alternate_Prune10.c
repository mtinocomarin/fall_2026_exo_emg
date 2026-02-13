// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.15%
// test_accuracy: 63.89%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:42:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.649942, 5.649895,
    1.661270, -1.661137,
    0.774384, -0.774420,
    0.182120, -0.182186,
    -0.140715, 0.140668,
    -1.323748, 1.323792,
    0.208934, -0.208917,
    0.526692, -0.526688,
    0.430032, -0.430028,
    0.083382, -0.083402,
    0.465904, -0.465892,
    0.077576, -0.077570,
};

float Cg_init[2] = {
    -1.815334, -1.815329
};

float xstd_init[12] = {
    0.001187, 0.000221, 0.032837, 0.137805, 0.004168, 0.001194, 0.078909, 0.162037, 0.000921, 0.000145, 0.033281, 0.112658
};

float xmean_init[12] = {
    0.006119, -0.007594, 0.015556, 0.199259, 0.010594, -0.006295, 0.145926, 0.544074, 0.005237, -0.007551, 0.032593, 0.261852
};

