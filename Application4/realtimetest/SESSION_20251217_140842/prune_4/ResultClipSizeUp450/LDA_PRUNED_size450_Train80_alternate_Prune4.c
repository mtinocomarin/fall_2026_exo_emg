// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.54%
// test_accuracy: 67.19%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-17 14:40:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.590675, 1.590732,
    0.645815, -0.645937,
    -0.081574, 0.081602,
    0.047957, -0.047911,
    0.959773, -0.959800,
    -1.509176, 1.509205,
    -0.185663, 0.185667,
    -0.034886, 0.034885,
    0.057248, -0.057237,
    0.391815, -0.391825,
    0.093538, -0.093527,
    -0.197759, 0.197757,
};

float Cg_init[2] = {
    -0.531061, -0.531075
};

float xstd_init[12] = {
    0.000952, 0.000166, 0.023304, 0.116778, 0.003964, 0.001202, 0.089593, 0.160627, 0.001094, 0.000174, 0.030305, 0.110987
};

float xmean_init[12] = {
    0.005906, -0.007610, 0.014028, 0.199167, 0.010631, -0.006247, 0.160000, 0.566458, 0.005032, -0.007553, 0.028889, 0.245417
};

