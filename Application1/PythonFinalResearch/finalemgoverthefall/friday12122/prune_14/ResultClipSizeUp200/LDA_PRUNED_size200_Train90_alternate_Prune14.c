// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 96.97%
// test_accuracy: 95.83%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 16:09:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.500612, 1.500622,
    -0.537676, 0.537648,
    2.013262, -2.013260,
    0.799474, -0.799463,
    3.237638, -3.237672,
    -3.645028, 3.645075,
    0.478923, -0.478924,
    -0.375730, 0.375721,
    1.536128, -1.536165,
    -0.892313, 0.892434,
    -0.862133, 0.862103,
    0.819864, -0.819918,
};

float Cg_init[2] = {
    -1.562267, -1.562276
};

float xstd_init[12] = {
    0.003649, 0.001295, 0.097938, 0.159642, 0.001769, 0.000575, 0.029927, 0.086069, 0.000578, 0.000109, 0.019931, 0.068734
};

float xmean_init[12] = {
    0.010004, -0.006180, 0.164646, 0.577879, 0.003411, -0.007656, 0.008687, 0.057576, 0.003253, -0.007794, 0.006061, 0.074848
};

