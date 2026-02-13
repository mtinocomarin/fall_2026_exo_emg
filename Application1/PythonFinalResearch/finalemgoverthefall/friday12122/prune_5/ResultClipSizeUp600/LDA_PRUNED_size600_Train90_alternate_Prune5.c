// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 79.77%
// test_accuracy: 77.27%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:04:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.585666, 0.585693,
    -0.213525, 0.213531,
    0.283561, -0.283600,
    0.710915, -0.710906,
    0.681114, -0.681251,
    -0.732557, 0.732752,
    -0.087854, 0.087811,
    -0.040205, 0.040180,
    -0.403035, 0.403141,
    0.342503, -0.342636,
    -0.311636, 0.311688,
    0.136899, -0.136863,
};

float Cg_init[2] = {
    -0.281288, -0.281316
};

float xstd_init[12] = {
    0.003691, 0.001313, 0.105271, 0.166150, 0.001427, 0.000408, 0.020342, 0.069706, 0.001618, 0.000089, 0.015774, 0.066301
};

float xmean_init[12] = {
    0.009815, -0.006267, 0.169267, 0.583989, 0.003137, -0.007746, 0.005279, 0.047331, 0.003239, -0.007808, 0.004418, 0.068035
};

