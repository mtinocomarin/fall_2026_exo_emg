// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_14\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.91%
// test_accuracy: 79.17%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_26.txt', 'act2\\trial_28.txt', 'act2\\trial_33.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 12:42:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.497370, 2.497459,
    0.525840, -0.525850,
    0.075721, -0.075748,
    3.060162, -3.060178,
    0.414820, -0.415127,
    -0.474849, 0.475075,
    -0.297450, 0.297509,
    -0.564374, 0.564369,
    0.055133, -0.055294,
    -0.124180, 0.124576,
    -0.914729, 0.914608,
    0.378270, -0.378417,
};

float Cg_init[2] = {
    -1.187065, -1.187083
};

float xstd_init[12] = {
    0.004395, 0.001901, 0.156664, 0.208456, 0.001556, 0.000274, 0.040558, 0.099710, 0.000617, 0.000151, 0.026770, 0.099411
};

float xmean_init[12] = {
    0.011378, -0.005348, 0.267778, 0.717407, 0.003637, -0.007715, 0.014815, 0.090556, 0.003525, -0.007735, 0.011235, 0.119630
};

