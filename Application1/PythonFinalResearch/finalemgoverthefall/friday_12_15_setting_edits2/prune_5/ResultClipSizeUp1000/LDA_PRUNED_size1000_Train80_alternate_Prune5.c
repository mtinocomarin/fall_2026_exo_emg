// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.37%
// test_accuracy: 65.46%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 12:38:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.574380, 0.574444,
    0.163307, -0.163360,
    0.415190, -0.415229,
    0.417935, -0.417928,
    -0.308623, 0.308630,
    0.177847, -0.177837,
    -0.106057, 0.106057,
    -0.011897, 0.011870,
    0.247631, -0.247512,
    -0.068641, 0.068470,
    -0.426753, 0.426793,
    -0.021894, 0.021917,
};

float Cg_init[2] = {
    -0.192587, -0.192590
};

float xstd_init[12] = {
    0.003745, 0.001618, 0.147696, 0.203551, 0.000917, 0.000163, 0.023279, 0.075188, 0.000627, 0.000153, 0.028936, 0.100365
};

float xmean_init[12] = {
    0.009929, -0.005900, 0.238831, 0.679805, 0.003288, -0.007779, 0.006810, 0.070059, 0.003482, -0.007743, 0.012268, 0.111541
};

