// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 60.00%
// test_accuracy: 55.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt']}
// generated: 2026-02-13 17:10:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.484884, 0.484883,
    -0.335092, 0.335276,
    0.000000, 0.000000,
    -0.408453, -0.408453,
    0.118033, 0.118033,
    0.854878, 0.854878,
    -0.943932, -0.943932,
    -0.534301, -0.534301,
    -0.562367, -0.562367,
    -0.695435, -0.695435,
    -0.932749, -0.932749,
    -0.667456, -0.667456,
};

float Cg_init[2] = {
    0.935972, -1.297850
};

float xstd_init[12] = {
    0.000225, 0.000015, 1.000000, 0.014465, 0.001818, 0.000623, 0.075542, 0.139798, 0.001656, 0.000449, 0.068051, 0.167390
};

float xmean_init[12] = {
    0.002713, -0.007912, 0.000000, 0.006000, 0.008397, -0.006583, 0.139333, 0.475000, 0.006241, -0.007135, 0.094000, 0.361000
};

