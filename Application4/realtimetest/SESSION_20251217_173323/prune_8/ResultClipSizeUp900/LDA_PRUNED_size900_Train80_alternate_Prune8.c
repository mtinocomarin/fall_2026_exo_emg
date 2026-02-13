// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.70%
// test_accuracy: 68.82%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_22.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt']}
// generated: 2025-12-17 18:10:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.576855, 0.576809,
    0.476634, -0.476540,
    -0.097118, 0.097092,
    0.256312, -0.256338,
    0.500799, -0.500859,
    -0.610316, 0.610361,
    -1.050008, 1.050018,
    0.245133, -0.245141,
    0.727278, -0.727265,
    -0.862536, 0.862543,
    0.498429, -0.498457,
    0.581119, -0.581107,
};

float Cg_init[2] = {
    -0.569954, -0.569950
};

float xstd_init[12] = {
    0.001114, 0.000148, 0.023580, 0.085241, 0.003016, 0.000950, 0.057015, 0.149944, 0.005603, 0.002271, 0.162125, 0.255886
};

float xmean_init[12] = {
    0.005477, -0.007712, 0.008200, 0.129947, 0.004432, -0.007461, 0.023315, 0.137006, 0.012090, -0.005620, 0.191230, 0.556684
};

