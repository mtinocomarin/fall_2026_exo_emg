// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.50%
// test_accuracy: 71.71%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:13:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.596353, 0.596404,
    0.030271, -0.030305,
    0.556065, -0.556091,
    0.202061, -0.202060,
    -0.320900, 0.320957,
    0.138976, -0.139047,
    -0.020566, 0.020566,
    0.178102, -0.178090,
    0.278153, -0.278158,
    -0.288695, 0.288706,
    -0.245520, 0.245512,
    0.279006, -0.278999,
};

float Cg_init[2] = {
    -0.182196, -0.182200
};

float xstd_init[12] = {
    0.004025, 0.001794, 0.339709, 0.122524, 0.000901, 0.000159, 0.040490, 0.131311, 0.000612, 0.000148, 0.043602, 0.138726
};

float xmean_init[12] = {
    0.009983, -0.005848, 0.417419, 1.039323, 0.003281, -0.007781, 0.008145, 0.615338, 0.003463, -0.007748, 0.011967, 0.685075
};

