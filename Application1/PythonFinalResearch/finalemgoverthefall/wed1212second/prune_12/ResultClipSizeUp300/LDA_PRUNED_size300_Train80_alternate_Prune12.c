// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_12\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.50%
// test_accuracy: 77.50%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_11.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_27.txt']}
// generated: 2025-12-17 17:05:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.300553, -0.300371,
    -0.274737, 0.274255,
    -0.030725, 0.030801,
    -0.253428, 0.253703,
    2.129380, -2.129180,
    -1.870932, 1.870683,
    -0.443086, 0.443106,
    0.328216, -0.328180,
    -0.937179, 0.937155,
    -0.412070, 0.412170,
    0.130953, -0.131034,
    2.118310, -2.118285,
};

float Cg_init[2] = {
    -0.889622, -0.889571
};

float xstd_init[12] = {
    0.000912, 0.000065, 0.007858, 0.072046, 0.000759, 0.000131, 0.016669, 0.060650, 0.003267, 0.000979, 0.113356, 0.215782
};

float xmean_init[12] = {
    0.005699, -0.007757, 0.001600, 0.095600, 0.002420, -0.007843, 0.005733, 0.054000, 0.008819, -0.006676, 0.124667, 0.462600
};

