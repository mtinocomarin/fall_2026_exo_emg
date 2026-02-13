// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 75.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:13:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.470950, 1.470972,
    0.528226, -0.528238,
    0.926535, -0.926539,
    0.323610, -0.323608,
    0.171631, -0.171697,
    -0.272162, 0.272223,
    -0.147471, 0.147476,
    0.181796, -0.181795,
    -0.140432, 0.140402,
    -0.314013, 0.314048,
    0.003176, -0.003185,
    0.319985, -0.319982,
};

float Cg_init[2] = {
    -0.391444, -0.391445
};

float xstd_init[12] = {
    0.004532, 0.002059, 0.344814, 0.118385, 0.001515, 0.000277, 0.068568, 0.143106, 0.000647, 0.000162, 0.050307, 0.145515
};

float xmean_init[12] = {
    0.011242, -0.005425, 0.480555, 1.045926, 0.003607, -0.007719, 0.020062, 0.640741, 0.003564, -0.007728, 0.015432, 0.702222
};

