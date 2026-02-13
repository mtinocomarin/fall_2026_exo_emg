// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_12\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.81%
// test_accuracy: 75.78%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-17 17:05:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.117541, 0.117417,
    -0.258410, 0.258766,
    0.040120, -0.040191,
    -0.026851, 0.026698,
    2.245754, -2.246008,
    -2.136946, 2.137221,
    -0.176567, 0.176546,
    0.346805, -0.346823,
    -0.877102, 0.877161,
    -0.737276, 0.737194,
    0.221163, -0.221131,
    2.043950, -2.043982,
};

float Cg_init[2] = {
    -0.830504, -0.830580
};

float xstd_init[12] = {
    0.000928, 0.000089, 0.008583, 0.068574, 0.000832, 0.000146, 0.015357, 0.057507, 0.003532, 0.001028, 0.115499, 0.209728
};

float xmean_init[12] = {
    0.005647, -0.007753, 0.002083, 0.093500, 0.002437, -0.007843, 0.005417, 0.050875, 0.009014, -0.006617, 0.130084, 0.465625
};

