// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_5.txt', 'act1\\trial_8.txt', 'act1\\trial_3.txt', 'act1\\trial_6.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt']}
// generated: 2026-02-13 17:10:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.477995, 1.477994,
    -2.354448, 2.354335,
    0.000000, 0.000000,
    -0.540062, -0.540062,
    -0.717826, -0.717826,
    -0.920461, -0.920461,
    -1.116122, -1.116122,
    0.238023, 0.238023,
    1.666217, 1.666217,
    2.038962, 2.038962,
    1.026833, 1.026833,
    1.236872, 1.236872,
};

float Cg_init[2] = {
    -3.794008, 0.516448
};

float xstd_init[12] = {
    0.000363, 0.000017, 1.000000, 0.016865, 0.002837, 0.000987, 0.065561, 0.102328, 0.001769, 0.000505, 0.075477, 0.218927
};

float xmean_init[12] = {
    0.002600, -0.007924, 0.000000, 0.008000, 0.009966, -0.005951, 0.202667, 0.564000, 0.007096, -0.007006, 0.114667, 0.432000
};

