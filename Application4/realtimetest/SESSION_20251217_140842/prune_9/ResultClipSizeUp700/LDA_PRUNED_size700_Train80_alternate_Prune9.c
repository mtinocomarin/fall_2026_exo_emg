// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.96%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:42:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.443264, 2.443362,
    0.666343, -0.666549,
    0.369421, -0.369362,
    -0.113687, 0.113767,
    -0.896563, 0.896576,
    -0.270642, 0.270610,
    -0.350286, 0.350296,
    0.521379, -0.521385,
    0.652803, -0.652783,
    0.188734, -0.188774,
    0.128154, -0.128146,
    -0.385856, 0.385870,
};

float Cg_init[2] = {
    -0.918829, -0.918848
};

float xstd_init[12] = {
    0.001218, 0.000203, 0.031517, 0.128968, 0.003969, 0.001164, 0.088300, 0.165328, 0.000863, 0.000163, 0.031577, 0.114108
};

float xmean_init[12] = {
    0.005971, -0.007613, 0.014945, 0.194506, 0.010535, -0.006301, 0.151062, 0.574505, 0.005094, -0.007554, 0.027546, 0.257802
};

