// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.51%
// test_accuracy: 72.32%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:50:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.187240, 1.187240,
    -0.139891, 0.139862,
    0.795043, -0.795066,
    0.957479, -0.957448,
    1.114405, -1.114403,
    -1.669263, 1.669257,
    0.125493, -0.125473,
    0.138062, -0.138078,
    -0.555952, 0.555893,
    0.845546, -0.845307,
    -0.676527, 0.676437,
    0.116007, -0.116117,
};

float Cg_init[2] = {
    -0.580092, -0.580074
};

float xstd_init[12] = {
    0.003728, 0.001376, 0.101477, 0.173000, 0.001785, 0.000548, 0.032680, 0.090790, 0.001289, 0.000098, 0.019671, 0.067073
};

float xmean_init[12] = {
    0.009813, -0.006243, 0.167371, 0.580373, 0.003352, -0.007691, 0.009027, 0.058012, 0.003272, -0.007803, 0.005217, 0.069441
};

