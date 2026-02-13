// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_14\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.06%
// test_accuracy: 73.12%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_20.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_19.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_24.txt', 'act2\\trial_37.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-17 17:06:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.174797, 0.174707,
    -0.274753, 0.275038,
    -0.000281, 0.000227,
    0.047849, -0.047975,
    2.462733, -2.462962,
    -2.236567, 2.236808,
    -0.148704, 0.148689,
    0.338516, -0.338540,
    -0.752130, 0.752205,
    -0.752303, 0.752215,
    0.212282, -0.212266,
    1.829399, -1.829415,
};

float Cg_init[2] = {
    -0.820022, -0.820097
};

float xstd_init[12] = {
    0.000936, 0.000087, 0.009293, 0.067818, 0.000826, 0.000140, 0.015093, 0.056030, 0.003623, 0.001040, 0.116346, 0.208572
};

float xmean_init[12] = {
    0.005707, -0.007748, 0.002593, 0.097000, 0.002455, -0.007843, 0.005259, 0.050667, 0.009080, -0.006595, 0.131260, 0.469222
};

