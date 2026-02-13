// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.12%
// test_accuracy: 68.09%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_10.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-12 13:15:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.605840, 0.605833,
    0.016436, -0.016466,
    0.711091, -0.711085,
    0.215414, -0.215402,
    -0.487234, 0.487229,
    0.216827, -0.216806,
    0.026241, -0.026245,
    0.225328, -0.225325,
    0.292278, -0.292062,
    -0.321693, 0.321366,
    -0.306580, 0.306682,
    0.339865, -0.339823,
};

float Cg_init[2] = {
    -0.255736, -0.255720
};

float xstd_init[12] = {
    0.003785, 0.001613, 0.329208, 0.122477, 0.000966, 0.000172, 0.044007, 0.130785, 0.000625, 0.000154, 0.046611, 0.139932
};

float xmean_init[12] = {
    0.009969, -0.005892, 0.424257, 1.040778, 0.003317, -0.007774, 0.009458, 0.615789, 0.003476, -0.007744, 0.013196, 0.688467
};

