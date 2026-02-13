// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.26%
// test_accuracy: 78.12%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 12:38:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.883102, 0.883101,
    0.176612, -0.176605,
    0.175362, -0.175386,
    0.900626, -0.900602,
    -0.542975, 0.543142,
    0.183919, -0.184092,
    0.031180, -0.031204,
    -0.116387, 0.116411,
    0.247440, -0.247457,
    -0.032012, 0.032009,
    -0.601615, 0.601632,
    0.007890, -0.007905,
};

float Cg_init[2] = {
    -0.357117, -0.357119
};

float xstd_init[12] = {
    0.004612, 0.002054, 0.146644, 0.205817, 0.001283, 0.000226, 0.033143, 0.093834, 0.000685, 0.000172, 0.030988, 0.105590
};

float xmean_init[12] = {
    0.010584, -0.005638, 0.240618, 0.677963, 0.003479, -0.007743, 0.011420, 0.082130, 0.003528, -0.007732, 0.013272, 0.116852
};

