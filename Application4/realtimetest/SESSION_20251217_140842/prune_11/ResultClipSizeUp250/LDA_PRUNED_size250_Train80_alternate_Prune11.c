// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 56.25%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 14:42:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.456547, 2.456538,
    2.122685, -2.122693,
    -0.986826, 0.986821,
    -0.989801, 0.989794,
    1.903698, -1.903644,
    -4.561704, 4.561678,
    1.579393, -1.579403,
    -1.617638, 1.617614,
    -1.799813, 1.799705,
    2.012274, -2.012102,
    -0.569583, 0.569557,
    1.431681, -1.431722,
};

float Cg_init[2] = {
    -2.021725, -2.021700
};

float xstd_init[12] = {
    0.000838, 0.000131, 0.018904, 0.090803, 0.004120, 0.001413, 0.097663, 0.154575, 0.001620, 0.000175, 0.031079, 0.114538
};

float xmean_init[12] = {
    0.005883, -0.007627, 0.010667, 0.169000, 0.011711, -0.005815, 0.196000, 0.592000, 0.005284, -0.007568, 0.026000, 0.247000
};

