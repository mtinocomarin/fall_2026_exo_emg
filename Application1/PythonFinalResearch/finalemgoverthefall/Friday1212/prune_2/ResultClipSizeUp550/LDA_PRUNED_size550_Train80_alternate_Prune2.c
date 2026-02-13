// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.50%
// test_accuracy: 73.12%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 15:46:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.589553, 0.589571,
    -0.316171, 0.316192,
    0.339400, -0.339436,
    0.678027, -0.678024,
    0.656429, -0.656376,
    -0.718025, 0.717967,
    -0.007928, 0.007931,
    -0.059019, 0.059022,
    -0.406402, 0.406453,
    0.287632, -0.287804,
    -0.348316, 0.348373,
    0.200283, -0.200218,
};

float Cg_init[2] = {
    -0.273498, -0.273508
};

float xstd_init[12] = {
    0.004018, 0.001544, 0.109132, 0.173414, 0.001495, 0.000439, 0.026373, 0.074955, 0.001668, 0.000090, 0.016473, 0.065816
};

float xmean_init[12] = {
    0.010004, -0.006168, 0.181023, 0.589467, 0.003123, -0.007750, 0.006267, 0.046667, 0.003220, -0.007809, 0.004133, 0.065734
};

