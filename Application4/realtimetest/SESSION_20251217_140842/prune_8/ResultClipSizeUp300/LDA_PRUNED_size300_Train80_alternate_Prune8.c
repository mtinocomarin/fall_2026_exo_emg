// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 67.50%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 14:41:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.033893, 3.033861,
    1.228766, -1.228675,
    -0.177426, 0.177395,
    -0.179245, 0.179205,
    0.019267, -0.019284,
    -0.741556, 0.741587,
    0.048795, -0.048791,
    -0.145182, 0.145174,
    0.400922, -0.400946,
    -0.095855, 0.095899,
    0.418369, -0.418373,
    0.171093, -0.171103,
};

float Cg_init[2] = {
    -1.045877, -1.045865
};

float xstd_init[12] = {
    0.001062, 0.000188, 0.026121, 0.122749, 0.003619, 0.001063, 0.082340, 0.158742, 0.000900, 0.000197, 0.032960, 0.117973
};

float xmean_init[12] = {
    0.005924, -0.007615, 0.014667, 0.189000, 0.010514, -0.006310, 0.149333, 0.566000, 0.005087, -0.007543, 0.028333, 0.252500
};

