// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.15%
// test_accuracy: 64.80%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 12:40:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.623777, 0.623786,
    0.285981, -0.285994,
    0.590763, -0.590801,
    0.511282, -0.511269,
    -0.426575, 0.426337,
    0.221332, -0.221012,
    -0.116116, 0.116111,
    -0.016927, 0.016861,
    0.349474, -0.349284,
    -0.226960, 0.226568,
    -0.436673, 0.436783,
    0.084116, -0.083987,
};

float Cg_init[2] = {
    -0.326373, -0.326361
};

float xstd_init[12] = {
    0.003690, 0.001587, 0.149016, 0.204599, 0.000973, 0.000173, 0.024968, 0.077558, 0.000636, 0.000158, 0.028472, 0.099983
};

float xmean_init[12] = {
    0.009858, -0.005930, 0.238475, 0.676476, 0.003321, -0.007774, 0.007689, 0.071030, 0.003472, -0.007744, 0.011259, 0.109383
};

