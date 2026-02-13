// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 68.33%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-17 18:08:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.804108, 0.803955,
    1.030739, -1.030289,
    -0.001731, 0.001590,
    -0.338932, 0.338800,
    0.558387, -0.558428,
    -0.104914, 0.104871,
    -1.512182, 1.512141,
    0.233319, -0.233288,
    0.432151, -0.432137,
    -1.202769, 1.202711,
    0.547253, -0.547228,
    1.060892, -1.060902,
};

float Cg_init[2] = {
    -0.619440, -0.619400
};

float xstd_init[12] = {
    0.001109, 0.000139, 0.025690, 0.097601, 0.002812, 0.000760, 0.056612, 0.140950, 0.005606, 0.002203, 0.159962, 0.242933
};

float xmean_init[12] = {
    0.005523, -0.007709, 0.008730, 0.132619, 0.004229, -0.007549, 0.022381, 0.121905, 0.011746, -0.005754, 0.175238, 0.538810
};

