// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_11\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 69.23%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_24.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-17 12:41:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.735037, 0.735086,
    0.301630, -0.301663,
    0.473722, -0.473755,
    0.808627, -0.808625,
    -0.733902, 0.733833,
    0.365471, -0.365370,
    -0.061742, 0.061743,
    -0.037812, 0.037776,
    0.287297, -0.287225,
    -0.137232, 0.137078,
    -0.535341, 0.535389,
    -0.081585, 0.081630,
};

float Cg_init[2] = {
    -0.403570, -0.403574
};

float xstd_init[12] = {
    0.004054, 0.001748, 0.148934, 0.207266, 0.001155, 0.000202, 0.030333, 0.084815, 0.000703, 0.000179, 0.029928, 0.110953
};

float xmean_init[12] = {
    0.010285, -0.005763, 0.245715, 0.685934, 0.003446, -0.007753, 0.010696, 0.081392, 0.003549, -0.007724, 0.013138, 0.124762
};

