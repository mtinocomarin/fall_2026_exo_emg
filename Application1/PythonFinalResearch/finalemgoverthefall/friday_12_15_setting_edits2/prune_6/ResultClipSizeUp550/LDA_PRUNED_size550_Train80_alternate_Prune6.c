// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.62%
// test_accuracy: 73.75%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-17 12:38:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.770042, 0.770069,
    0.134785, -0.134804,
    0.265223, -0.265234,
    0.765549, -0.765547,
    -0.484305, 0.484731,
    0.190648, -0.191107,
    -0.004288, 0.004249,
    -0.111930, 0.111989,
    0.179207, -0.179187,
    0.001757, -0.001796,
    -0.561991, 0.562016,
    -0.000241, 0.000212,
};

float Cg_init[2] = {
    -0.313245, -0.313255
};

float xstd_init[12] = {
    0.004578, 0.002063, 0.149147, 0.205261, 0.001213, 0.000214, 0.031364, 0.090625, 0.000692, 0.000172, 0.031365, 0.106654
};

float xmean_init[12] = {
    0.010482, -0.005646, 0.241949, 0.681154, 0.003458, -0.007749, 0.010462, 0.082462, 0.003534, -0.007731, 0.013231, 0.118077
};

