// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.61%
// test_accuracy: 76.39%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 16:09:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.037504, 1.037526,
    -0.171446, 0.171486,
    0.632200, -0.632235,
    1.002421, -1.002432,
    1.252357, -1.252249,
    -1.548403, 1.548248,
    0.010228, -0.010214,
    -0.183572, 0.183604,
    1.057577, -1.057383,
    0.098603, -0.099116,
    -0.683292, 0.683476,
    -0.034150, 0.034319,
};

float Cg_init[2] = {
    -0.815235, -0.815229
};

float xstd_init[12] = {
    0.003660, 0.001331, 0.101813, 0.170029, 0.001709, 0.000539, 0.030783, 0.087130, 0.000523, 0.000082, 0.018024, 0.063086
};

float xmean_init[12] = {
    0.009875, -0.006255, 0.167601, 0.588599, 0.003345, -0.007684, 0.008953, 0.057295, 0.003117, -0.007812, 0.004960, 0.066280
};

