// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.33%
// test_accuracy: 79.17%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-12 16:07:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.653024, 0.653053,
    -0.643543, 0.643513,
    0.556084, -0.556099,
    0.962162, -0.962151,
    1.209369, -1.209357,
    -1.809553, 1.809536,
    0.336123, -0.336116,
    -0.022337, 0.022340,
    0.926049, -0.926044,
    -0.227176, 0.227167,
    -0.654654, 0.654656,
    0.246778, -0.246776,
};

float Cg_init[2] = {
    -0.725750, -0.725748
};

float xstd_init[12] = {
    0.004000, 0.001489, 0.100677, 0.172622, 0.001753, 0.000547, 0.033063, 0.090333, 0.000568, 0.000091, 0.020610, 0.065940
};

float xmean_init[12] = {
    0.009971, -0.006210, 0.165600, 0.574133, 0.003322, -0.007686, 0.008622, 0.055333, 0.003145, -0.007806, 0.005422, 0.067467
};

