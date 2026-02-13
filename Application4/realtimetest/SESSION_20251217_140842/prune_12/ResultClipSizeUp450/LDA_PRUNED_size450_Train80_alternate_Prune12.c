// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.44%
// test_accuracy: 59.38%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-17 14:42:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.489751, 6.489806,
    3.034724, -3.034805,
    -0.630956, 0.630974,
    0.826093, -0.826071,
    2.360774, -2.360822,
    -2.044216, 2.044275,
    -0.423556, 0.423547,
    0.241868, -0.241865,
    -2.281786, 2.281776,
    1.606189, -1.606174,
    0.164525, -0.164523,
    -0.218065, 0.218069,
};

float Cg_init[2] = {
    -1.767015, -1.767035
};

float xstd_init[12] = {
    0.001259, 0.000228, 0.031156, 0.137547, 0.004752, 0.001514, 0.094616, 0.165038, 0.001471, 0.000165, 0.034498, 0.110782
};

float xmean_init[12] = {
    0.006216, -0.007549, 0.020000, 0.228750, 0.011085, -0.006067, 0.164583, 0.549375, 0.005345, -0.007542, 0.037500, 0.264375
};

