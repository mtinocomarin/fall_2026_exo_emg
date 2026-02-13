// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 64.29%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:43:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -24.613049, 24.613342,
    11.417877, -11.418097,
    0.816635, -0.816631,
    4.102661, -4.102685,
    3.866230, -3.866206,
    -5.460527, 5.460476,
    -5.238359, 5.238397,
    -5.371832, 5.371902,
    -11.347977, 11.348181,
    12.959532, -12.959695,
    1.648865, -1.648886,
    4.851813, -4.851854,
};

float Cg_init[2] = {
    -9.355406, -9.355567
};

float xstd_init[12] = {
    0.001241, 0.000183, 0.028425, 0.117784, 0.004982, 0.001456, 0.090165, 0.187949, 0.000971, 0.000137, 0.030731, 0.116265
};

float xmean_init[12] = {
    0.006138, -0.007590, 0.016190, 0.207143, 0.010797, -0.006037, 0.157143, 0.547143, 0.005144, -0.007571, 0.028571, 0.247143
};

