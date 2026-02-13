// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.46%
// test_accuracy: 68.27%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 14:40:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.671073, 1.671093,
    0.762723, -0.762800,
    0.201748, -0.201728,
    -0.234592, 0.234625,
    0.144854, -0.144796,
    -0.793549, 0.793495,
    -0.111363, 0.111350,
    0.363970, -0.363971,
    -0.001461, 0.001464,
    0.247377, -0.247324,
    0.142558, -0.142563,
    -0.122207, 0.122172,
};

float Cg_init[2] = {
    -0.512834, -0.512826
};

float xstd_init[12] = {
    0.001000, 0.000174, 0.027049, 0.120573, 0.003684, 0.001101, 0.086602, 0.161142, 0.001028, 0.000162, 0.032728, 0.111654
};

float xmean_init[12] = {
    0.005914, -0.007624, 0.013162, 0.194359, 0.010420, -0.006356, 0.152308, 0.566282, 0.004977, -0.007567, 0.028547, 0.247436
};

