// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.40%
// test_accuracy: 74.34%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:05:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.472097, 0.472119,
    -0.280428, 0.280456,
    0.373219, -0.373274,
    0.452399, -0.452388,
    0.760601, -0.760681,
    -0.865465, 0.865584,
    0.032312, -0.032340,
    -0.104975, 0.104957,
    0.575752, -0.575635,
    -0.036974, 0.036700,
    -0.269778, 0.269873,
    0.057728, -0.057644,
};

float Cg_init[2] = {
    -0.340400, -0.340417
};

float xstd_init[12] = {
    0.003232, 0.001264, 0.100581, 0.164236, 0.001224, 0.000369, 0.021253, 0.068448, 0.000504, 0.000069, 0.013105, 0.059604
};

float xmean_init[12] = {
    0.009453, -0.006350, 0.171664, 0.580690, 0.003033, -0.007766, 0.005057, 0.046497, 0.003063, -0.007818, 0.003122, 0.062033
};

