// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.34%
// test_accuracy: 72.32%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:47:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.575964, 0.575943,
    -0.306234, 0.306258,
    0.416020, -0.416050,
    0.567731, -0.567710,
    0.631870, -0.631826,
    -0.674086, 0.674069,
    -0.029091, 0.029089,
    -0.050506, 0.050480,
    -0.384037, 0.383959,
    0.329513, -0.329337,
    -0.265965, 0.265921,
    0.067534, -0.067633,
};

float Cg_init[2] = {
    -0.245820, -0.245817
};

float xstd_init[12] = {
    0.003755, 0.001430, 0.106650, 0.172923, 0.001384, 0.000401, 0.024105, 0.072512, 0.001562, 0.000086, 0.014587, 0.066324
};

float xmean_init[12] = {
    0.009787, -0.006226, 0.179475, 0.588670, 0.003094, -0.007758, 0.005944, 0.047143, 0.003210, -0.007811, 0.003415, 0.064729
};

