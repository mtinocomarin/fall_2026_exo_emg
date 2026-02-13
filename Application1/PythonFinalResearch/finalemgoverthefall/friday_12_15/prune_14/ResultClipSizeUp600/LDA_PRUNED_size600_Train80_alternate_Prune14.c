// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.12%
// test_accuracy: 72.73%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_17.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_27.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_11.txt']}
// generated: 2025-12-12 12:47:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.916750, 0.916755,
    0.253829, -0.253827,
    0.543517, -0.543542,
    0.932444, -0.932437,
    -0.748274, 0.748134,
    0.502055, -0.501895,
    -0.068344, 0.068355,
    -0.201457, 0.201433,
    0.315919, -0.315844,
    -0.101435, 0.101287,
    -0.549149, 0.549192,
    -0.046855, 0.046898,
};

float Cg_init[2] = {
    -0.477644, -0.477643
};

float xstd_init[12] = {
    0.004127, 0.001768, 0.143076, 0.205603, 0.001273, 0.000227, 0.032784, 0.087494, 0.000648, 0.000160, 0.026992, 0.102631
};

float xmean_init[12] = {
    0.010519, -0.005655, 0.250034, 0.692222, 0.003510, -0.007740, 0.011448, 0.084546, 0.003556, -0.007727, 0.012593, 0.123839
};

