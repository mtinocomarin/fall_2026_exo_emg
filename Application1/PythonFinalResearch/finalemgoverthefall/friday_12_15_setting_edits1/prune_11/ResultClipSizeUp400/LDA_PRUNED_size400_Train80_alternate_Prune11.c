// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.41%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 13:16:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.733319, 0.733315,
    0.071667, -0.071659,
    0.702420, -0.702416,
    0.558294, -0.558293,
    -0.561534, 0.561553,
    0.050317, -0.050339,
    -0.020952, 0.020949,
    0.311966, -0.311954,
    -0.161786, 0.161679,
    -0.061041, 0.061180,
    -0.419857, 0.419817,
    0.380767, -0.380761,
};

float Cg_init[2] = {
    -0.460250, -0.460246
};

float xstd_init[12] = {
    0.004541, 0.001934, 0.338623, 0.123965, 0.001226, 0.000208, 0.054988, 0.134271, 0.000709, 0.000174, 0.055841, 0.145246
};

float xmean_init[12] = {
    0.010689, -0.005673, 0.453968, 1.033469, 0.003521, -0.007741, 0.015873, 0.620135, 0.003572, -0.007728, 0.018821, 0.691836
};

