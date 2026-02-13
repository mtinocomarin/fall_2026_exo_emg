// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.51%
// test_accuracy: 69.64%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-17 12:38:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.609451, 0.609461,
    -0.015208, 0.015212,
    0.369304, -0.369340,
    0.555130, -0.555112,
    -0.389691, 0.389645,
    0.143922, -0.143862,
    -0.023789, 0.023795,
    -0.040035, 0.040009,
    0.289197, -0.289148,
    -0.090837, 0.090849,
    -0.475929, 0.475922,
    0.003551, -0.003599,
};

float Cg_init[2] = {
    -0.221481, -0.221482
};

float xstd_init[12] = {
    0.004447, 0.002118, 0.154078, 0.207429, 0.001050, 0.000185, 0.027063, 0.080137, 0.000640, 0.000158, 0.029513, 0.104707
};

float xmean_init[12] = {
    0.010403, -0.005631, 0.249242, 0.692064, 0.003356, -0.007766, 0.008642, 0.075027, 0.003509, -0.007736, 0.012910, 0.117673
};

