// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.25%
// test_accuracy: 63.54%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:12:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.984182, 0.984175,
    0.181336, -0.181330,
    0.679704, -0.679698,
    0.386195, -0.386202,
    -0.019498, 0.019492,
    -0.234636, 0.234633,
    -0.046906, 0.046911,
    0.173538, -0.173528,
    -0.058189, 0.058173,
    -0.337186, 0.337198,
    -0.076586, 0.076584,
    0.445521, -0.445515,
};

float Cg_init[2] = {
    -0.326919, -0.326916
};

float xstd_init[12] = {
    0.004767, 0.002170, 0.346383, 0.120099, 0.001388, 0.000248, 0.062256, 0.137362, 0.000665, 0.000164, 0.053153, 0.136490
};

float xmean_init[12] = {
    0.011079, -0.005447, 0.469047, 1.036905, 0.003558, -0.007732, 0.018849, 0.627380, 0.003556, -0.007728, 0.015873, 0.707381
};

