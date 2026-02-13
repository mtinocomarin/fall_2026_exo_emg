// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.67%
// test_accuracy: 76.67%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:43:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.657499, 3.657325,
    2.464362, -2.464081,
    -0.086435, 0.086401,
    -1.466819, 1.466695,
    -1.723347, 1.723362,
    0.045531, -0.045555,
    -0.586659, 0.586628,
    1.606953, -1.606894,
    0.874862, -0.874882,
    0.541351, -0.541310,
    -0.112010, 0.111991,
    -0.784258, 0.784259,
};

float Cg_init[2] = {
    -1.441652, -1.441605
};

float xstd_init[12] = {
    0.001275, 0.000173, 0.018244, 0.125750, 0.003747, 0.001118, 0.089019, 0.186987, 0.000854, 0.000152, 0.031958, 0.115979
};

float xmean_init[12] = {
    0.006073, -0.007632, 0.008593, 0.189333, 0.009890, -0.006458, 0.144296, 0.524445, 0.005252, -0.007538, 0.025481, 0.262222
};

