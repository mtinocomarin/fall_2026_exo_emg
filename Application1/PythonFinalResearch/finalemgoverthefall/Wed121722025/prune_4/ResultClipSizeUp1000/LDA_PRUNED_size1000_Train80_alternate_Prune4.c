// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 65.79%
// test_accuracy: 53.95%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-17 13:43:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.204752, 0.204644,
    0.159644, -0.159408,
    -0.061715, 0.061695,
    -0.040359, 0.040231,
    -0.247567, 0.247619,
    -0.218036, 0.217981,
    -0.151500, 0.151476,
    0.352272, -0.352283,
    -0.276351, 0.276212,
    0.145317, -0.144993,
    0.013599, -0.013653,
    0.119327, -0.119477,
};

float Cg_init[2] = {
    -0.092457, -0.092428
};

float xstd_init[12] = {
    0.001051, 0.000082, 0.013258, 0.080005, 0.003050, 0.000830, 0.090030, 0.180747, 0.000866, 0.000110, 0.019904, 0.075393
};

float xmean_init[12] = {
    0.006478, -0.007687, 0.005439, 0.145414, 0.008517, -0.006872, 0.103334, 0.433045, 0.004315, -0.007720, 0.010777, 0.125301
};

