// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.95%
// test_accuracy: 71.88%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_1.txt', 'act2\\trial_16.txt', 'act2\\trial_28.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt']}
// generated: 2025-12-17 12:42:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.931656, 0.931654,
    0.129946, -0.129956,
    0.180517, -0.180543,
    1.383492, -1.383469,
    -0.575441, 0.575658,
    0.351322, -0.351578,
    -0.001897, 0.001909,
    -0.392011, 0.392044,
    0.270873, -0.270782,
    -0.175314, 0.175116,
    -0.566214, 0.566270,
    0.064077, -0.064027,
};

float Cg_init[2] = {
    -0.509760, -0.509757
};

float xstd_init[12] = {
    0.004275, 0.001837, 0.153037, 0.211213, 0.001314, 0.000228, 0.034109, 0.090652, 0.000640, 0.000155, 0.026310, 0.100673
};

float xmean_init[12] = {
    0.010521, -0.005641, 0.246527, 0.690000, 0.003535, -0.007739, 0.012000, 0.084316, 0.003531, -0.007732, 0.011368, 0.117684
};

