// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_12\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.94%
// test_accuracy: 69.85%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:05:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.095687, 0.095573,
    -0.199454, 0.199665,
    0.062605, -0.062619,
    0.123796, -0.123909,
    1.807206, -1.807055,
    -1.298558, 1.298329,
    -0.007229, 0.007290,
    0.112429, -0.112398,
    -0.802309, 0.802347,
    -0.187097, 0.187038,
    0.626054, -0.626054,
    1.201880, -1.201859,
};

float Cg_init[2] = {
    -0.648501, -0.648450
};

float xstd_init[12] = {
    0.000940, 0.000075, 0.008850, 0.066224, 0.000704, 0.000110, 0.014164, 0.051295, 0.003244, 0.001025, 0.121286, 0.213565
};

float xmean_init[12] = {
    0.005581, -0.007753, 0.002549, 0.093706, 0.002368, -0.007854, 0.004510, 0.045824, 0.008930, -0.006558, 0.141451, 0.482353
};

