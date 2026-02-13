// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.02%
// test_accuracy: 72.16%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:16:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.774511, 0.774470,
    0.265929, -0.265933,
    0.688941, -0.688914,
    0.513924, -0.513913,
    -0.744435, 0.744569,
    0.234922, -0.235056,
    0.053948, -0.053948,
    0.386203, -0.386184,
    0.071597, -0.071459,
    -0.251599, 0.251403,
    -0.342332, 0.342382,
    0.383500, -0.383488,
};

float Cg_init[2] = {
    -0.420275, -0.420258
};

float xstd_init[12] = {
    0.004198, 0.001770, 0.338138, 0.121032, 0.001231, 0.000220, 0.056767, 0.133712, 0.000688, 0.000177, 0.049852, 0.140191
};

float xmean_init[12] = {
    0.010202, -0.005798, 0.429751, 1.033471, 0.003491, -0.007743, 0.015978, 0.616445, 0.003520, -0.007731, 0.015427, 0.697355
};

