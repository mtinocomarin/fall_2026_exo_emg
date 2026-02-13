// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.63%
// test_accuracy: 63.28%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:13:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.821352, 0.821337,
    0.030497, -0.030489,
    0.688534, -0.688517,
    0.312698, -0.312707,
    -0.306500, 0.306542,
    0.046357, -0.046398,
    -0.034292, 0.034287,
    0.124144, -0.124136,
    0.223153, -0.223184,
    -0.311868, 0.311889,
    -0.264675, 0.264679,
    0.386360, -0.386360,
};

float Cg_init[2] = {
    -0.291282, -0.291281
};

float xstd_init[12] = {
    0.004766, 0.002192, 0.353322, 0.122818, 0.001275, 0.000223, 0.057219, 0.136503, 0.000681, 0.000169, 0.053147, 0.138909
};

float xmean_init[12] = {
    0.010857, -0.005516, 0.458178, 1.033426, 0.003504, -0.007743, 0.016821, 0.629166, 0.003553, -0.007729, 0.015741, 0.700833
};

