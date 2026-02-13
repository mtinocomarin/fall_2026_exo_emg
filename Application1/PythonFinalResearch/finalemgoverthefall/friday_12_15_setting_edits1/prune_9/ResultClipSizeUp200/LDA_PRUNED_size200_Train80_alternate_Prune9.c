// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.03%
// test_accuracy: 81.25%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 13:15:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.377715, 1.377729,
    0.269732, -0.269740,
    1.162019, -1.162023,
    0.594794, -0.594796,
    -0.259013, 0.259032,
    -0.004520, 0.004500,
    -0.103803, 0.103804,
    0.314325, -0.314321,
    -0.060068, 0.060024,
    -0.050172, 0.050235,
    -0.573674, 0.573656,
    0.461037, -0.461037,
};

float Cg_init[2] = {
    -0.633874, -0.633878
};

float xstd_init[12] = {
    0.004290, 0.001977, 0.342870, 0.112003, 0.001632, 0.000301, 0.077254, 0.144198, 0.000663, 0.000161, 0.041429, 0.147199
};

float xmean_init[12] = {
    0.011093, -0.005506, 0.460387, 1.044638, 0.003663, -0.007714, 0.021256, 0.624928, 0.003582, -0.007727, 0.014010, 0.696232
};

