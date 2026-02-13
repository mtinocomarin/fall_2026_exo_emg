// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.48%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:51:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.940581, 0.940566,
    -0.114227, 0.114264,
    0.633184, -0.633218,
    0.897992, -0.897980,
    1.175966, -1.176001,
    -1.438267, 1.438334,
    -0.146808, 0.146785,
    -0.023632, 0.023619,
    1.013231, -1.013202,
    -0.183773, 0.183746,
    -0.645849, 0.645860,
    0.144752, -0.144761,
};

float Cg_init[2] = {
    -0.759047, -0.759052
};

float xstd_init[12] = {
    0.003647, 0.001364, 0.103741, 0.173127, 0.001668, 0.000526, 0.030623, 0.087812, 0.000509, 0.000086, 0.018945, 0.060522
};

float xmean_init[12] = {
    0.009820, -0.006230, 0.170300, 0.588254, 0.003274, -0.007703, 0.008325, 0.056085, 0.003099, -0.007811, 0.005079, 0.065609
};

