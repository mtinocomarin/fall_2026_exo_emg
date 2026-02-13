// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.93%
// test_accuracy: 67.71%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-12 13:13:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.577830, 0.577864,
    -0.033822, 0.033775,
    0.565656, -0.565656,
    0.329630, -0.329627,
    -0.321074, 0.321117,
    0.057832, -0.057875,
    -0.022690, 0.022688,
    0.137313, -0.137322,
    0.193390, -0.193294,
    -0.327917, 0.327799,
    -0.235905, 0.235929,
    0.364183, -0.364176,
};

float Cg_init[2] = {
    -0.246905, -0.246902
};

float xstd_init[12] = {
    0.004533, 0.002110, 0.349202, 0.123564, 0.001054, 0.000192, 0.043856, 0.136721, 0.000662, 0.000163, 0.049890, 0.140399
};

float xmean_init[12] = {
    0.010509, -0.005617, 0.447736, 1.036173, 0.003393, -0.007759, 0.011420, 0.621667, 0.003549, -0.007729, 0.015638, 0.703519
};

