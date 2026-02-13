// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.56%
// test_accuracy: 70.83%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:41:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.089521, 2.089522,
    0.181430, -0.181493,
    0.438605, -0.438579,
    0.233897, -0.233869,
    -0.065192, 0.065196,
    -0.620388, 0.620350,
    -0.034681, 0.034685,
    -0.089107, 0.089113,
    0.149810, -0.149725,
    -0.129150, 0.129028,
    0.437459, -0.437439,
    0.015875, -0.015834,
};

float Cg_init[2] = {
    -0.715485, -0.715480
};

float xstd_init[12] = {
    0.001019, 0.000184, 0.028111, 0.117525, 0.003988, 0.001227, 0.086306, 0.153927, 0.001185, 0.000179, 0.033386, 0.117262
};

float xmean_init[12] = {
    0.005906, -0.007623, 0.013926, 0.185778, 0.010807, -0.006243, 0.155555, 0.570444, 0.005039, -0.007566, 0.029037, 0.247111
};

