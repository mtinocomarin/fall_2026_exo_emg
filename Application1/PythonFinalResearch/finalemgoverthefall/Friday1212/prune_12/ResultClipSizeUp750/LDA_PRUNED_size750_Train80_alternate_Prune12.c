// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 73.21%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-12 15:52:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.579546, 0.579559,
    -0.349712, 0.349694,
    0.630664, -0.630703,
    0.741833, -0.741796,
    1.237072, -1.237119,
    -0.924417, 0.924500,
    -0.341193, 0.341176,
    -0.121268, 0.121248,
    -0.792179, 0.792127,
    0.430997, -0.430841,
    -0.278012, 0.277978,
    0.140307, -0.140390,
};

float Cg_init[2] = {
    -0.425805, -0.425806
};

float xstd_init[12] = {
    0.003161, 0.001076, 0.100358, 0.172438, 0.001478, 0.000423, 0.023318, 0.074335, 0.001845, 0.000088, 0.012834, 0.068199
};

float xmean_init[12] = {
    0.009558, -0.006355, 0.170429, 0.584571, 0.003191, -0.007747, 0.006333, 0.051143, 0.003312, -0.007807, 0.003476, 0.068786
};

