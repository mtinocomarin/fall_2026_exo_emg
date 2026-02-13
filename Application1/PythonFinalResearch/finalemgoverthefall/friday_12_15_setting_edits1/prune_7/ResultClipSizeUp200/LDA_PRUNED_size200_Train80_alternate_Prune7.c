// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.67%
// test_accuracy: 85.42%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:14:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.328072, 1.328098,
    0.268558, -0.268574,
    1.033283, -1.033279,
    0.632034, -0.632042,
    -0.441041, 0.441146,
    0.160045, -0.160156,
    -0.049618, 0.049620,
    0.267485, -0.267477,
    -0.159283, 0.159169,
    -0.035586, 0.035743,
    -0.454640, 0.454598,
    0.320960, -0.320968,
};

float Cg_init[2] = {
    -0.576533, -0.576540
};

float xstd_init[12] = {
    0.004410, 0.002024, 0.337831, 0.109960, 0.001588, 0.000292, 0.074385, 0.143713, 0.000681, 0.000159, 0.042213, 0.150644
};

float xmean_init[12] = {
    0.011250, -0.005428, 0.471556, 1.048000, 0.003636, -0.007717, 0.020000, 0.624800, 0.003599, -0.007725, 0.014667, 0.698666
};

