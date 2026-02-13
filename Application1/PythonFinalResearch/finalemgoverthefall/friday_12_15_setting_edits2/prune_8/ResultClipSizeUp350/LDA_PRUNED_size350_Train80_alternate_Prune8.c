// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.97%
// test_accuracy: 81.25%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 12:39:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.172841, 1.172863,
    0.223381, -0.223380,
    0.133202, -0.133235,
    1.562348, -1.562325,
    -0.573737, 0.573519,
    0.168439, -0.168220,
    0.140746, -0.140708,
    -0.353414, 0.353370,
    -0.119461, 0.119440,
    -0.184782, 0.184814,
    -0.427078, 0.427076,
    0.205368, -0.205372,
};

float Cg_init[2] = {
    -0.609830, -0.609828
};

float xstd_init[12] = {
    0.004474, 0.001871, 0.148496, 0.203074, 0.001436, 0.000261, 0.036577, 0.099012, 0.000686, 0.000173, 0.030842, 0.107423
};

float xmean_init[12] = {
    0.010822, -0.005613, 0.245278, 0.687361, 0.003575, -0.007724, 0.013056, 0.089583, 0.003551, -0.007725, 0.012870, 0.119445
};

