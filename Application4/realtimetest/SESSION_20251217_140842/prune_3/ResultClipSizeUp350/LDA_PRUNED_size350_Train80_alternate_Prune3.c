// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.46%
// test_accuracy: 58.33%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-17 14:40:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.564199, 1.564277,
    0.652908, -0.653116,
    -0.089457, 0.089494,
    -0.000448, 0.000549,
    0.894167, -0.894223,
    -1.365037, 1.365074,
    0.108445, -0.108460,
    -0.175852, 0.175869,
    -0.143319, 0.143396,
    0.099080, -0.099183,
    0.305648, -0.305616,
    0.251738, -0.251717,
};

float Cg_init[2] = {
    -0.482461, -0.482482
};

float xstd_init[12] = {
    0.000924, 0.000162, 0.024064, 0.114778, 0.003784, 0.001167, 0.091483, 0.152001, 0.001173, 0.000184, 0.030798, 0.116068
};

float xmean_init[12] = {
    0.005924, -0.007621, 0.015214, 0.190513, 0.010670, -0.006273, 0.161880, 0.570513, 0.005048, -0.007553, 0.029060, 0.243077
};

