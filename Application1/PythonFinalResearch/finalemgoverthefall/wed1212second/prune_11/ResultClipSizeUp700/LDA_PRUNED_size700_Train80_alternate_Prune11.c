// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_11\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.10%
// test_accuracy: 72.60%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 17:04:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.148604, 0.148469,
    -0.250493, 0.250916,
    -0.004987, 0.004926,
    0.073210, -0.073405,
    1.831286, -1.831670,
    -1.434368, 1.434836,
    -0.108867, 0.108787,
    0.235088, -0.235166,
    -0.797531, 0.797576,
    -0.335083, 0.335069,
    0.555254, -0.555286,
    1.492388, -1.492455,
};

float Cg_init[2] = {
    -0.716467, -0.716623
};

float xstd_init[12] = {
    0.000929, 0.000078, 0.008865, 0.066675, 0.000697, 0.000108, 0.015215, 0.052095, 0.003417, 0.001050, 0.122210, 0.220391
};

float xmean_init[12] = {
    0.005601, -0.007753, 0.002491, 0.095092, 0.002391, -0.007851, 0.005177, 0.048132, 0.009034, -0.006551, 0.140416, 0.476923
};

