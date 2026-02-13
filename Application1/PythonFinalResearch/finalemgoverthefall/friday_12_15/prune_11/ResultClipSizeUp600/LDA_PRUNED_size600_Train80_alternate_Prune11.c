// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.15%
// test_accuracy: 73.86%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_17.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_27.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-12 12:45:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.854065, 0.854040,
    0.261928, -0.261888,
    0.569705, -0.569732,
    0.830689, -0.830675,
    -0.600003, 0.599817,
    0.326606, -0.326385,
    -0.075189, 0.075186,
    -0.132762, 0.132733,
    0.462259, -0.462274,
    -0.266202, 0.266260,
    -0.612297, 0.612286,
    -0.054875, 0.054847,
};

float Cg_init[2] = {
    -0.454931, -0.454931
};

float xstd_init[12] = {
    0.004108, 0.001774, 0.146864, 0.205130, 0.001230, 0.000216, 0.031876, 0.088803, 0.000703, 0.000183, 0.030456, 0.110909
};

float xmean_init[12] = {
    0.010444, -0.005694, 0.248255, 0.687706, 0.003492, -0.007744, 0.011255, 0.084502, 0.003586, -0.007718, 0.013853, 0.126927
};

