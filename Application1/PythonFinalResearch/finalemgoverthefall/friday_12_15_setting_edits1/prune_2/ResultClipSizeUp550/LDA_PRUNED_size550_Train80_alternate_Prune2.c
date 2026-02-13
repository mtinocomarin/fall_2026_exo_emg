// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.83%
// test_accuracy: 67.50%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:12:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.623048, 0.623044,
    0.021469, -0.021496,
    0.491939, -0.491913,
    0.267425, -0.267433,
    -0.277151, 0.277119,
    -0.003984, 0.004036,
    0.005893, -0.005899,
    0.122652, -0.122665,
    0.161009, -0.160905,
    -0.226064, 0.225917,
    -0.236634, 0.236681,
    0.249671, -0.249661,
};

float Cg_init[2] = {
    -0.202013, -0.202010
};

float xstd_init[12] = {
    0.004633, 0.002123, 0.346554, 0.123397, 0.001152, 0.000202, 0.050668, 0.136895, 0.000665, 0.000163, 0.050364, 0.140344
};

float xmean_init[12] = {
    0.010634, -0.005582, 0.449110, 1.030000, 0.003422, -0.007756, 0.013333, 0.624667, 0.003538, -0.007732, 0.015667, 0.700533
};

