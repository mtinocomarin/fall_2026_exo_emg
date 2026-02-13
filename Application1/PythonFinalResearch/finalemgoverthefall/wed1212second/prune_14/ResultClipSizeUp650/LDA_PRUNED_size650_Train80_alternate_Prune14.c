// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_14\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.20%
// test_accuracy: 75.00%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_16.txt', 'act2\\trial_27.txt', 'act2\\trial_30.txt', 'act2\\trial_37.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-17 17:06:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.617885, 0.617868,
    -0.213429, 0.213541,
    -0.189176, 0.189163,
    0.324089, -0.324149,
    2.400980, -2.401139,
    -1.937153, 1.937339,
    0.021495, -0.021520,
    0.250708, -0.250746,
    -0.643468, 0.643526,
    -0.520137, 0.520066,
    0.340817, -0.340827,
    1.404479, -1.404465,
};

float Cg_init[2] = {
    -0.814173, -0.814229
};

float xstd_init[12] = {
    0.000938, 0.000083, 0.008816, 0.065107, 0.000721, 0.000111, 0.014491, 0.053279, 0.003515, 0.001014, 0.117965, 0.210954
};

float xmean_init[12] = {
    0.005696, -0.007748, 0.002531, 0.099260, 0.002390, -0.007853, 0.004753, 0.048889, 0.008997, -0.006601, 0.136420, 0.471296
};

