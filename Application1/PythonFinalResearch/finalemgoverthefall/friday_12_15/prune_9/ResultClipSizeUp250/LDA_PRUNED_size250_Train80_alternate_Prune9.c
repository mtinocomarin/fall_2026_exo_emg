// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.11%
// test_accuracy: 78.12%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 12:44:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.044568, 2.044591,
    0.866328, -0.866320,
    0.380436, -0.380455,
    1.899497, -1.899480,
    0.235789, -0.235883,
    -0.280906, 0.280979,
    0.169812, -0.169798,
    -0.853776, 0.853780,
    -0.162095, 0.162004,
    0.058796, -0.058648,
    -0.974120, 0.974092,
    0.280332, -0.280379,
};

float Cg_init[2] = {
    -0.948141, -0.948141
};

float xstd_init[12] = {
    0.004229, 0.001853, 0.147922, 0.192594, 0.001545, 0.000275, 0.039618, 0.101518, 0.000644, 0.000167, 0.031780, 0.105700
};

float xmean_init[12] = {
    0.011193, -0.005483, 0.258551, 0.713043, 0.003631, -0.007715, 0.012754, 0.088478, 0.003560, -0.007720, 0.013913, 0.128913
};

