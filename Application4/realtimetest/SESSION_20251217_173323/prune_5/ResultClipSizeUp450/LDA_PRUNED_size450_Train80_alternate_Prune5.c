// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.95%
// test_accuracy: 70.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:08:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.686114, 0.686135,
    1.354252, -1.354309,
    -0.175775, 0.175804,
    -0.402787, 0.402801,
    0.465102, -0.465062,
    -0.298576, 0.298534,
    -1.551256, 1.551273,
    0.535382, -0.535391,
    -0.445076, 0.445087,
    -0.530636, 0.530622,
    0.297528, -0.297526,
    1.304197, -1.304196,
};

float Cg_init[2] = {
    -0.596972, -0.596976
};

float xstd_init[12] = {
    0.001082, 0.000128, 0.027035, 0.091677, 0.003092, 0.000867, 0.061585, 0.152158, 0.006066, 0.002498, 0.159199, 0.241961
};

float xmean_init[12] = {
    0.005479, -0.007716, 0.008690, 0.129107, 0.004428, -0.007498, 0.025238, 0.133929, 0.012208, -0.005547, 0.184048, 0.558571
};

