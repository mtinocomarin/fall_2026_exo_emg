// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.57%
// test_accuracy: 66.88%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:13:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.730968, 0.730963,
    0.044865, -0.044877,
    0.580810, -0.580788,
    0.315802, -0.315805,
    -0.406102, 0.406043,
    0.100020, -0.099950,
    0.022041, -0.022042,
    0.143650, -0.143661,
    0.240433, -0.240393,
    -0.279835, 0.279784,
    -0.235691, 0.235705,
    0.327525, -0.327524,
};

float Cg_init[2] = {
    -0.246895, -0.246891
};

float xstd_init[12] = {
    0.004647, 0.002135, 0.350576, 0.122671, 0.001178, 0.000205, 0.052319, 0.135800, 0.000666, 0.000165, 0.050192, 0.138611
};

float xmean_init[12] = {
    0.010657, -0.005578, 0.451547, 1.032714, 0.003441, -0.007753, 0.014286, 0.627357, 0.003531, -0.007735, 0.014405, 0.696857
};

