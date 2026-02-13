// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.99%
// test_accuracy: 69.74%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 14:40:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.419145, 1.419106,
    0.647798, -0.647667,
    0.258498, -0.258521,
    -0.276991, 0.276921,
    0.126179, -0.126189,
    -0.788023, 0.788031,
    -0.204063, 0.204043,
    0.506572, -0.506555,
    -0.002067, 0.002071,
    0.288042, -0.288055,
    0.056356, -0.056351,
    -0.086555, 0.086547,
};

float Cg_init[2] = {
    -0.440607, -0.440602
};

float xstd_init[12] = {
    0.000999, 0.000177, 0.028725, 0.120945, 0.003734, 0.001117, 0.089242, 0.167408, 0.000994, 0.000163, 0.033126, 0.114064
};

float xmean_init[12] = {
    0.005885, -0.007627, 0.013567, 0.196141, 0.010312, -0.006373, 0.152281, 0.556140, 0.004975, -0.007564, 0.029123, 0.247281
};

