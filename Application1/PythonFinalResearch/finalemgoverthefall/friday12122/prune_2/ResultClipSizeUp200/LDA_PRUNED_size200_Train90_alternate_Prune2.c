// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_2\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 78.43%
// test_accuracy: 79.17%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 16:02:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.804864, 0.804883,
    -0.058360, 0.058366,
    0.470498, -0.470498,
    0.506905, -0.506918,
    1.291896, -1.291983,
    -1.423849, 1.423987,
    0.162876, -0.162926,
    -0.073847, 0.073846,
    -0.151298, 0.151355,
    0.056228, -0.056412,
    -0.370228, 0.370284,
    0.631010, -0.630921,
};

float Cg_init[2] = {
    -0.354880, -0.354896
};

float xstd_init[12] = {
    0.003343, 0.001170, 0.093716, 0.156420, 0.001493, 0.000475, 0.024440, 0.073477, 0.000830, 0.000095, 0.016421, 0.064528
};

float xmean_init[12] = {
    0.009673, -0.006310, 0.163137, 0.567255, 0.003148, -0.007728, 0.005752, 0.046274, 0.003192, -0.007806, 0.004183, 0.066078
};

