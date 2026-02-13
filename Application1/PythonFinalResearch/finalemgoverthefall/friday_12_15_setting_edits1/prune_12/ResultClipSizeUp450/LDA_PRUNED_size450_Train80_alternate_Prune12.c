// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.62%
// test_accuracy: 65.62%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_22.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-12 13:17:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.492239, 0.492283,
    -0.311854, 0.311848,
    0.780906, -0.780915,
    0.422492, -0.422513,
    -0.563481, 0.563281,
    -0.022913, 0.023116,
    0.180376, -0.180380,
    0.189524, -0.189540,
    0.100495, -0.100735,
    -0.300481, 0.300868,
    -0.338553, 0.338422,
    0.484932, -0.484955,
};

float Cg_init[2] = {
    -0.400871, -0.400884
};

float xstd_init[12] = {
    0.004519, 0.001822, 0.340315, 0.126915, 0.001288, 0.000213, 0.062758, 0.138382, 0.000695, 0.000181, 0.058775, 0.137218
};

float xmean_init[12] = {
    0.010551, -0.005759, 0.444791, 1.030625, 0.003507, -0.007743, 0.018750, 0.620375, 0.003539, -0.007732, 0.017500, 0.699875
};

