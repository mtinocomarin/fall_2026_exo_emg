// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.31%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:51:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.600604, 0.600639,
    -0.383411, 0.383403,
    0.530012, -0.530057,
    0.716467, -0.716444,
    1.002399, -1.002426,
    -0.773349, 0.773418,
    -0.273091, 0.273060,
    -0.074871, 0.074857,
    -0.660643, 0.660695,
    0.450914, -0.451006,
    -0.355400, 0.355432,
    0.126832, -0.126804,
};

float Cg_init[2] = {
    -0.364346, -0.364361
};

float xstd_init[12] = {
    0.003245, 0.001126, 0.102942, 0.173048, 0.001424, 0.000406, 0.022335, 0.071799, 0.001770, 0.000093, 0.016128, 0.070896
};

float xmean_init[12] = {
    0.009578, -0.006342, 0.172165, 0.583831, 0.003159, -0.007754, 0.005844, 0.050000, 0.003304, -0.007804, 0.004026, 0.070195
};

