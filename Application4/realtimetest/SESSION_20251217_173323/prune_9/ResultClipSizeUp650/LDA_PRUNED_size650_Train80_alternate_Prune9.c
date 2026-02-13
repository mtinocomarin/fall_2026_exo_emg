// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.67%
// test_accuracy: 75.83%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_21.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:10:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.489593, 0.489566,
    0.027146, -0.027086,
    0.771351, -0.771375,
    0.346911, -0.346928,
    1.046631, -1.046670,
    -1.265344, 1.265373,
    -1.205351, 1.205368,
    0.490025, -0.490033,
    -0.586225, 0.586236,
    -0.607361, 0.607364,
    0.483890, -0.483914,
    1.644936, -1.644923,
};

float Cg_init[2] = {
    -0.741349, -0.741351
};

float xstd_init[12] = {
    0.001242, 0.000210, 0.028568, 0.097304, 0.002958, 0.000938, 0.054272, 0.141286, 0.005831, 0.002445, 0.169320, 0.272389
};

float xmean_init[12] = {
    0.005640, -0.007693, 0.009222, 0.133833, 0.004473, -0.007460, 0.021778, 0.136167, 0.011951, -0.005569, 0.184000, 0.560500
};

