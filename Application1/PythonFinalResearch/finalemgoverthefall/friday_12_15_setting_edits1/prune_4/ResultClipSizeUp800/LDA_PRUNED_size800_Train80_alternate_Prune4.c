// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.48%
// test_accuracy: 71.25%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:13:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.553535, 0.553546,
    0.041407, -0.041441,
    0.505797, -0.505802,
    0.311591, -0.311578,
    -0.371514, 0.371352,
    0.122002, -0.121813,
    -0.008507, 0.008497,
    0.170993, -0.170999,
    0.207900, -0.207716,
    -0.274149, 0.273887,
    -0.302476, 0.302543,
    0.296068, -0.296030,
};

float Cg_init[2] = {
    -0.217735, -0.217720
};

float xstd_init[12] = {
    0.004221, 0.001876, 0.342822, 0.121714, 0.001000, 0.000178, 0.045329, 0.129744, 0.000638, 0.000156, 0.046618, 0.138418
};

float xmean_init[12] = {
    0.010171, -0.005778, 0.428810, 1.037333, 0.003342, -0.007769, 0.010317, 0.616952, 0.003508, -0.007736, 0.014683, 0.696286
};

