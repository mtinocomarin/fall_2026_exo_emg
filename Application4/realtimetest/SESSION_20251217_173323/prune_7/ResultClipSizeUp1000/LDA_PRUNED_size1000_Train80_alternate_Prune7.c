// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.06%
// test_accuracy: 65.79%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_22.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:09:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.398216, 0.398175,
    0.314829, -0.314764,
    -0.029090, 0.029076,
    0.181232, -0.181255,
    0.373767, -0.373824,
    -0.470189, 0.470243,
    -1.007637, 1.007645,
    0.217947, -0.217960,
    0.832434, -0.832417,
    -1.033891, 1.033890,
    0.536280, -0.536311,
    0.591027, -0.591011,
};

float Cg_init[2] = {
    -0.518545, -0.518545
};

float xstd_init[12] = {
    0.001061, 0.000133, 0.018346, 0.077345, 0.003035, 0.000947, 0.057001, 0.146352, 0.005545, 0.002235, 0.157206, 0.251115
};

float xmean_init[12] = {
    0.005514, -0.007712, 0.006199, 0.128334, 0.004474, -0.007454, 0.023860, 0.136755, 0.012138, -0.005625, 0.187076, 0.554474
};

