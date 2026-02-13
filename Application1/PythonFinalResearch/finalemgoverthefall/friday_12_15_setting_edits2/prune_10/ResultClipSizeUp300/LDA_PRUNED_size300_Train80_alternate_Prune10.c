// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_10\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.36%
// test_accuracy: 80.00%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-17 12:40:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.600581, 1.600590,
    0.533994, -0.533994,
    0.627621, -0.627643,
    1.330076, -1.330055,
    -0.247117, 0.247224,
    -0.117079, 0.116942,
    0.150579, -0.150583,
    -0.402317, 0.402343,
    0.182596, -0.182630,
    -0.124401, 0.124484,
    -0.541245, 0.541224,
    -0.181267, 0.181224,
};

float Cg_init[2] = {
    -0.696295, -0.696298
};

float xstd_init[12] = {
    0.004488, 0.001906, 0.146119, 0.201324, 0.001563, 0.000286, 0.039264, 0.101118, 0.000639, 0.000141, 0.026276, 0.095463
};

float xmean_init[12] = {
    0.011139, -0.005510, 0.255637, 0.706182, 0.003649, -0.007710, 0.014182, 0.088727, 0.003543, -0.007739, 0.012242, 0.116546
};

