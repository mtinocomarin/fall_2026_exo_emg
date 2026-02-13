// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.67%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:40:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.262166, 2.262140,
    -0.334365, 0.334461,
    -0.620176, 0.620160,
    0.438208, -0.438256,
    0.170136, -0.170158,
    -0.930688, 0.930696,
    -0.013855, 0.013856,
    -0.235153, 0.235175,
    -0.136030, 0.136003,
    0.185857, -0.185866,
    0.489431, -0.489436,
    0.435806, -0.435787,
};

float Cg_init[2] = {
    -1.142177, -1.142184
};

float xstd_init[12] = {
    0.000777, 0.000108, 0.015265, 0.091629, 0.003032, 0.001091, 0.095292, 0.142704, 0.001177, 0.000222, 0.029239, 0.118619
};

float xmean_init[12] = {
    0.005672, -0.007671, 0.008889, 0.168000, 0.010658, -0.006232, 0.162667, 0.594667, 0.004971, -0.007549, 0.023111, 0.242000
};

