// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_14\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.36%
// test_accuracy: 76.56%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt', 'act1\\trial_35.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_28.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_26.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 12:42:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.520046, 1.520058,
    0.300682, -0.300675,
    0.092218, -0.092238,
    1.777885, -1.777870,
    -0.372091, 0.372322,
    0.188449, -0.188701,
    -0.091349, 0.091302,
    -0.390145, 0.390189,
    0.380417, -0.380500,
    -0.088467, 0.088628,
    -0.828152, 0.828117,
    0.134243, -0.134315,
};

float Cg_init[2] = {
    -0.681303, -0.681307
};

float xstd_init[12] = {
    0.004427, 0.001919, 0.152424, 0.207002, 0.001424, 0.000248, 0.037644, 0.095943, 0.000631, 0.000156, 0.026401, 0.099726
};

float xmean_init[12] = {
    0.010991, -0.005464, 0.256945, 0.704583, 0.003574, -0.007730, 0.013796, 0.085694, 0.003539, -0.007732, 0.012037, 0.119445
};

