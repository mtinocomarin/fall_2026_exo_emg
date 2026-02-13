// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_2\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 76.20%
// test_accuracy: 77.27%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 16:02:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.506653, 0.506665,
    -0.269865, 0.269875,
    0.312092, -0.312123,
    0.589696, -0.589689,
    0.641279, -0.641328,
    -0.800677, 0.800759,
    0.017711, -0.017730,
    -0.013920, 0.013903,
    -0.348496, 0.348535,
    0.290310, -0.290356,
    -0.274444, 0.274467,
    0.118483, -0.118482,
};

float Cg_init[2] = {
    -0.237623, -0.237637
};

float xstd_init[12] = {
    0.003865, 0.001472, 0.105112, 0.165956, 0.001452, 0.000422, 0.024177, 0.072578, 0.001553, 0.000086, 0.015113, 0.065220
};

float xmean_init[12] = {
    0.009876, -0.006222, 0.171159, 0.585188, 0.003122, -0.007745, 0.005847, 0.047273, 0.003208, -0.007810, 0.004029, 0.066043
};

