// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.35%
// test_accuracy: 52.30%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_12.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 13:48:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.442392, 0.442243,
    0.297262, -0.296945,
    -0.027611, 0.027578,
    -0.116438, 0.116266,
    -0.300011, 0.300048,
    -0.283982, 0.283960,
    -0.222968, 0.222960,
    0.358366, -0.358374,
    -0.552893, 0.552913,
    0.346711, -0.346758,
    0.056926, -0.056890,
    0.169092, -0.169088,
};

float Cg_init[2] = {
    -0.210303, -0.210277
};

float xstd_init[12] = {
    0.001092, 0.000083, 0.013532, 0.080999, 0.003088, 0.000843, 0.087385, 0.182234, 0.000863, 0.000115, 0.019910, 0.076842
};

float xmean_init[12] = {
    0.006646, -0.007680, 0.005466, 0.150527, 0.008318, -0.006913, 0.096805, 0.424599, 0.004401, -0.007709, 0.010785, 0.130859
};

