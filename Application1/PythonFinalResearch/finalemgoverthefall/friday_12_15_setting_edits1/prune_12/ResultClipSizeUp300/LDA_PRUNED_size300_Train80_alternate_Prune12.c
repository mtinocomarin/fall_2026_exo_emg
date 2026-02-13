// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.00%
// test_accuracy: 81.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 13:16:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.357816, 1.357820,
    0.421111, -0.421115,
    1.065641, -1.065640,
    0.629708, -0.629703,
    -0.209089, 0.209129,
    -0.021893, 0.021853,
    -0.249022, 0.249019,
    0.361326, -0.361322,
    -0.569664, 0.569611,
    0.176164, -0.176100,
    -0.385335, 0.385314,
    0.417453, -0.417444,
};

float Cg_init[2] = {
    -0.599294, -0.599288
};

float xstd_init[12] = {
    0.004419, 0.001869, 0.331601, 0.120468, 0.001277, 0.000207, 0.060150, 0.137735, 0.000715, 0.000168, 0.052302, 0.149793
};

float xmean_init[12] = {
    0.010773, -0.005679, 0.451333, 1.030200, 0.003510, -0.007746, 0.017000, 0.612800, 0.003583, -0.007729, 0.017333, 0.696800
};

