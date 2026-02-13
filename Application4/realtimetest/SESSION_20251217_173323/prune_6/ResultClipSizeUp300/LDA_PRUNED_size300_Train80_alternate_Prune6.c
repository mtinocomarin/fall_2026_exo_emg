// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.92%
// test_accuracy: 68.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:09:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.586797, 0.586847,
    0.818670, -0.818844,
    -0.304815, 0.304862,
    -0.221562, 0.221600,
    1.743011, -1.743012,
    -0.492215, 0.492295,
    -0.926390, 0.926400,
    -1.285242, 1.285212,
    1.504940, -1.504926,
    -2.122566, 2.122558,
    0.986074, -0.986080,
    0.729353, -0.729349,
};

float Cg_init[2] = {
    -0.673598, -0.673609
};

float xstd_init[12] = {
    0.001126, 0.000141, 0.028226, 0.092757, 0.002592, 0.000678, 0.057459, 0.143228, 0.004692, 0.001642, 0.136438, 0.229744
};

float xmean_init[12] = {
    0.005583, -0.007710, 0.010051, 0.132308, 0.004125, -0.007582, 0.022564, 0.119385, 0.011344, -0.006081, 0.164102, 0.527385
};

