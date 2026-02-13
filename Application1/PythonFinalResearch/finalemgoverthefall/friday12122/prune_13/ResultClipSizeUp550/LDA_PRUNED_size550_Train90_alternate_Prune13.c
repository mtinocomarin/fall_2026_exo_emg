// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.65%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 16:09:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.669158, 0.669217,
    -0.376087, 0.376128,
    0.436241, -0.436296,
    1.083373, -1.083377,
    0.990459, -0.990538,
    -0.834104, 0.834166,
    -0.178432, 0.178429,
    -0.237170, 0.237179,
    -0.603724, 0.604102,
    0.332516, -0.333353,
    -0.380733, 0.380999,
    0.220236, -0.219874,
};

float Cg_init[2] = {
    -0.476002, -0.476054
};

float xstd_init[12] = {
    0.003564, 0.001190, 0.101495, 0.174286, 0.001591, 0.000461, 0.023828, 0.075373, 0.001884, 0.000094, 0.018080, 0.068529
};

float xmean_init[12] = {
    0.009777, -0.006326, 0.169044, 0.581826, 0.003240, -0.007731, 0.006029, 0.049913, 0.003289, -0.007807, 0.005275, 0.069826
};

