// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.34%
// test_accuracy: 67.19%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-12 13:15:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.506161, 0.506150,
    -0.159281, 0.159276,
    0.746645, -0.746617,
    0.356376, -0.356386,
    -0.601279, 0.601161,
    0.231639, -0.231502,
    0.008264, -0.008271,
    0.110208, -0.110221,
    0.345110, -0.345097,
    -0.508668, 0.508657,
    -0.236257, 0.236259,
    0.502906, -0.502907,
};

float Cg_init[2] = {
    -0.346081, -0.346075
};

float xstd_init[12] = {
    0.004569, 0.002173, 0.357265, 0.126365, 0.001115, 0.000203, 0.046583, 0.135834, 0.000678, 0.000170, 0.050480, 0.136339
};

float xmean_init[12] = {
    0.010614, -0.005566, 0.459661, 1.035507, 0.003426, -0.007754, 0.012681, 0.619855, 0.003558, -0.007728, 0.014493, 0.705000
};

