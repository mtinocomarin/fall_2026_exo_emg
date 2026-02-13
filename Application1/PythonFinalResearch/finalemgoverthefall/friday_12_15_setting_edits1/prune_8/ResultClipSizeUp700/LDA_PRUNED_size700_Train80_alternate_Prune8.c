// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.97%
// test_accuracy: 73.56%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:15:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.576615, 0.576620,
    -0.079666, 0.079599,
    0.671822, -0.671790,
    0.359837, -0.359816,
    -0.583293, 0.583514,
    0.243488, -0.243718,
    -0.005411, 0.005414,
    0.248040, -0.248025,
    0.225922, -0.225582,
    -0.351902, 0.351393,
    -0.290650, 0.290795,
    0.372398, -0.372362,
};

float Cg_init[2] = {
    -0.302705, -0.302678
};

float xstd_init[12] = {
    0.004330, 0.001900, 0.340672, 0.121651, 0.001108, 0.000199, 0.051967, 0.130948, 0.000660, 0.000167, 0.047033, 0.137503
};

float xmean_init[12] = {
    0.010188, -0.005791, 0.428204, 1.036923, 0.003398, -0.007759, 0.013462, 0.615128, 0.003503, -0.007736, 0.014103, 0.695449
};

