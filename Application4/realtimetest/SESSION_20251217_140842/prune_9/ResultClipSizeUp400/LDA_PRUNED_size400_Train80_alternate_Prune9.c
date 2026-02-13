// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.92%
// test_accuracy: 62.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 14:41:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.544475, 4.544452,
    1.965801, -1.965738,
    0.239193, -0.239208,
    -0.105720, 0.105693,
    -0.272998, 0.272956,
    -0.449279, 0.449330,
    0.051710, -0.051704,
    0.351811, -0.351811,
    0.319440, -0.319467,
    0.090860, -0.090833,
    0.555697, -0.555696,
    -0.101161, 0.101151,
};

float Cg_init[2] = {
    -1.294463, -1.294462
};

float xstd_init[12] = {
    0.001096, 0.000209, 0.028560, 0.125835, 0.003912, 0.001127, 0.074660, 0.155610, 0.000898, 0.000142, 0.032010, 0.108337
};

float xmean_init[12] = {
    0.006071, -0.007606, 0.016327, 0.199184, 0.010528, -0.006330, 0.145578, 0.542857, 0.005121, -0.007570, 0.029660, 0.253061
};

