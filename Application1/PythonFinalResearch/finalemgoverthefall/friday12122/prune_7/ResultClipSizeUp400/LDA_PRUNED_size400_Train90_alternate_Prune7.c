// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.99%
// test_accuracy: 80.36%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-12 16:05:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.004868, 1.004866,
    -0.090058, 0.090076,
    0.716074, -0.716093,
    0.715204, -0.715197,
    1.085606, -1.085487,
    -1.541249, 1.541075,
    0.076934, -0.076905,
    0.111663, -0.111638,
    -0.408836, 0.408834,
    0.585733, -0.585804,
    -0.538296, 0.538329,
    0.161068, -0.161044,
};

float Cg_init[2] = {
    -0.458503, -0.458501
};

float xstd_init[12] = {
    0.003731, 0.001409, 0.100266, 0.166199, 0.001723, 0.000529, 0.030803, 0.085958, 0.001173, 0.000093, 0.018628, 0.067590
};

float xmean_init[12] = {
    0.009858, -0.006243, 0.166109, 0.577438, 0.003329, -0.007690, 0.008539, 0.055468, 0.003247, -0.007803, 0.005189, 0.069951
};

