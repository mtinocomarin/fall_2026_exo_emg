// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.23%
// test_accuracy: 73.56%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 13:17:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.692158, 0.692138,
    0.272059, -0.272076,
    0.849000, -0.848968,
    0.532403, -0.532389,
    -0.722381, 0.722452,
    0.200852, -0.200928,
    -0.036880, 0.036879,
    0.263967, -0.263953,
    0.374391, -0.374218,
    -0.595494, 0.595238,
    -0.385739, 0.385805,
    0.563364, -0.563345,
};

float Cg_init[2] = {
    -0.544263, -0.544233
};

float xstd_init[12] = {
    0.004007, 0.001674, 0.339497, 0.124759, 0.001092, 0.000193, 0.050303, 0.130980, 0.000692, 0.000183, 0.050572, 0.138311
};

float xmean_init[12] = {
    0.010125, -0.005839, 0.435491, 1.036842, 0.003434, -0.007752, 0.014170, 0.614493, 0.003538, -0.007726, 0.015385, 0.704049
};

