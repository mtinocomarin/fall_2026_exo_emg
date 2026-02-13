// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.37%
// test_accuracy: 54.02%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-17 13:48:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.035995, 1.035919,
    0.651121, -0.650938,
    -0.111039, 0.111021,
    -0.326907, 0.326796,
    -0.427023, 0.427044,
    -0.193036, 0.193027,
    0.074455, -0.074476,
    0.247881, -0.247876,
    -0.783251, 0.783277,
    0.419301, -0.419356,
    -0.073276, 0.073297,
    0.075016, -0.075005,
};

float Cg_init[2] = {
    -0.361405, -0.361383
};

float xstd_init[12] = {
    0.001095, 0.000083, 0.012651, 0.080965, 0.003130, 0.000830, 0.090324, 0.184483, 0.000857, 0.000110, 0.018841, 0.070871
};

float xmean_init[12] = {
    0.006550, -0.007681, 0.004868, 0.145397, 0.008350, -0.006903, 0.099048, 0.429524, 0.004418, -0.007712, 0.009788, 0.130080
};

