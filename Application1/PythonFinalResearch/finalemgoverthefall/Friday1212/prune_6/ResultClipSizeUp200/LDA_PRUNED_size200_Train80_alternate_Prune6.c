// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.46%
// test_accuracy: 81.25%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:48:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.420826, 0.420875,
    -0.676623, 0.676595,
    1.089616, -1.089581,
    0.272814, -0.272854,
    1.060992, -1.061033,
    -1.424242, 1.424400,
    -0.054697, 0.054585,
    0.389233, -0.389234,
    1.380487, -1.380287,
    -1.065186, 1.064734,
    -0.371065, 0.371186,
    0.708004, -0.707831,
};

float Cg_init[2] = {
    -0.777034, -0.776976
};

float xstd_init[12] = {
    0.003198, 0.001098, 0.095375, 0.159729, 0.001519, 0.000485, 0.026427, 0.076701, 0.000531, 0.000100, 0.017791, 0.063933
};

float xmean_init[12] = {
    0.009586, -0.006307, 0.166496, 0.565897, 0.003112, -0.007737, 0.006325, 0.044615, 0.003142, -0.007802, 0.004274, 0.067179
};

