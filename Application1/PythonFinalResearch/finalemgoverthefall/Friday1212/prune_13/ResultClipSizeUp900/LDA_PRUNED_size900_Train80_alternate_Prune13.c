// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.08%
// test_accuracy: 76.10%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_28.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:53:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.843115, 0.843127,
    -0.140466, 0.140469,
    0.785598, -0.785623,
    0.539727, -0.539721,
    1.112936, -1.112861,
    -1.126525, 1.126387,
    -0.176393, 0.176448,
    -0.087335, 0.087343,
    0.538624, -0.538603,
    0.234286, -0.234345,
    -0.344017, 0.344041,
    0.116144, -0.116134,
};

float Cg_init[2] = {
    -0.595311, -0.595312
};

float xstd_init[12] = {
    0.002993, 0.001083, 0.100089, 0.166961, 0.001262, 0.000383, 0.020122, 0.069950, 0.000501, 0.000063, 0.011821, 0.056801
};

float xmean_init[12] = {
    0.009345, -0.006386, 0.172302, 0.583158, 0.003065, -0.007760, 0.005325, 0.048545, 0.003084, -0.007819, 0.003013, 0.061486
};

