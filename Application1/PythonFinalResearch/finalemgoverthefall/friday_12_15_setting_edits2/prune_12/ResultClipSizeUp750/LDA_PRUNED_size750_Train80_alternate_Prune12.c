// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.68%
// test_accuracy: 69.64%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 12:41:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.758347, 0.758357,
    0.148449, -0.148470,
    0.577043, -0.577079,
    0.695572, -0.695551,
    -0.442920, 0.442796,
    0.180985, -0.180843,
    -0.046533, 0.046551,
    -0.088074, 0.088048,
    0.400364, -0.400215,
    -0.178068, 0.177831,
    -0.660006, 0.660062,
    0.051980, -0.051927,
};

float Cg_init[2] = {
    -0.376397, -0.376391
};

float xstd_init[12] = {
    0.004082, 0.001782, 0.154266, 0.205680, 0.001139, 0.000195, 0.030162, 0.082823, 0.000673, 0.000173, 0.031052, 0.107160
};

float xmean_init[12] = {
    0.010380, -0.005686, 0.254143, 0.696643, 0.003419, -0.007759, 0.009619, 0.078929, 0.003537, -0.007725, 0.013429, 0.123786
};

