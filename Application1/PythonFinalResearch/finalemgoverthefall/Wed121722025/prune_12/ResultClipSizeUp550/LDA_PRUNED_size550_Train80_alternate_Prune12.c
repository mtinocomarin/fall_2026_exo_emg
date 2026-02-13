// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.50%
// test_accuracy: 52.50%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:47:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.866083, 0.866095,
    0.597730, -0.597712,
    -0.010281, 0.010279,
    -0.363791, 0.363773,
    -0.609905, 0.609858,
    -0.195008, 0.195045,
    0.306938, -0.306931,
    0.156718, -0.156696,
    -0.849606, 0.849700,
    0.432001, -0.432168,
    0.011513, -0.011470,
    0.170887, -0.170849,
};

float Cg_init[2] = {
    -0.358277, -0.358298
};

float xstd_init[12] = {
    0.001084, 0.000080, 0.012171, 0.080795, 0.003076, 0.000831, 0.090177, 0.180135, 0.000862, 0.000112, 0.018228, 0.069804
};

float xmean_init[12] = {
    0.006481, -0.007685, 0.004400, 0.145700, 0.008586, -0.006855, 0.103600, 0.442100, 0.004386, -0.007715, 0.009667, 0.126900
};

