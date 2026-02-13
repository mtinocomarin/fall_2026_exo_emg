// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.94%
// test_accuracy: 70.22%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_26.txt', 'act2\\trial_3.txt', 'act2\\trial_10.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 13:17:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.500363, 0.500383,
    0.058113, -0.058123,
    0.784560, -0.784566,
    0.351752, -0.351751,
    -0.808827, 0.808915,
    0.355938, -0.356032,
    0.077698, -0.077700,
    0.232640, -0.232636,
    0.373527, -0.373543,
    -0.505195, 0.505214,
    -0.322489, 0.322488,
    0.459095, -0.459110,
};

float Cg_init[2] = {
    -0.390289, -0.390298
};

float xstd_init[12] = {
    0.003763, 0.001579, 0.333919, 0.123093, 0.001063, 0.000191, 0.049224, 0.128291, 0.000657, 0.000163, 0.050140, 0.137257
};

float xmean_init[12] = {
    0.010078, -0.005864, 0.439215, 1.038529, 0.003385, -0.007763, 0.011667, 0.615823, 0.003499, -0.007738, 0.014216, 0.695942
};

