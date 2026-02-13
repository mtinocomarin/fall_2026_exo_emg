// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 94.44%
// test_accuracy: 87.50%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 16:08:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.252242, 1.252254,
    -0.390903, 0.390878,
    1.501410, -1.501402,
    0.723404, -0.723401,
    2.569941, -2.569957,
    -3.024027, 3.024041,
    0.380349, -0.380346,
    -0.153852, 0.153851,
    1.419339, -1.419351,
    -0.602531, 0.602583,
    -0.771316, 0.771301,
    0.539375, -0.539398,
};

float Cg_init[2] = {
    -1.245066, -1.245064
};

float xstd_init[12] = {
    0.003547, 0.001256, 0.096456, 0.158577, 0.001710, 0.000553, 0.028745, 0.083423, 0.000576, 0.000106, 0.019151, 0.069791
};

float xmean_init[12] = {
    0.009845, -0.006236, 0.160555, 0.574722, 0.003345, -0.007673, 0.007963, 0.055278, 0.003228, -0.007796, 0.005556, 0.073611
};

