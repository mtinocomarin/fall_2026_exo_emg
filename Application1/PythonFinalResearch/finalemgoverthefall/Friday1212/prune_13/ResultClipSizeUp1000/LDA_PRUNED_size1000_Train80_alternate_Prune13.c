// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.73%
// test_accuracy: 74.67%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_10.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:53:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.747824, 0.747784,
    -0.230428, 0.230456,
    0.633913, -0.633910,
    0.563326, -0.563323,
    1.058252, -1.058140,
    -0.985315, 0.985079,
    -0.064943, 0.065049,
    -0.122074, 0.122094,
    0.588826, -0.588921,
    0.100537, -0.100261,
    -0.378489, 0.378387,
    0.066785, -0.066901,
};

float Cg_init[2] = {
    -0.521240, -0.521224
};

float xstd_init[12] = {
    0.002970, 0.001090, 0.099144, 0.161933, 0.001114, 0.000324, 0.015937, 0.063740, 0.000539, 0.000076, 0.015377, 0.061781
};

float xmean_init[12] = {
    0.009352, -0.006389, 0.172817, 0.579779, 0.002951, -0.007795, 0.003361, 0.043047, 0.003084, -0.007814, 0.003878, 0.063158
};

