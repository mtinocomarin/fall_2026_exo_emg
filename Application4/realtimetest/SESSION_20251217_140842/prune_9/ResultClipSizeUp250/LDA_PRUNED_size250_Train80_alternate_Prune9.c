// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.43%
// test_accuracy: 62.50%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 14:41:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.694936, 2.694963,
    2.176935, -2.177049,
    -0.495005, 0.495042,
    -1.069391, 1.069432,
    0.968903, -0.968888,
    -2.950718, 2.950765,
    1.122308, -1.122344,
    -0.619614, 0.619616,
    -0.109463, 0.109373,
    -0.481628, 0.481792,
    -0.140371, 0.140359,
    1.534146, -1.534210,
};

float Cg_init[2] = {
    -1.336804, -1.336836
};

float xstd_init[12] = {
    0.001022, 0.000193, 0.024907, 0.125052, 0.003739, 0.001279, 0.093072, 0.147337, 0.001485, 0.000171, 0.035544, 0.111313
};

float xmean_init[12] = {
    0.005983, -0.007607, 0.013810, 0.183571, 0.011058, -0.006089, 0.173809, 0.567143, 0.005164, -0.007573, 0.028571, 0.238571
};

