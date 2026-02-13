// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.57%
// test_accuracy: 73.86%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:13:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.608225, 0.608201,
    0.026410, -0.026430,
    0.510823, -0.510800,
    0.397099, -0.397087,
    -0.502716, 0.502624,
    0.130617, -0.130511,
    0.043319, -0.043317,
    0.256309, -0.256306,
    0.131324, -0.131168,
    -0.187726, 0.187507,
    -0.371073, 0.371134,
    0.273186, -0.273168,
};

float Cg_init[2] = {
    -0.272788, -0.272774
};

float xstd_init[12] = {
    0.004498, 0.002073, 0.343908, 0.120124, 0.001129, 0.000201, 0.050733, 0.133038, 0.000676, 0.000166, 0.047518, 0.142464
};

float xmean_init[12] = {
    0.010521, -0.005621, 0.448051, 1.033441, 0.003422, -0.007756, 0.012554, 0.617272, 0.003545, -0.007730, 0.016017, 0.701429
};

