// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.63%
// test_accuracy: 54.93%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-17 13:45:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.334545, 0.334338,
    0.200482, -0.199993,
    -0.047237, 0.047189,
    -0.036847, 0.036583,
    -0.336808, 0.336888,
    -0.156483, 0.156430,
    -0.162998, 0.162994,
    0.391322, -0.391335,
    -0.468883, 0.468915,
    0.233029, -0.233099,
    0.029896, -0.029849,
    0.096135, -0.096140,
};

float Cg_init[2] = {
    -0.136371, -0.136341
};

float xstd_init[12] = {
    0.001047, 0.000082, 0.013542, 0.080711, 0.003184, 0.000871, 0.093666, 0.187245, 0.000880, 0.000112, 0.020029, 0.076569
};

float xmean_init[12] = {
    0.006559, -0.007682, 0.005558, 0.148969, 0.008469, -0.006871, 0.102934, 0.429727, 0.004341, -0.007716, 0.010863, 0.127411
};

