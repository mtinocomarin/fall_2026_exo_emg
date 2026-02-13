// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.24%
// test_accuracy: 70.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:08:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.559181, 0.559305,
    1.145566, -1.145884,
    -0.432691, 0.432811,
    -0.305393, 0.305481,
    0.843162, -0.843086,
    -0.424265, 0.424204,
    -1.173778, 1.173841,
    -0.141407, 0.141384,
    0.339954, -0.339965,
    -0.999765, 0.999793,
    0.493376, -0.493376,
    0.924116, -0.924134,
};

float Cg_init[2] = {
    -0.529221, -0.529264
};

float xstd_init[12] = {
    0.001064, 0.000129, 0.026853, 0.091569, 0.002956, 0.000828, 0.063092, 0.154794, 0.005731, 0.002245, 0.154333, 0.237476
};

float xmean_init[12] = {
    0.005535, -0.007709, 0.009397, 0.135048, 0.004434, -0.007497, 0.027175, 0.137905, 0.012229, -0.005639, 0.184381, 0.549524
};

