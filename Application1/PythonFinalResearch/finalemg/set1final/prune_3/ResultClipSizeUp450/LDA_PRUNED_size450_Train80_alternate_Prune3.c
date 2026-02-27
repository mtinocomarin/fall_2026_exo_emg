// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 58.75%
// test_accuracy: 53.12%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_4.txt', 'act2\\trial_2.txt']}
// generated: 2026-02-13 17:10:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.897544, 0.897547,
    -0.001056, 0.001012,
    0.000000, 0.000000,
    2.299350, 2.299350,
    0.365197, 0.365197,
    0.295523, 0.295523,
    0.981438, 0.981438,
    1.449688, 1.449688,
    -0.380965, -0.380965,
    -0.717678, -0.717678,
    -1.248135, -1.248135,
    -0.510641, -0.510641,
};

float Cg_init[2] = {
    0.957534, -1.557834
};

float xstd_init[12] = {
    0.000350, 0.000015, 1.000000, 0.013862, 0.002163, 0.000715, 0.073978, 0.120572, 0.002016, 0.000558, 0.072006, 0.188289
};

float xmean_init[12] = {
    0.002601, -0.007912, 0.000000, 0.005500, 0.008166, -0.006674, 0.136333, 0.438000, 0.006294, -0.007068, 0.093333, 0.334500
};

