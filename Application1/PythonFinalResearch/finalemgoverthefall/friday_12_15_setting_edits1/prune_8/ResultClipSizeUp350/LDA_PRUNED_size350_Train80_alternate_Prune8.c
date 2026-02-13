// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.07%
// test_accuracy: 63.54%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 13:14:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.046283, 1.046293,
    0.047455, -0.047434,
    0.889036, -0.889036,
    0.427006, -0.427018,
    -0.209238, 0.209076,
    -0.051598, 0.051742,
    -0.046382, 0.046401,
    0.109225, -0.109226,
    -0.145333, 0.145198,
    -0.310793, 0.310993,
    -0.140789, 0.140730,
    0.546154, -0.546166,
};

float Cg_init[2] = {
    -0.416212, -0.416218
};

float xstd_init[12] = {
    0.004795, 0.002166, 0.356077, 0.122206, 0.001427, 0.000257, 0.063966, 0.136884, 0.000683, 0.000168, 0.052845, 0.136878
};

float xmean_init[12] = {
    0.011073, -0.005484, 0.469444, 1.039028, 0.003565, -0.007728, 0.018750, 0.629722, 0.003554, -0.007730, 0.015046, 0.705416
};

