// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.86%
// test_accuracy: 77.08%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-12 16:07:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.992380, 0.992411,
    -0.293650, 0.293666,
    0.540920, -0.540930,
    1.060522, -1.060534,
    1.147092, -1.147093,
    -1.519643, 1.519639,
    0.265918, -0.265922,
    -0.072154, 0.072162,
    -0.372995, 0.373062,
    0.530644, -0.530894,
    -0.602476, 0.602563,
    0.267306, -0.267191,
};

float Cg_init[2] = {
    -0.537776, -0.537794
};

float xstd_init[12] = {
    0.003939, 0.001465, 0.100124, 0.170541, 0.001747, 0.000538, 0.032461, 0.088897, 0.001057, 0.000093, 0.020303, 0.067483
};

float xmean_init[12] = {
    0.009922, -0.006233, 0.162906, 0.571923, 0.003330, -0.007693, 0.008291, 0.054487, 0.003259, -0.007803, 0.005385, 0.068718
};

