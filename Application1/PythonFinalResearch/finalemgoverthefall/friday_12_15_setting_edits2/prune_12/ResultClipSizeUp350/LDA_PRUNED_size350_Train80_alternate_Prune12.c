// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.92%
// test_accuracy: 79.17%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_26.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-17 12:41:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.228753, 1.228800,
    0.010903, -0.010914,
    0.179342, -0.179365,
    2.116468, -2.116466,
    -0.405218, 0.405039,
    -0.031664, 0.031822,
    0.091572, -0.091540,
    -0.454125, 0.454105,
    0.052465, -0.052510,
    -0.348525, 0.348647,
    -0.460415, 0.460377,
    0.150303, -0.150349,
};

float Cg_init[2] = {
    -0.851041, -0.851048
};

float xstd_init[12] = {
    0.004522, 0.001895, 0.151721, 0.202941, 0.001501, 0.000264, 0.039248, 0.098423, 0.000693, 0.000178, 0.032353, 0.110905
};

float xmean_init[12] = {
    0.011266, -0.005427, 0.262334, 0.708167, 0.003594, -0.007723, 0.014222, 0.088167, 0.003583, -0.007719, 0.014111, 0.127167
};

