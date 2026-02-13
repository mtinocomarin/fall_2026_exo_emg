// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.00%
// test_accuracy: 68.00%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:10:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.895537, 0.895595,
    0.991946, -0.992105,
    -0.522955, 0.523003,
    -0.510723, 0.510765,
    1.828964, -1.828986,
    -1.316856, 1.316937,
    -0.412653, 0.412669,
    -0.804840, 0.804816,
    1.682165, -1.682146,
    -2.506725, 2.506695,
    1.044870, -1.044861,
    1.264753, -1.264752,
};

float Cg_init[2] = {
    -1.021629, -1.021649
};

float xstd_init[12] = {
    0.001074, 0.000116, 0.020932, 0.074497, 0.002366, 0.000495, 0.047348, 0.129536, 0.004746, 0.001741, 0.149294, 0.251450
};

float xmean_init[12] = {
    0.005493, -0.007718, 0.008000, 0.127600, 0.004042, -0.007639, 0.017867, 0.110400, 0.011115, -0.006069, 0.160267, 0.523600
};

