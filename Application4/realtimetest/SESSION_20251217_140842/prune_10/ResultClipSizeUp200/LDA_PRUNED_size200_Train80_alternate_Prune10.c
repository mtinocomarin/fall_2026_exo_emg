// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.22%
// test_accuracy: 79.17%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 14:42:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.055802, 4.055771,
    1.387053, -1.386965,
    -1.225962, 1.225951,
    -1.866033, 1.865995,
    1.914212, -1.914226,
    -6.902678, 6.902648,
    1.824434, -1.824409,
    -0.146840, 0.146848,
    1.230901, -1.230895,
    1.281353, -1.281405,
    1.790481, -1.790468,
    -0.343867, 0.343890,
};

float Cg_init[2] = {
    -1.972760, -1.972751
};

float xstd_init[12] = {
    0.000736, 0.000113, 0.010079, 0.094173, 0.003401, 0.001200, 0.110676, 0.156225, 0.001418, 0.000181, 0.029057, 0.102607
};

float xmean_init[12] = {
    0.005660, -0.007659, 0.004444, 0.173333, 0.010660, -0.006193, 0.174815, 0.602222, 0.004938, -0.007590, 0.023704, 0.225556
};

