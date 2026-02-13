// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.83%
// test_accuracy: 74.58%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:50:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.775065, 0.775155,
    -0.307579, 0.307536,
    0.559306, -0.559359,
    0.595544, -0.595537,
    1.038305, -1.038337,
    -1.005161, 1.005239,
    -0.208227, 0.208187,
    -0.069317, 0.069306,
    0.684366, -0.684191,
    -0.013853, 0.013422,
    -0.373937, 0.374107,
    0.028310, -0.028184,
};

float Cg_init[2] = {
    -0.495816, -0.495825
};

float xstd_init[12] = {
    0.003605, 0.001378, 0.107650, 0.173262, 0.001251, 0.000382, 0.019477, 0.070064, 0.000517, 0.000076, 0.015268, 0.060847
};

float xmean_init[12] = {
    0.009686, -0.006244, 0.179371, 0.592278, 0.003076, -0.007757, 0.005111, 0.049667, 0.003090, -0.007815, 0.003889, 0.064278
};

