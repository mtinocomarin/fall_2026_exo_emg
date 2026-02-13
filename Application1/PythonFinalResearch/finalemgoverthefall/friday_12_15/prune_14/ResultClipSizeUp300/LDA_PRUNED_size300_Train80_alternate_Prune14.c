// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 77.50%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-12 12:47:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.023464, 2.023457,
    0.621504, -0.621497,
    0.688888, -0.688897,
    2.225820, -2.225806,
    0.243685, -0.243613,
    -0.337210, 0.337108,
    0.176382, -0.176365,
    -0.888122, 0.888137,
    0.297539, -0.297542,
    -0.676710, 0.676701,
    -0.222675, 0.222685,
    -0.165809, 0.165804,
};

float Cg_init[2] = {
    -1.056721, -1.056721
};

float xstd_init[12] = {
    0.004443, 0.001927, 0.154088, 0.210129, 0.001509, 0.000288, 0.032810, 0.098822, 0.000664, 0.000150, 0.026805, 0.099760
};

float xmean_init[12] = {
    0.011353, -0.005414, 0.263556, 0.716667, 0.003664, -0.007708, 0.013037, 0.088667, 0.003618, -0.007726, 0.012593, 0.123778
};

