// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.88%
// test_accuracy: 77.78%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-17 12:39:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.939685, 0.939657,
    0.216959, -0.216911,
    0.386832, -0.386852,
    1.017908, -1.017908,
    -0.481206, 0.481168,
    0.161639, -0.161590,
    -0.000045, 0.000046,
    -0.195526, 0.195514,
    0.343516, -0.343520,
    -0.052720, 0.052757,
    -0.592686, 0.592685,
    -0.199392, 0.199359,
};

float Cg_init[2] = {
    -0.453102, -0.453106
};

float xstd_init[12] = {
    0.004349, 0.001886, 0.147931, 0.202669, 0.001273, 0.000228, 0.032351, 0.093677, 0.000696, 0.000176, 0.029738, 0.107912
};

float xmean_init[12] = {
    0.010572, -0.005655, 0.243519, 0.683056, 0.003508, -0.007741, 0.011667, 0.084352, 0.003555, -0.007726, 0.013148, 0.122037
};

