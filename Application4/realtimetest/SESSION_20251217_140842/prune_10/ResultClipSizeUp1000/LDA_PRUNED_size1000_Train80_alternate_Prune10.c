// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.11%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_19.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:42:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.963986, 2.964109,
    1.679309, -1.679530,
    0.385812, -0.385763,
    -0.814806, 0.814889,
    -0.722819, 0.722869,
    -0.603820, 0.603789,
    -0.194246, 0.194241,
    1.046524, -1.046543,
    1.076444, -1.076460,
    -0.140830, 0.140889,
    -0.062662, 0.062656,
    0.023497, -0.023531,
};

float Cg_init[2] = {
    -1.030766, -1.030795
};

float xstd_init[12] = {
    0.001208, 0.000217, 0.034197, 0.136492, 0.003785, 0.001101, 0.089557, 0.181880, 0.000871, 0.000171, 0.034769, 0.124799
};

float xmean_init[12] = {
    0.006077, -0.007599, 0.016725, 0.210877, 0.009663, -0.006512, 0.134854, 0.532631, 0.005214, -0.007528, 0.032281, 0.273333
};

