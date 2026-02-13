// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.19%
// test_accuracy: 69.49%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-12 13:15:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.738247, 0.738242,
    0.107381, -0.107370,
    0.794050, -0.794062,
    0.242205, -0.242201,
    -0.489825, 0.489817,
    0.228255, -0.228238,
    0.010508, -0.010515,
    0.191090, -0.191090,
    0.266258, -0.266233,
    -0.302603, 0.302567,
    -0.315402, 0.315416,
    0.355679, -0.355679,
};

float Cg_init[2] = {
    -0.284451, -0.284453
};

float xstd_init[12] = {
    0.004003, 0.001745, 0.341802, 0.121954, 0.000996, 0.000177, 0.045875, 0.130322, 0.000638, 0.000155, 0.047924, 0.137449
};

float xmean_init[12] = {
    0.010201, -0.005784, 0.438317, 1.042059, 0.003345, -0.007770, 0.010458, 0.618725, 0.003506, -0.007738, 0.013971, 0.695392
};

