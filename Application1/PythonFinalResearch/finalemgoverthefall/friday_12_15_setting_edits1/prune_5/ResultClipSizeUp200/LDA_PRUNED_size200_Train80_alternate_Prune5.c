// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.12%
// test_accuracy: 89.58%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 13:13:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.022715, 1.022717,
    0.036769, -0.036766,
    0.850900, -0.850892,
    0.519209, -0.519214,
    -0.302390, 0.302515,
    -0.001292, 0.001163,
    -0.071544, 0.071545,
    0.338463, -0.338455,
    -0.067298, 0.067226,
    -0.062152, 0.062252,
    -0.451934, 0.451909,
    0.147658, -0.147668,
};

float Cg_init[2] = {
    -0.468498, -0.468501
};

float xstd_init[12] = {
    0.004567, 0.002197, 0.336012, 0.111616, 0.001541, 0.000284, 0.071918, 0.143041, 0.000675, 0.000157, 0.044925, 0.154302
};

float xmean_init[12] = {
    0.011302, -0.005343, 0.472016, 1.049630, 0.003614, -0.007718, 0.019342, 0.631605, 0.003590, -0.007726, 0.017284, 0.694815
};

