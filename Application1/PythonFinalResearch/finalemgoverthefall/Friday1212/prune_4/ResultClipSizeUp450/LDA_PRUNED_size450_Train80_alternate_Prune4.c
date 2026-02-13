// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.80%
// test_accuracy: 75.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:47:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.691945, 0.691959,
    -0.250218, 0.250193,
    0.453560, -0.453594,
    0.801990, -0.801956,
    0.871325, -0.871370,
    -0.971570, 0.971652,
    -0.018555, 0.018541,
    -0.054275, 0.054253,
    -0.445457, 0.445395,
    0.404153, -0.403936,
    -0.446195, 0.446128,
    0.225575, -0.225688,
};

float Cg_init[2] = {
    -0.370850, -0.370848
};

float xstd_init[12] = {
    0.003651, 0.001355, 0.101907, 0.173765, 0.001617, 0.000494, 0.029499, 0.081614, 0.001459, 0.000090, 0.017946, 0.065316
};

float xmean_init[12] = {
    0.009826, -0.006242, 0.173096, 0.581250, 0.003193, -0.007728, 0.007560, 0.048482, 0.003233, -0.007807, 0.004464, 0.067589
};

