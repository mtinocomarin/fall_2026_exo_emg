// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.94%
// test_accuracy: 72.06%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:41:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.787745, 1.787678,
    0.618723, -0.618622,
    0.388607, -0.388607,
    -0.341070, 0.341015,
    0.144983, -0.144988,
    -0.935638, 0.935605,
    -0.225379, 0.225386,
    0.681078, -0.681061,
    0.221744, -0.221680,
    -0.050994, 0.050887,
    0.147269, -0.147247,
    0.050541, -0.050513,
};

float Cg_init[2] = {
    -0.599414, -0.599393
};

float xstd_init[12] = {
    0.001052, 0.000184, 0.029073, 0.125680, 0.003838, 0.001100, 0.089642, 0.173399, 0.000854, 0.000155, 0.032995, 0.114503
};

float xmean_init[12] = {
    0.005907, -0.007623, 0.013647, 0.201294, 0.010259, -0.006376, 0.151294, 0.555412, 0.005002, -0.007562, 0.029176, 0.248706
};

