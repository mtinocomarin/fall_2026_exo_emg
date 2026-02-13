// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_3\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.21%
// test_accuracy: 83.33%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 12:37:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.263049, 1.263057,
    0.292255, -0.292248,
    0.587683, -0.587696,
    0.888369, -0.888356,
    -0.062109, 0.062136,
    -0.011362, 0.011307,
    0.098840, -0.098835,
    -0.481413, 0.481435,
    0.093291, -0.093341,
    -0.445259, 0.445366,
    -0.357949, 0.357927,
    0.126950, -0.126997,
};

float Cg_init[2] = {
    -0.506171, -0.506177
};

float xstd_init[12] = {
    0.004424, 0.001989, 0.135541, 0.177066, 0.001504, 0.000277, 0.036902, 0.099221, 0.000660, 0.000154, 0.024575, 0.102741
};

float xmean_init[12] = {
    0.011030, -0.005535, 0.250422, 0.711954, 0.003614, -0.007720, 0.012414, 0.084828, 0.003561, -0.007733, 0.011801, 0.123908
};

