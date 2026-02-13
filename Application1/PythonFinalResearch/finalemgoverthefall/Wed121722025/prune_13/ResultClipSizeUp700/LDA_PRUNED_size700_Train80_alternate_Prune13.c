// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.15%
// test_accuracy: 57.21%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 13:48:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.896219, 0.896347,
    0.435604, -0.435873,
    -0.101281, 0.101316,
    -0.254347, 0.254485,
    -0.173536, 0.173541,
    -0.469976, 0.469999,
    0.043182, -0.043213,
    0.331400, -0.331375,
    -0.820095, 0.820176,
    0.410950, -0.411070,
    0.029101, -0.029088,
    0.071653, -0.071631,
};

float Cg_init[2] = {
    -0.330676, -0.330715
};

float xstd_init[12] = {
    0.001082, 0.000080, 0.011021, 0.080650, 0.003119, 0.000844, 0.092059, 0.187957, 0.000879, 0.000120, 0.018377, 0.074840
};

float xmean_init[12] = {
    0.006601, -0.007685, 0.003941, 0.147045, 0.008399, -0.006894, 0.102780, 0.429879, 0.004400, -0.007709, 0.009663, 0.130527
};

