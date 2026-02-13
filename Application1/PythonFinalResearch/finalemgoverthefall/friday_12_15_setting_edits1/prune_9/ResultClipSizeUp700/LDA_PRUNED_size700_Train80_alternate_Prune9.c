// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.43%
// test_accuracy: 75.96%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 13:15:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.533217, 0.533221,
    -0.150416, 0.150361,
    0.705221, -0.705192,
    0.405845, -0.405832,
    -0.689766, 0.689810,
    0.317062, -0.317105,
    0.009261, -0.009262,
    0.256060, -0.256050,
    0.257281, -0.257045,
    -0.389464, 0.389112,
    -0.273451, 0.273554,
    0.368873, -0.368848,
};

float Cg_init[2] = {
    -0.326727, -0.326703
};

float xstd_init[12] = {
    0.004353, 0.001925, 0.343262, 0.121852, 0.001125, 0.000202, 0.053009, 0.130473, 0.000668, 0.000170, 0.047281, 0.138324
};

float xmean_init[12] = {
    0.010256, -0.005754, 0.437345, 1.036789, 0.003421, -0.007754, 0.014047, 0.616856, 0.003513, -0.007733, 0.013824, 0.696589
};

