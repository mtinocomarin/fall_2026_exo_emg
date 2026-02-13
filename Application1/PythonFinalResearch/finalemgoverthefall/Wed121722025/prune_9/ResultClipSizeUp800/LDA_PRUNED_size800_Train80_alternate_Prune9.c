// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.04%
// test_accuracy: 53.75%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-17 13:46:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.518447, 0.518426,
    0.397359, -0.397314,
    -0.063961, 0.063958,
    -0.241256, 0.241222,
    -0.309628, 0.309728,
    -0.279780, 0.279693,
    -0.042664, 0.042662,
    0.298575, -0.298580,
    -0.554219, 0.554276,
    0.311331, -0.311432,
    0.042194, -0.042163,
    0.080117, -0.080096,
};

float Cg_init[2] = {
    -0.191161, -0.191164
};

float xstd_init[12] = {
    0.001066, 0.000082, 0.011983, 0.081260, 0.003271, 0.000886, 0.094751, 0.189296, 0.000881, 0.000116, 0.019372, 0.076143
};

float xmean_init[12] = {
    0.006537, -0.007685, 0.004638, 0.147305, 0.008467, -0.006871, 0.102957, 0.429855, 0.004386, -0.007710, 0.010667, 0.129914
};

