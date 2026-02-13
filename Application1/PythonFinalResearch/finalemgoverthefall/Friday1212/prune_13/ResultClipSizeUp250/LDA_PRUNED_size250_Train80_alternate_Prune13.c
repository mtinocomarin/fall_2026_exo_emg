// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.74%
// test_accuracy: 78.12%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:52:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.987829, 1.987809,
    0.569335, -0.569339,
    1.003411, -1.003412,
    1.164325, -1.164305,
    2.386631, -2.386678,
    -1.126954, 1.127016,
    -0.831862, 0.831855,
    -0.876631, 0.876630,
    0.964046, -0.964103,
    -1.091545, 1.091672,
    -0.391507, 0.391474,
    0.706383, -0.706421,
};

float Cg_init[2] = {
    -1.053650, -1.053664
};

float xstd_init[12] = {
    0.004055, 0.001502, 0.101040, 0.174687, 0.001875, 0.000591, 0.039464, 0.100674, 0.000576, 0.000105, 0.022891, 0.068629
};

float xmean_init[12] = {
    0.010170, -0.006097, 0.174210, 0.578947, 0.003369, -0.007678, 0.010877, 0.056053, 0.003160, -0.007800, 0.005614, 0.070000
};

