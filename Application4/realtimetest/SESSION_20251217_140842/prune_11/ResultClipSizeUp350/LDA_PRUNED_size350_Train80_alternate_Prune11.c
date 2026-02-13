// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.33%
// test_accuracy: 50.00%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 14:42:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.602056, 5.602068,
    2.294400, -2.294454,
    0.156002, -0.155992,
    0.394238, -0.394210,
    1.958859, -1.958893,
    -2.122434, 2.122498,
    -0.019823, 0.019816,
    0.106515, -0.106517,
    -2.879763, 2.879713,
    1.966312, -1.966244,
    0.653509, -0.653512,
    -0.697911, 0.697891,
};

float Cg_init[2] = {
    -1.905192, -1.905199
};

float xstd_init[12] = {
    0.000970, 0.000146, 0.024298, 0.111079, 0.004769, 0.001532, 0.089875, 0.153511, 0.001610, 0.000184, 0.030697, 0.118085
};

float xmean_init[12] = {
    0.006052, -0.007614, 0.013778, 0.179333, 0.011595, -0.005934, 0.176444, 0.547333, 0.005301, -0.007550, 0.032444, 0.255333
};

