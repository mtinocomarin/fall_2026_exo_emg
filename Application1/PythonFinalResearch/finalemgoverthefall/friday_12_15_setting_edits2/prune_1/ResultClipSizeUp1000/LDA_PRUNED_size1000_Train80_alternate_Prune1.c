// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_1\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.97%
// test_accuracy: 67.76%
// prune_trials_per_label: 1
// removed_trials: {'act1': ['act1\\trial_33.txt'], 'act2': ['act2\\trial_11.txt']}
// generated: 2025-12-17 12:36:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.674292, 0.674346,
    0.156638, -0.156616,
    0.317650, -0.317667,
    0.353803, -0.353804,
    -0.251507, 0.252165,
    0.148167, -0.149047,
    -0.105720, 0.105784,
    0.049757, -0.049633,
    0.187608, -0.187862,
    -0.036171, 0.036779,
    -0.349637, 0.349508,
    0.023204, -0.023510,
};

float Cg_init[2] = {
    -0.129092, -0.129121
};

float xstd_init[12] = {
    0.003994, 0.001821, 0.149029, 0.202403, 0.000870, 0.000154, 0.022060, 0.073126, 0.000615, 0.000146, 0.027465, 0.098158
};

float xmean_init[12] = {
    0.010005, -0.005840, 0.237986, 0.679016, 0.003266, -0.007784, 0.006338, 0.067980, 0.003468, -0.007748, 0.011432, 0.108625
};

