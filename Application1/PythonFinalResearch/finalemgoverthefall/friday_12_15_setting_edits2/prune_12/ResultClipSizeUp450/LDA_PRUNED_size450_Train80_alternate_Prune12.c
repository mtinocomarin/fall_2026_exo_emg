// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.56%
// test_accuracy: 77.34%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_28.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 12:41:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.429487, 1.429501,
    0.344077, -0.344081,
    0.079562, -0.079586,
    1.731642, -1.731623,
    -0.580644, 0.580540,
    0.297984, -0.297887,
    -0.053030, 0.053053,
    -0.300936, 0.300919,
    0.240472, -0.240462,
    -0.088467, 0.088442,
    -0.781912, 0.781927,
    0.123083, -0.123081,
};

float Cg_init[2] = {
    -0.645152, -0.645150
};

float xstd_init[12] = {
    0.004353, 0.001868, 0.150086, 0.207365, 0.001377, 0.000238, 0.035953, 0.093107, 0.000642, 0.000158, 0.026235, 0.099583
};

float xmean_init[12] = {
    0.010694, -0.005587, 0.246167, 0.692000, 0.003545, -0.007736, 0.012750, 0.083625, 0.003519, -0.007734, 0.011667, 0.115625
};

