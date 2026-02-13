// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.68%
// test_accuracy: 70.19%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_24.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_22.txt', 'act1\\trial_25.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 12:47:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.969916, 0.969910,
    0.519861, -0.519808,
    0.692142, -0.692173,
    0.817158, -0.817152,
    -0.716227, 0.715952,
    0.346786, -0.346465,
    -0.063730, 0.063721,
    -0.087785, 0.087745,
    0.360705, -0.360817,
    -0.132509, 0.132736,
    -0.691700, 0.691649,
    -0.103491, 0.103423,
};

float Cg_init[2] = {
    -0.521477, -0.521481
};

float xstd_init[12] = {
    0.003996, 0.001732, 0.153937, 0.211773, 0.001209, 0.000213, 0.031913, 0.086711, 0.000722, 0.000187, 0.031328, 0.114170
};

float xmean_init[12] = {
    0.010434, -0.005686, 0.257437, 0.698120, 0.003508, -0.007744, 0.011510, 0.084701, 0.003584, -0.007715, 0.014188, 0.132052
};

