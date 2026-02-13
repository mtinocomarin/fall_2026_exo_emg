// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.00%
// test_accuracy: 77.78%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:04:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.753856, 0.753794,
    -0.169210, 0.169242,
    0.368366, -0.368376,
    0.751396, -0.751380,
    0.764561, -0.764349,
    -1.000229, 0.999982,
    0.046604, -0.046574,
    0.000471, -0.000469,
    -0.440931, 0.440751,
    0.481527, -0.481182,
    -0.452496, 0.452378,
    0.178670, -0.178827,
};

float Cg_init[2] = {
    -0.338327, -0.338288
};

float xstd_init[12] = {
    0.003885, 0.001447, 0.103750, 0.165939, 0.001592, 0.000474, 0.027137, 0.079068, 0.001505, 0.000089, 0.016814, 0.066142
};

float xmean_init[12] = {
    0.009922, -0.006218, 0.168794, 0.583226, 0.003212, -0.007722, 0.006882, 0.051183, 0.003237, -0.007807, 0.004731, 0.068387
};

