// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.68%
// test_accuracy: 75.66%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_19.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:42:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.072162, 3.072316,
    1.867462, -1.867771,
    0.351667, -0.351593,
    -1.038522, 1.038647,
    -0.855735, 0.855769,
    -0.376820, 0.376801,
    -0.108304, 0.108304,
    0.793169, -0.793193,
    0.837288, -0.837292,
    -0.062901, 0.062891,
    0.123507, -0.123509,
    0.002841, -0.002831,
};

float Cg_init[2] = {
    -1.036822, -1.036866
};

float xstd_init[12] = {
    0.001298, 0.000230, 0.036617, 0.141449, 0.003958, 0.001165, 0.090728, 0.178197, 0.000862, 0.000174, 0.035010, 0.126467
};

float xmean_init[12] = {
    0.006141, -0.007576, 0.019789, 0.227158, 0.009932, -0.006446, 0.139509, 0.544631, 0.005300, -0.007510, 0.035368, 0.286948
};

