// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.31%
// test_accuracy: 60.94%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 13:43:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.608286, 0.608191,
    0.173521, -0.173333,
    0.080498, -0.080520,
    0.030097, -0.030192,
    -0.538200, 0.538211,
    -0.060116, 0.060118,
    0.064258, -0.064259,
    0.057843, -0.057848,
    -0.805992, 0.805957,
    0.468505, -0.468448,
    -0.265083, 0.265063,
    0.358662, -0.358673,
};

float Cg_init[2] = {
    -0.273507, -0.273493
};

float xstd_init[12] = {
    0.001030, 0.000080, 0.011211, 0.079491, 0.002398, 0.000668, 0.075512, 0.157125, 0.000896, 0.000123, 0.018709, 0.069541
};

float xmean_init[12] = {
    0.006403, -0.007692, 0.004444, 0.137407, 0.008571, -0.006903, 0.100123, 0.449630, 0.004375, -0.007709, 0.009630, 0.134445
};

