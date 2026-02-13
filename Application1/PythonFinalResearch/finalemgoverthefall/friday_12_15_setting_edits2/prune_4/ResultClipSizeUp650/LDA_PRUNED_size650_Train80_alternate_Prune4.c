// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.27%
// test_accuracy: 71.88%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-17 12:38:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.658220, 0.658260,
    0.035154, -0.035189,
    0.303982, -0.304019,
    0.540254, -0.540237,
    -0.451581, 0.451563,
    0.186412, -0.186375,
    0.019779, -0.019776,
    -0.055764, 0.055736,
    0.291264, -0.291168,
    -0.165670, 0.165571,
    -0.406246, 0.406266,
    0.049119, -0.049127,
};

float Cg_init[2] = {
    -0.214077, -0.214077
};

float xstd_init[12] = {
    0.004658, 0.002188, 0.152952, 0.206018, 0.001104, 0.000195, 0.028447, 0.083634, 0.000661, 0.000162, 0.029478, 0.105428
};

float xmean_init[12] = {
    0.010553, -0.005577, 0.248810, 0.689286, 0.003389, -0.007760, 0.009167, 0.078036, 0.003529, -0.007732, 0.013095, 0.118810
};

