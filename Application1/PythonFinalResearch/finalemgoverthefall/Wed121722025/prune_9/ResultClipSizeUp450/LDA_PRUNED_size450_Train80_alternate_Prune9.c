// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.89%
// test_accuracy: 55.47%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:45:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.676015, 0.675959,
    0.354179, -0.353986,
    0.145555, -0.145578,
    -0.187135, 0.187019,
    -0.681341, 0.681308,
    -0.082613, 0.082634,
    0.357639, -0.357623,
    0.130919, -0.130888,
    -0.850296, 0.850415,
    0.369606, -0.369821,
    -0.021877, 0.021947,
    0.220039, -0.219996,
};

float Cg_init[2] = {
    -0.312664, -0.312670
};

float xstd_init[12] = {
    0.001051, 0.000081, 0.011553, 0.081428, 0.002971, 0.000789, 0.084105, 0.177014, 0.000855, 0.000114, 0.018366, 0.071139
};

float xmean_init[12] = {
    0.006512, -0.007682, 0.004420, 0.146305, 0.008643, -0.006863, 0.101594, 0.444565, 0.004339, -0.007717, 0.009420, 0.127283
};

