// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_10\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.04%
// test_accuracy: 68.75%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_33.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 12:40:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.793430, 0.793424,
    0.189949, -0.189927,
    0.444283, -0.444302,
    0.769800, -0.769786,
    -0.424778, 0.425044,
    0.187948, -0.188232,
    -0.036071, 0.036046,
    -0.177674, 0.177702,
    0.286928, -0.286966,
    -0.094033, 0.094126,
    -0.633246, 0.633230,
    -0.006681, 0.006621,
};

float Cg_init[2] = {
    -0.365035, -0.365041
};

float xstd_init[12] = {
    0.004144, 0.001791, 0.150146, 0.204874, 0.001177, 0.000203, 0.031011, 0.085757, 0.000682, 0.000173, 0.031033, 0.107138
};

float xmean_init[12] = {
    0.010461, -0.005671, 0.251364, 0.695379, 0.003451, -0.007752, 0.010202, 0.082273, 0.003561, -0.007723, 0.013939, 0.124697
};

