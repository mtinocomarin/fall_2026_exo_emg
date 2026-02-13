// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_2\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 76.47%
// test_accuracy: 73.75%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 16:02:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.488495, 0.488503,
    -0.321463, 0.321420,
    0.323494, -0.323512,
    0.653994, -0.653966,
    0.617662, -0.617505,
    -0.711989, 0.711839,
    -0.029866, 0.029880,
    -0.031739, 0.031721,
    -0.350524, 0.350278,
    0.264339, -0.263827,
    -0.319552, 0.319403,
    0.153936, -0.154187,
};

float Cg_init[2] = {
    -0.261844, -0.261818
};

float xstd_init[12] = {
    0.003780, 0.001388, 0.103135, 0.167356, 0.001502, 0.000446, 0.026171, 0.074079, 0.001577, 0.000087, 0.015903, 0.066495
};

float xmean_init[12] = {
    0.009842, -0.006256, 0.172118, 0.580588, 0.003144, -0.007740, 0.006549, 0.047059, 0.003216, -0.007810, 0.004157, 0.066059
};

