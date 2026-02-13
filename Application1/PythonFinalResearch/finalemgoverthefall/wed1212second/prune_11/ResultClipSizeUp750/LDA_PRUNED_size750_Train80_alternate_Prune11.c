// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_11\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.10%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 17:05:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.493965, 0.494158,
    -0.083119, 0.082934,
    -0.133755, 0.133782,
    0.257091, -0.257032,
    1.890360, -1.890867,
    -1.546472, 1.547185,
    0.041264, -0.041417,
    0.198199, -0.198352,
    -0.503137, 0.503171,
    -0.588344, 0.588318,
    0.531969, -0.531993,
    1.325023, -1.325036,
};

float Cg_init[2] = {
    -0.689833, -0.690021
};

float xstd_init[12] = {
    0.000930, 0.000079, 0.008483, 0.064137, 0.000700, 0.000110, 0.014023, 0.051018, 0.003296, 0.000975, 0.116288, 0.210607
};

float xmean_init[12] = {
    0.005617, -0.007753, 0.002358, 0.094830, 0.002363, -0.007855, 0.004490, 0.046191, 0.008809, -0.006637, 0.132155, 0.464082
};

