// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.77%
// test_accuracy: 81.25%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:09:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.457855, 0.457945,
    -0.652922, 0.652925,
    0.436245, -0.436305,
    1.051397, -1.051407,
    1.152586, -1.152704,
    -1.127772, 1.127893,
    -0.217143, 0.217123,
    -0.255733, 0.255724,
    1.086835, -1.086504,
    -0.336673, 0.335829,
    -0.479281, 0.479538,
    0.058078, -0.057754,
};

float Cg_init[2] = {
    -0.719973, -0.719950
};

float xstd_init[12] = {
    0.003619, 0.001209, 0.102310, 0.175137, 0.001514, 0.000471, 0.024312, 0.076088, 0.000546, 0.000082, 0.018400, 0.066066
};

float xmean_init[12] = {
    0.009780, -0.006326, 0.168910, 0.580636, 0.003206, -0.007726, 0.006242, 0.050364, 0.003095, -0.007812, 0.005394, 0.067727
};

