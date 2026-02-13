// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 75.96%
// test_accuracy: 77.50%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:03:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.432496, 0.432500,
    -0.305471, 0.305468,
    0.288714, -0.288743,
    0.563684, -0.563668,
    0.594960, -0.594943,
    -0.692484, 0.692460,
    0.024112, -0.024093,
    -0.070146, 0.070134,
    -0.302059, 0.302006,
    0.299305, -0.299154,
    -0.237299, 0.237256,
    0.070308, -0.070394,
};

float Cg_init[2] = {
    -0.215801, -0.215797
};

float xstd_init[12] = {
    0.003628, 0.001401, 0.103837, 0.164384, 0.001333, 0.000385, 0.022030, 0.070223, 0.001407, 0.000081, 0.013560, 0.064347
};

float xmean_init[12] = {
    0.009734, -0.006262, 0.173415, 0.586788, 0.003075, -0.007760, 0.005360, 0.046707, 0.003179, -0.007813, 0.003313, 0.065415
};

