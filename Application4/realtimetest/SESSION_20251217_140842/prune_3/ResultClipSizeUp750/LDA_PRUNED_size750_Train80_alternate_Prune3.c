// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_3\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.81%
// test_accuracy: 72.32%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 14:40:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.257417, 1.257447,
    0.489295, -0.489333,
    0.168687, -0.168676,
    -0.087924, 0.087929,
    0.288664, -0.288639,
    -0.827245, 0.827210,
    -0.245706, 0.245701,
    0.241707, -0.241702,
    -0.018297, 0.018328,
    0.443016, -0.443060,
    0.000695, -0.000686,
    -0.242451, 0.242460,
};

float Cg_init[2] = {
    -0.400759, -0.400767
};

float xstd_init[12] = {
    0.000980, 0.000164, 0.025151, 0.118713, 0.003791, 0.001103, 0.087817, 0.167615, 0.000967, 0.000157, 0.030554, 0.112827
};

float xmean_init[12] = {
    0.005895, -0.007621, 0.012894, 0.197253, 0.010505, -0.006336, 0.156777, 0.567253, 0.004962, -0.007566, 0.027619, 0.246594
};

