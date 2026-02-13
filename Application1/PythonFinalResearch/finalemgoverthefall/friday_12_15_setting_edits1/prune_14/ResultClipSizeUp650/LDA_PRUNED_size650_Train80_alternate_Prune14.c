// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.27%
// test_accuracy: 67.71%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_19.txt', 'act1\\trial_30.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-12 13:18:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.524958, 0.524971,
    -0.009497, 0.009496,
    0.822663, -0.822661,
    0.477164, -0.477170,
    -0.899836, 0.899796,
    0.227821, -0.227797,
    0.183423, -0.183412,
    0.204724, -0.204720,
    0.228846, -0.228988,
    -0.294431, 0.294663,
    -0.344338, 0.344263,
    0.653326, -0.653365,
};

float Cg_init[2] = {
    -0.497098, -0.497107
};

float xstd_init[12] = {
    0.004191, 0.001826, 0.343160, 0.127569, 0.001147, 0.000208, 0.050785, 0.136322, 0.000601, 0.000143, 0.044547, 0.138586
};

float xmean_init[12] = {
    0.010418, -0.005702, 0.447067, 1.035185, 0.003449, -0.007748, 0.014660, 0.620000, 0.003506, -0.007741, 0.012654, 0.701204
};

