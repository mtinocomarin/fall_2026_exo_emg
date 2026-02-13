// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.93%
// test_accuracy: 74.31%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:46:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.728051, 0.728013,
    -0.206665, 0.206722,
    0.423695, -0.423715,
    0.706288, -0.706287,
    0.709377, -0.709261,
    -0.959295, 0.959140,
    0.038443, -0.038418,
    0.045732, -0.045715,
    -0.467375, 0.467372,
    0.505069, -0.505147,
    -0.475994, 0.476030,
    0.172940, -0.172917,
};

float Cg_init[2] = {
    -0.327825, -0.327827
};

float xstd_init[12] = {
    0.003862, 0.001429, 0.105050, 0.169302, 0.001550, 0.000457, 0.026720, 0.078889, 0.001547, 0.000090, 0.017004, 0.064404
};

float xmean_init[12] = {
    0.009827, -0.006223, 0.172006, 0.583065, 0.003155, -0.007739, 0.006386, 0.048659, 0.003228, -0.007808, 0.004547, 0.066973
};

