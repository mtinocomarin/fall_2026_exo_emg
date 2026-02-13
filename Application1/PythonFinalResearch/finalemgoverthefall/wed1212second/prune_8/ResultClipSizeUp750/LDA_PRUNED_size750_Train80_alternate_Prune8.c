// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.12%
// test_accuracy: 75.45%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 17:03:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.344984, 0.345199,
    -0.069596, 0.069284,
    -0.054171, 0.054207,
    0.171097, -0.170972,
    1.575758, -1.576118,
    -1.207771, 1.208319,
    -0.061422, 0.061309,
    0.151548, -0.151682,
    -0.517167, 0.517126,
    -0.556869, 0.556944,
    0.592576, -0.592645,
    1.101442, -1.101421,
};

float Cg_init[2] = {
    -0.549324, -0.549448
};

float xstd_init[12] = {
    0.000909, 0.000076, 0.008499, 0.063848, 0.000676, 0.000105, 0.013446, 0.049576, 0.003362, 0.001022, 0.118847, 0.212064
};

float xmean_init[12] = {
    0.005536, -0.007758, 0.002262, 0.090953, 0.002353, -0.007857, 0.004167, 0.044941, 0.008955, -0.006597, 0.133175, 0.469286
};

