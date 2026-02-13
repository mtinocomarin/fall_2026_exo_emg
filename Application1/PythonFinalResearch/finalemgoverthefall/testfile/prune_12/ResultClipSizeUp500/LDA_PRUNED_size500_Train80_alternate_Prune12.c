// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.50%
// test_accuracy: 74.31%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt']}
// generated: 2026-02-13 14:49:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.031163, -0.031162,
    -0.367187, 0.367168,
    0.049744, -0.049736,
    -0.077500, 0.077499,
    2.225656, -2.225556,
    -2.079526, 2.079392,
    -0.144427, 0.144449,
    0.334784, -0.334761,
    -0.663937, 0.663915,
    -0.762070, 0.762100,
    0.345643, -0.345669,
    1.752539, -1.752517,
};

float Cg_init[2] = {
    -0.750396, -0.750365
};

float xstd_init[12] = {
    0.000954, 0.000087, 0.008386, 0.068979, 0.000812, 0.000137, 0.015956, 0.058250, 0.003542, 0.001026, 0.113870, 0.211940
};

float xmean_init[12] = {
    0.005601, -0.007754, 0.002222, 0.094667, 0.002439, -0.007844, 0.005704, 0.050889, 0.009097, -0.006592, 0.130519, 0.468778
};

