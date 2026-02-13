// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.14%
// test_accuracy: 54.17%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 13:43:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.396805, 0.396730,
    0.247036, -0.246865,
    -0.045031, 0.045018,
    -0.129809, 0.129704,
    -0.273804, 0.273897,
    -0.250078, 0.249994,
    -0.042250, 0.042246,
    0.312631, -0.312655,
    -0.404301, 0.404270,
    0.233139, -0.233061,
    0.002174, -0.002177,
    0.077028, -0.077076,
};

float Cg_init[2] = {
    -0.128907, -0.128889
};

float xstd_init[12] = {
    0.001018, 0.000081, 0.012281, 0.080451, 0.003112, 0.000837, 0.090713, 0.183545, 0.000861, 0.000112, 0.019983, 0.075787
};

float xmean_init[12] = {
    0.006493, -0.007687, 0.004905, 0.145235, 0.008560, -0.006870, 0.104132, 0.436544, 0.004369, -0.007712, 0.010996, 0.129828
};

