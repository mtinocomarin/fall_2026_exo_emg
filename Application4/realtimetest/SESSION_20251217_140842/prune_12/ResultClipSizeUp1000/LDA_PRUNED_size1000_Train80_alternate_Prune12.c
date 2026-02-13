// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.05%
// test_accuracy: 76.97%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_19.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:43:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.803596, 2.803730,
    1.694078, -1.694285,
    0.219200, -0.219175,
    -0.966726, 0.966815,
    -1.153762, 1.153771,
    -0.314013, 0.314050,
    -0.470342, 0.470339,
    0.891720, -0.891748,
    0.914461, -0.914485,
    0.268596, -0.268569,
    0.224161, -0.224165,
    -0.461867, 0.461867,
};

float Cg_init[2] = {
    -1.223563, -1.223618
};

float xstd_init[12] = {
    0.001123, 0.000152, 0.023567, 0.109973, 0.003789, 0.001081, 0.087426, 0.173940, 0.000848, 0.000174, 0.034044, 0.118555
};

float xmean_init[12] = {
    0.005946, -0.007630, 0.012807, 0.194737, 0.009858, -0.006477, 0.140175, 0.537368, 0.005190, -0.007525, 0.030351, 0.267632
};

