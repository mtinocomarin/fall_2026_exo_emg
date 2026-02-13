// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 73.12%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 12:43:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.738838, 0.738849,
    0.196991, -0.196986,
    0.283984, -0.284002,
    0.826222, -0.826210,
    -0.548858, 0.549161,
    0.223888, -0.224213,
    0.042823, -0.042861,
    -0.207998, 0.208042,
    0.195411, -0.195432,
    0.005796, -0.005752,
    -0.649142, 0.649145,
    0.003713, -0.003763,
};

float Cg_init[2] = {
    -0.365964, -0.365972
};

float xstd_init[12] = {
    0.004311, 0.001818, 0.148569, 0.204627, 0.001234, 0.000218, 0.031911, 0.091293, 0.000690, 0.000175, 0.031786, 0.106615
};

float xmean_init[12] = {
    0.010372, -0.005725, 0.240587, 0.679600, 0.003468, -0.007746, 0.010827, 0.083440, 0.003535, -0.007729, 0.013440, 0.118240
};

