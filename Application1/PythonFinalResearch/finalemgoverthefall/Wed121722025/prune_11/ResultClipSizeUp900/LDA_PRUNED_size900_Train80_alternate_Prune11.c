// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.99%
// test_accuracy: 54.04%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_12.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:47:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.378426, 0.378356,
    0.223428, -0.223281,
    -0.037505, 0.037496,
    -0.107514, 0.107426,
    -0.411631, 0.411722,
    -0.199861, 0.199773,
    -0.090871, 0.090869,
    0.301856, -0.301871,
    -0.560649, 0.560635,
    0.344579, -0.344532,
    0.037057, -0.037051,
    0.104565, -0.104600,
};

float Cg_init[2] = {
    -0.185784, -0.185769
};

float xstd_init[12] = {
    0.001073, 0.000082, 0.012695, 0.080654, 0.003215, 0.000883, 0.092047, 0.183738, 0.000869, 0.000116, 0.019805, 0.077638
};

float xmean_init[12] = {
    0.006549, -0.007684, 0.004930, 0.147283, 0.008453, -0.006879, 0.101027, 0.428516, 0.004395, -0.007710, 0.011055, 0.129580
};

