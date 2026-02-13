// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_14\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.93%
// test_accuracy: 71.59%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 17:06:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.086140, 0.086040,
    -0.339166, 0.339365,
    -0.110767, 0.110741,
    -0.024590, 0.024488,
    2.460884, -2.460790,
    -1.900550, 1.900384,
    -0.074626, 0.074673,
    0.342158, -0.342109,
    -1.179972, 1.179942,
    -0.148552, 0.148601,
    0.632159, -0.632192,
    1.691827, -1.691823,
};

float Cg_init[2] = {
    -0.947220, -0.947192
};

float xstd_init[12] = {
    0.000937, 0.000084, 0.008078, 0.068807, 0.000699, 0.000106, 0.015706, 0.054510, 0.003614, 0.001090, 0.126141, 0.225812
};

float xmean_init[12] = {
    0.005706, -0.007746, 0.002222, 0.100909, 0.002434, -0.007845, 0.005522, 0.052626, 0.009312, -0.006471, 0.152122, 0.492323
};

