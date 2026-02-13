// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 94.89%
// test_accuracy: 78.12%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 16:09:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.499628, 1.499623,
    -0.001266, 0.001215,
    0.669219, -0.669233,
    1.425644, -1.425599,
    1.703149, -1.703155,
    -2.121709, 2.121722,
    0.608866, -0.608848,
    -0.727903, 0.727903,
    1.155287, -1.155425,
    -0.533023, 0.533342,
    -0.610393, 0.610307,
    0.372127, -0.372238,
};

float Cg_init[2] = {
    -1.073496, -1.073514
};

float xstd_init[12] = {
    0.004235, 0.001566, 0.098172, 0.178203, 0.001928, 0.000604, 0.037883, 0.098764, 0.000597, 0.000102, 0.021878, 0.070862
};

float xmean_init[12] = {
    0.010166, -0.006133, 0.165757, 0.571136, 0.003550, -0.007628, 0.011515, 0.063182, 0.003184, -0.007801, 0.005758, 0.071591
};

