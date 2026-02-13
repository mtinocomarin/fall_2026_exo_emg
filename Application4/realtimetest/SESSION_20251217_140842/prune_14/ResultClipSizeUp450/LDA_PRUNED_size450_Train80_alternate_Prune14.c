// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 64.06%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:43:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.972452, 6.972329,
    5.634326, -5.634230,
    0.776454, -0.776430,
    -0.478830, 0.478849,
    1.586310, -1.586271,
    -6.044744, 6.044744,
    -1.384974, 1.384945,
    -0.714519, 0.714510,
    -0.687802, 0.687666,
    2.017690, -2.017582,
    -0.064392, 0.064387,
    1.581382, -1.581395,
};

float Cg_init[2] = {
    -3.363757, -3.363699
};

float xstd_init[12] = {
    0.001191, 0.000163, 0.028423, 0.113756, 0.005566, 0.001597, 0.100318, 0.180675, 0.000948, 0.000132, 0.028221, 0.107733
};

float xmean_init[12] = {
    0.006118, -0.007586, 0.017500, 0.203750, 0.011018, -0.006004, 0.162500, 0.548750, 0.005157, -0.007557, 0.029167, 0.247500
};

