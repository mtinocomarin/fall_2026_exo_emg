// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.64%
// test_accuracy: 71.43%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:41:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.832567, 2.832568,
    0.365652, -0.365642,
    0.538515, -0.538517,
    0.289581, -0.289588,
    -0.319341, 0.319300,
    -0.675739, 0.675779,
    -0.021621, 0.021626,
    -0.010005, 0.010003,
    0.643770, -0.643772,
    -0.357681, 0.357682,
    0.428319, -0.428316,
    0.153632, -0.153637,
};

float Cg_init[2] = {
    -0.972695, -0.972698
};

float xstd_init[12] = {
    0.001077, 0.000197, 0.027809, 0.120675, 0.003965, 0.001134, 0.081057, 0.163738, 0.000856, 0.000174, 0.031639, 0.110852
};

float xmean_init[12] = {
    0.005958, -0.007611, 0.016190, 0.191786, 0.010626, -0.006289, 0.148333, 0.559286, 0.005093, -0.007553, 0.030000, 0.255357
};

