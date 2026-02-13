// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.87%
// test_accuracy: 66.96%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 13:13:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.418450, 0.418510,
    -0.092588, 0.092564,
    0.506289, -0.506310,
    0.258071, -0.258081,
    -0.314449, 0.314201,
    0.035552, -0.035300,
    0.012883, -0.012877,
    0.094936, -0.094964,
    0.214461, -0.214551,
    -0.336087, 0.336292,
    -0.224775, 0.224679,
    0.365283, -0.365309,
};

float Cg_init[2] = {
    -0.204420, -0.204430
};

float xstd_init[12] = {
    0.004352, 0.002016, 0.346626, 0.123281, 0.001042, 0.000183, 0.045772, 0.132888, 0.000642, 0.000156, 0.048257, 0.138652
};

float xmean_init[12] = {
    0.010303, -0.005713, 0.435375, 1.035408, 0.003369, -0.007766, 0.010884, 0.620205, 0.003523, -0.007734, 0.014626, 0.699898
};

