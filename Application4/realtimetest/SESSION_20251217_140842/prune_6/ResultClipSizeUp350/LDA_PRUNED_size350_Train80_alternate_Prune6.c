// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.83%
// test_accuracy: 64.58%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 14:41:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.322697, 1.322747,
    0.634352, -0.634496,
    -0.136613, 0.136638,
    -0.249377, 0.249454,
    0.754441, -0.754474,
    -1.537169, 1.537203,
    0.284457, -0.284464,
    -0.339632, 0.339635,
    -0.096643, 0.096685,
    0.221202, -0.221239,
    0.475350, -0.475328,
    0.068238, -0.068246,
};

float Cg_init[2] = {
    -0.604614, -0.604632
};

float xstd_init[12] = {
    0.000848, 0.000129, 0.021306, 0.098472, 0.004064, 0.001266, 0.094484, 0.150167, 0.001255, 0.000193, 0.029211, 0.120257
};

float xmean_init[12] = {
    0.005828, -0.007640, 0.012889, 0.172000, 0.011002, -0.006140, 0.172667, 0.583333, 0.005153, -0.007544, 0.027778, 0.254333
};

