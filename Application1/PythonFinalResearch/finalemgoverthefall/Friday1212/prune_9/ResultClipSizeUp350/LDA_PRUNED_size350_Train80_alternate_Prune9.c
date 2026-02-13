// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.32%
// test_accuracy: 72.92%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-12 15:50:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.985917, 0.985902,
    -0.280057, 0.280037,
    0.620815, -0.620839,
    1.036519, -1.036482,
    1.210511, -1.210589,
    -1.495291, 1.495397,
    0.214003, -0.214010,
    -0.074954, 0.074939,
    -0.424681, 0.424636,
    0.538585, -0.538351,
    -0.583396, 0.583317,
    0.242793, -0.242907,
};

float Cg_init[2] = {
    -0.526233, -0.526229
};

float xstd_init[12] = {
    0.003885, 0.001455, 0.102205, 0.177949, 0.001717, 0.000523, 0.033192, 0.089683, 0.001104, 0.000097, 0.021357, 0.066892
};

float xmean_init[12] = {
    0.009913, -0.006220, 0.167923, 0.574927, 0.003260, -0.007718, 0.008019, 0.051449, 0.003251, -0.007802, 0.005700, 0.068986
};

