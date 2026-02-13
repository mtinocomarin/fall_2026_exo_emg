// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.65%
// test_accuracy: 69.49%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_26.txt', 'act2\\trial_3.txt', 'act2\\trial_10.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:16:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.579730, 0.579755,
    0.120295, -0.120321,
    0.777575, -0.777574,
    0.298260, -0.298255,
    -0.790824, 0.790815,
    0.384538, -0.384532,
    0.063934, -0.063933,
    0.236097, -0.236095,
    0.320062, -0.320048,
    -0.411508, 0.411488,
    -0.338598, 0.338604,
    0.411108, -0.411114,
};

float Cg_init[2] = {
    -0.355148, -0.355148
};

float xstd_init[12] = {
    0.003751, 0.001560, 0.330082, 0.122906, 0.001044, 0.000187, 0.048100, 0.128737, 0.000647, 0.000161, 0.049607, 0.138225
};

float xmean_init[12] = {
    0.009998, -0.005905, 0.430252, 1.038991, 0.003360, -0.007765, 0.011111, 0.615014, 0.003487, -0.007741, 0.014379, 0.692045
};

