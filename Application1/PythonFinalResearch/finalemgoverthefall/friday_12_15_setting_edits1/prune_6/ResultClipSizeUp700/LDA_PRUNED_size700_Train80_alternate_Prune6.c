// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.96%
// test_accuracy: 74.04%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:14:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.695646, 0.695656,
    -0.062193, 0.062136,
    0.671530, -0.671516,
    0.327910, -0.327894,
    -0.447990, 0.448111,
    0.184222, -0.184341,
    -0.026315, 0.026314,
    0.227224, -0.227212,
    0.260283, -0.260057,
    -0.321269, 0.320917,
    -0.292459, 0.292570,
    0.386034, -0.386001,
};

float Cg_init[2] = {
    -0.279124, -0.279109
};

float xstd_init[12] = {
    0.004621, 0.002171, 0.352733, 0.121013, 0.001077, 0.000192, 0.050137, 0.131298, 0.000664, 0.000163, 0.045602, 0.137766
};

float xmean_init[12] = {
    0.010487, -0.005616, 0.447041, 1.040000, 0.003394, -0.007762, 0.012623, 0.619230, 0.003523, -0.007733, 0.013609, 0.699882
};

