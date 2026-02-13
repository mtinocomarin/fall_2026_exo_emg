// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.18%
// test_accuracy: 76.25%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_15.txt']}
// generated: 2026-02-13 14:47:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.223613, -0.223455,
    -0.005302, 0.004902,
    -0.118541, 0.118594,
    -0.283851, 0.284085,
    1.769174, -1.769158,
    -1.588288, 1.588276,
    -0.350793, 0.350783,
    0.373352, -0.373347,
    -0.830378, 0.830370,
    -0.661106, 0.661166,
    0.265883, -0.265905,
    2.140737, -2.140758,
};

float Cg_init[2] = {
    -0.837365, -0.837382
};

float xstd_init[12] = {
    0.000921, 0.000065, 0.007505, 0.070438, 0.000737, 0.000127, 0.016719, 0.059880, 0.003280, 0.000981, 0.119298, 0.218644
};

float xmean_init[12] = {
    0.005613, -0.007760, 0.001455, 0.093455, 0.002405, -0.007844, 0.005939, 0.053273, 0.008955, -0.006629, 0.133212, 0.472546
};

