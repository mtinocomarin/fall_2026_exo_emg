// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.82%
// test_accuracy: 55.62%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-17 13:43:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.339705, 0.339769,
    0.215511, -0.215631,
    0.059333, -0.059323,
    -0.185073, 0.185130,
    -0.600004, 0.600029,
    -0.110286, 0.110258,
    0.230698, -0.230713,
    0.277792, -0.277764,
    -0.461976, 0.462089,
    0.177040, -0.177221,
    -0.014381, 0.014422,
    0.187066, -0.187027,
};

float Cg_init[2] = {
    -0.154684, -0.154708
};

float xstd_init[12] = {
    0.001009, 0.000078, 0.012296, 0.079171, 0.002954, 0.000796, 0.087268, 0.176517, 0.000824, 0.000108, 0.018997, 0.069948
};

float xmean_init[12] = {
    0.006437, -0.007692, 0.004667, 0.140572, 0.008684, -0.006849, 0.105334, 0.442429, 0.004339, -0.007718, 0.009714, 0.126000
};

