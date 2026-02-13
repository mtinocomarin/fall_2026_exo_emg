// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.23%
// test_accuracy: 64.58%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:15:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.018287, 1.018296,
    0.020559, -0.020549,
    0.900802, -0.900801,
    0.425234, -0.425242,
    -0.225016, 0.224922,
    -0.064789, 0.064873,
    -0.041511, 0.041523,
    0.114563, -0.114563,
    -0.109259, 0.109162,
    -0.363310, 0.363449,
    -0.139354, 0.139314,
    0.556852, -0.556857,
};

float Cg_init[2] = {
    -0.428265, -0.428269
};

float xstd_init[12] = {
    0.004829, 0.002192, 0.360560, 0.122301, 0.001452, 0.000262, 0.065224, 0.135523, 0.000684, 0.000170, 0.053890, 0.138463
};

float xmean_init[12] = {
    0.011126, -0.005451, 0.473671, 1.041015, 0.003584, -0.007725, 0.019565, 0.629710, 0.003565, -0.007728, 0.015700, 0.707536
};

