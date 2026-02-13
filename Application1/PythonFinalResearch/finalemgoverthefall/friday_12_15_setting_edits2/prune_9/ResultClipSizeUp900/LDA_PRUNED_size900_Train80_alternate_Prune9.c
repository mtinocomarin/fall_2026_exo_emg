// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.43%
// test_accuracy: 65.07%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 12:40:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.691699, 0.691735,
    0.304036, -0.304044,
    0.538372, -0.538406,
    0.646893, -0.646889,
    -0.389705, 0.389403,
    0.145726, -0.145336,
    -0.119849, 0.119832,
    0.000497, -0.000574,
    0.302130, -0.302141,
    -0.187586, 0.187623,
    -0.445472, 0.445465,
    -0.005656, 0.005646,
};

float Cg_init[2] = {
    -0.339547, -0.339553
};

float xstd_init[12] = {
    0.003833, 0.001648, 0.150196, 0.208564, 0.001020, 0.000182, 0.026231, 0.080189, 0.000654, 0.000162, 0.029680, 0.104235
};

float xmean_init[12] = {
    0.009968, -0.005874, 0.241365, 0.679847, 0.003361, -0.007767, 0.008491, 0.074067, 0.003495, -0.007738, 0.011969, 0.114732
};

