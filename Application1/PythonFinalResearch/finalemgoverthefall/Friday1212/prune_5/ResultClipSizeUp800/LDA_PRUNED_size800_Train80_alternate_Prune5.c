// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.36%
// test_accuracy: 74.58%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:48:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.581736, 0.581723,
    -0.314580, 0.314599,
    0.348511, -0.348546,
    0.575618, -0.575591,
    0.746539, -0.746613,
    -0.873089, 0.873209,
    -0.032125, 0.032097,
    -0.040541, 0.040518,
    0.587844, -0.587877,
    0.053178, -0.053034,
    -0.352319, 0.352273,
    -0.007838, 0.007759,
};

float Cg_init[2] = {
    -0.379273, -0.379283
};

float xstd_init[12] = {
    0.003624, 0.001425, 0.106421, 0.168846, 0.001289, 0.000396, 0.023275, 0.072777, 0.000503, 0.000073, 0.014468, 0.060176
};

float xmean_init[12] = {
    0.009664, -0.006253, 0.176001, 0.588395, 0.003063, -0.007757, 0.005827, 0.048543, 0.003093, -0.007814, 0.003490, 0.064346
};

