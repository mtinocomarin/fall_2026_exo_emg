// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.21%
// test_accuracy: 72.32%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_28.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:53:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.639304, 0.639308,
    -0.299517, 0.299516,
    0.632711, -0.632752,
    0.779309, -0.779274,
    1.174259, -1.174327,
    -0.888785, 0.888902,
    -0.341136, 0.341102,
    -0.120573, 0.120552,
    -0.894472, 0.894434,
    0.616280, -0.616143,
    -0.338949, 0.338918,
    0.113049, -0.113120,
};

float Cg_init[2] = {
    -0.454066, -0.454066
};

float xstd_init[12] = {
    0.003163, 0.001069, 0.101721, 0.174655, 0.001507, 0.000433, 0.023878, 0.075829, 0.001887, 0.000086, 0.012927, 0.068495
};

float xmean_init[12] = {
    0.009522, -0.006366, 0.170376, 0.583158, 0.003219, -0.007742, 0.006667, 0.052105, 0.003327, -0.007807, 0.003509, 0.069173
};

