// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.48%
// test_accuracy: 55.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 13:45:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.915468, 0.915420,
    0.381894, -0.381782,
    0.284403, -0.284424,
    -0.092882, 0.092825,
    -0.604406, 0.604383,
    -0.369870, 0.369880,
    0.417968, -0.417948,
    0.204245, -0.204234,
    -1.052598, 1.052631,
    0.360518, -0.360587,
    -0.265035, 0.265065,
    0.546335, -0.546316,
};

float Cg_init[2] = {
    -0.409743, -0.409737
};

float xstd_init[12] = {
    0.001057, 0.000083, 0.011106, 0.080489, 0.002595, 0.000758, 0.082034, 0.167272, 0.000923, 0.000118, 0.018232, 0.076911
};

float xmean_init[12] = {
    0.006489, -0.007685, 0.004406, 0.141391, 0.008551, -0.006885, 0.100869, 0.451304, 0.004357, -0.007715, 0.009623, 0.131304
};

