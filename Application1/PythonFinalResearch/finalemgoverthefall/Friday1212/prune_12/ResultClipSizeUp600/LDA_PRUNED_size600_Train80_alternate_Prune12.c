// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 72.73%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 15:52:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.619645, 0.619633,
    -0.285041, 0.285063,
    0.313843, -0.313865,
    0.856211, -0.856202,
    1.006206, -1.006144,
    -1.005665, 1.005567,
    -0.295780, 0.295815,
    -0.031382, 0.031385,
    1.140399, -1.140383,
    -0.365371, 0.365355,
    -0.518286, 0.518294,
    0.170177, -0.170187,
};

float Cg_init[2] = {
    -0.691481, -0.691472
};

float xstd_init[12] = {
    0.003568, 0.001264, 0.102611, 0.169619, 0.001412, 0.000435, 0.022010, 0.074042, 0.000521, 0.000085, 0.018064, 0.061068
};

float xmean_init[12] = {
    0.009799, -0.006262, 0.173576, 0.591455, 0.003126, -0.007745, 0.005818, 0.048909, 0.003084, -0.007813, 0.004848, 0.063182
};

