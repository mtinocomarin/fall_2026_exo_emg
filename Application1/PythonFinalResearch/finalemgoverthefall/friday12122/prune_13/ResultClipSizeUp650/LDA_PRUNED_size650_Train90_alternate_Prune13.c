// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.60%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 16:09:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.742895, 0.742896,
    -0.194239, 0.194243,
    0.547357, -0.547392,
    0.881748, -0.881723,
    1.043298, -1.043320,
    -0.902974, 0.903014,
    -0.199522, 0.199516,
    -0.211611, 0.211600,
    -0.675422, 0.675363,
    0.575174, -0.575020,
    -0.410982, 0.410934,
    -0.007996, 0.007921,
};

float Cg_init[2] = {
    -0.431267, -0.431263
};

float xstd_init[12] = {
    0.003330, 0.001142, 0.103143, 0.172627, 0.001585, 0.000464, 0.024535, 0.076628, 0.001857, 0.000094, 0.017244, 0.071420
};

float xmean_init[12] = {
    0.009624, -0.006354, 0.167682, 0.577826, 0.003295, -0.007717, 0.006957, 0.054131, 0.003305, -0.007807, 0.005024, 0.068913
};

