// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.33%
// test_accuracy: 74.38%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 15:53:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.817483, 0.817540,
    -0.329044, 0.329013,
    0.512203, -0.512242,
    1.177275, -1.177257,
    1.134242, -1.134313,
    -0.843514, 0.843642,
    -0.286118, 0.286078,
    -0.291571, 0.291552,
    -0.880399, 0.880498,
    0.559034, -0.559202,
    -0.600172, 0.600238,
    0.271119, -0.271059,
};

float Cg_init[2] = {
    -0.569629, -0.569648
};

float xstd_init[12] = {
    0.003665, 0.001251, 0.105828, 0.180761, 0.001638, 0.000467, 0.024431, 0.078670, 0.002103, 0.000101, 0.020318, 0.070356
};

float xmean_init[12] = {
    0.009754, -0.006281, 0.173408, 0.585444, 0.003261, -0.007735, 0.006074, 0.051222, 0.003371, -0.007801, 0.006222, 0.073556
};

