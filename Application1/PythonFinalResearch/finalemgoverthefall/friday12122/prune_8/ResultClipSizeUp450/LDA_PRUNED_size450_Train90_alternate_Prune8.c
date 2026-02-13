// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.93%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-12 16:06:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.906279, 0.906315,
    -0.135176, 0.135212,
    0.405367, -0.405410,
    0.928098, -0.928110,
    0.929928, -0.930112,
    -1.050296, 1.050515,
    0.003381, -0.003412,
    -0.047141, 0.047136,
    -0.515815, 0.515968,
    0.543951, -0.544267,
    -0.553148, 0.553258,
    0.234772, -0.234634,
};

float Cg_init[2] = {
    -0.430852, -0.430905
};

float xstd_init[12] = {
    0.003724, 0.001385, 0.101316, 0.172592, 0.001642, 0.000503, 0.029095, 0.081656, 0.001460, 0.000088, 0.018343, 0.065830
};

float xmean_init[12] = {
    0.009819, -0.006278, 0.166727, 0.580089, 0.003239, -0.007717, 0.007440, 0.050893, 0.003254, -0.007807, 0.005119, 0.067857
};

