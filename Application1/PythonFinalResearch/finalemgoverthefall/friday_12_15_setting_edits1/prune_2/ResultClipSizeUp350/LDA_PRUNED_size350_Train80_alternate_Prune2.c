// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.44%
// test_accuracy: 64.58%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:11:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.872252, 0.872222,
    0.096933, -0.096932,
    0.576760, -0.576733,
    0.310769, -0.310782,
    -0.025120, 0.025040,
    -0.206066, 0.206148,
    -0.055914, 0.055919,
    0.167409, -0.167402,
    0.058949, -0.058870,
    -0.383434, 0.383292,
    -0.063684, 0.063741,
    0.328915, -0.328894,
};

float Cg_init[2] = {
    -0.266528, -0.266521
};

float xstd_init[12] = {
    0.004885, 0.002295, 0.346502, 0.122778, 0.001354, 0.000242, 0.060419, 0.137446, 0.000657, 0.000161, 0.053070, 0.139346
};

float xmean_init[12] = {
    0.011133, -0.005389, 0.471481, 1.034556, 0.003526, -0.007735, 0.017963, 0.627666, 0.003552, -0.007728, 0.016667, 0.705666
};

