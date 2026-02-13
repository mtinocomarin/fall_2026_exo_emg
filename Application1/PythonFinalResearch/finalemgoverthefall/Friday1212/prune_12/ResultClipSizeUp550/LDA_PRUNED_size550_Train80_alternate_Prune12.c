// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.25%
// test_accuracy: 75.00%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 15:52:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.863261, 0.863295,
    -0.223151, 0.223147,
    0.520262, -0.520300,
    1.080227, -1.080214,
    1.192099, -1.192195,
    -0.960998, 0.961152,
    -0.226632, 0.226587,
    -0.207309, 0.207292,
    -0.744387, 0.744505,
    0.325511, -0.325698,
    -0.470316, 0.470386,
    0.327918, -0.327852,
};

float Cg_init[2] = {
    -0.518689, -0.518715
};

float xstd_init[12] = {
    0.003594, 0.001223, 0.106196, 0.180877, 0.001567, 0.000445, 0.023312, 0.075765, 0.002004, 0.000100, 0.019389, 0.068130
};

float xmean_init[12] = {
    0.009733, -0.006287, 0.175334, 0.582300, 0.003221, -0.007746, 0.005667, 0.050100, 0.003341, -0.007802, 0.005667, 0.071400
};

