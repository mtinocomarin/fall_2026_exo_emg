// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.53%
// test_accuracy: 65.28%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.843024, 3.843040,
    1.333319, -1.333288,
    0.325404, -0.325418,
    -0.128196, 0.128173,
    0.439786, -0.439837,
    -1.278643, 1.278697,
    0.187206, -0.187205,
    0.116681, -0.116677,
    0.500125, -0.500130,
    -0.352350, 0.352354,
    0.663296, -0.663294,
    0.116548, -0.116555,
};

float Cg_init[2] = {
    -1.221084, -1.221099
};

float xstd_init[12] = {
    0.001080, 0.000196, 0.029881, 0.123163, 0.003870, 0.001107, 0.077799, 0.155771, 0.000883, 0.000170, 0.031993, 0.115752
};

float xmean_init[12] = {
    0.005999, -0.007608, 0.014815, 0.198333, 0.010183, -0.006393, 0.138704, 0.553055, 0.005094, -0.007552, 0.029074, 0.254722
};

