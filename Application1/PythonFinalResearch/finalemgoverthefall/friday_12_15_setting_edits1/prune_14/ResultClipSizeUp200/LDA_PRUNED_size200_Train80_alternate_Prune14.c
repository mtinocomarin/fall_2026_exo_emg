// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.52%
// test_accuracy: 87.50%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-12 13:17:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.385830, 1.385825,
    0.216038, -0.216029,
    1.297507, -1.297516,
    0.535707, -0.535700,
    0.388683, -0.388687,
    -0.652586, 0.652592,
    -0.310326, 0.310326,
    0.471055, -0.471057,
    -0.071571, 0.071568,
    -0.270367, 0.270366,
    -0.554823, 0.554825,
    0.403345, -0.403340,
};

float Cg_init[2] = {
    -0.700852, -0.700851
};

float xstd_init[12] = {
    0.004068, 0.001830, 0.316297, 0.114429, 0.001375, 0.000233, 0.062041, 0.149999, 0.000718, 0.000177, 0.045686, 0.150049
};

float xmean_init[12] = {
    0.010440, -0.005829, 0.395679, 1.037778, 0.003551, -0.007742, 0.014815, 0.617778, 0.003583, -0.007724, 0.016667, 0.691111
};

