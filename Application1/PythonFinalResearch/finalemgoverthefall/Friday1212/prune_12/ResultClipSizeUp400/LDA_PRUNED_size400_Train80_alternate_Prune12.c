// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.07%
// test_accuracy: 77.68%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 15:52:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.123339, 1.123373,
    -0.345891, 0.345900,
    0.880268, -0.880308,
    0.919811, -0.919809,
    1.523376, -1.523494,
    -2.167857, 2.168020,
    0.148235, -0.148266,
    0.043396, -0.043407,
    0.909672, -0.909632,
    -0.008569, 0.008483,
    -0.779232, 0.779265,
    0.251755, -0.251738,
};

float Cg_init[2] = {
    -0.861272, -0.861299
};

float xstd_init[12] = {
    0.003901, 0.001451, 0.104483, 0.174879, 0.001855, 0.000584, 0.034852, 0.096087, 0.000543, 0.000097, 0.020815, 0.064476
};

float xmean_init[12] = {
    0.009864, -0.006192, 0.169143, 0.582571, 0.003408, -0.007667, 0.010381, 0.060571, 0.003159, -0.007803, 0.005524, 0.069286
};

