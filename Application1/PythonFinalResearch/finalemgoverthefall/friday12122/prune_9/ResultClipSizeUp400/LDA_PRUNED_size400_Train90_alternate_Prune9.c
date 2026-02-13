// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.51%
// test_accuracy: 80.36%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 16:06:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.206431, 1.206432,
    -0.024898, 0.024907,
    0.809190, -0.809211,
    0.844717, -0.844705,
    1.240698, -1.240616,
    -1.630106, 1.629992,
    0.088225, -0.088205,
    -0.011427, 0.011439,
    -0.435538, 0.435531,
    0.713662, -0.713685,
    -0.541665, 0.541680,
    0.065109, -0.065109,
};

float Cg_init[2] = {
    -0.541061, -0.541059
};

float xstd_init[12] = {
    0.003764, 0.001395, 0.100891, 0.168271, 0.001771, 0.000546, 0.031816, 0.088152, 0.001210, 0.000094, 0.018675, 0.067577
};

float xmean_init[12] = {
    0.009916, -0.006221, 0.169454, 0.581799, 0.003372, -0.007680, 0.009030, 0.057460, 0.003256, -0.007805, 0.005150, 0.067831
};

