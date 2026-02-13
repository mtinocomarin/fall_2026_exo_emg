// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_2\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.58%
// test_accuracy: 87.50%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 12:36:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.403182, 1.403202,
    0.488951, -0.488951,
    0.299178, -0.299197,
    1.033989, -1.033970,
    0.140782, -0.140726,
    -0.234338, 0.234257,
    -0.000013, 0.000006,
    -0.351851, 0.351873,
    -0.043309, 0.043254,
    0.148146, -0.148068,
    -0.446892, 0.446881,
    -0.152556, 0.152524,
};

float Cg_init[2] = {
    -0.448627, -0.448627
};

float xstd_init[12] = {
    0.004649, 0.002160, 0.142904, 0.190044, 0.001493, 0.000272, 0.037065, 0.099707, 0.000646, 0.000161, 0.030370, 0.104780
};

float xmean_init[12] = {
    0.011123, -0.005453, 0.252223, 0.702667, 0.003588, -0.007722, 0.012444, 0.085167, 0.003551, -0.007727, 0.013111, 0.124500
};

