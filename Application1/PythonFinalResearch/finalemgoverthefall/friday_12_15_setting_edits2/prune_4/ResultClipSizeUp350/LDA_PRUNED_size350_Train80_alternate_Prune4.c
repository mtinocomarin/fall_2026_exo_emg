// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.31%
// test_accuracy: 80.21%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 12:37:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.177179, 1.177151,
    0.240123, -0.240117,
    0.130844, -0.130872,
    1.164554, -1.164546,
    -0.294706, 0.294689,
    -0.059359, 0.059425,
    0.026094, -0.026093,
    -0.105236, 0.105199,
    -0.086232, 0.086374,
    0.067981, -0.068305,
    -0.510393, 0.510477,
    0.089366, -0.089242,
};

float Cg_init[2] = {
    -0.430804, -0.430807
};

float xstd_init[12] = {
    0.004679, 0.002081, 0.145383, 0.201051, 0.001357, 0.000245, 0.034325, 0.094525, 0.000667, 0.000163, 0.030129, 0.103713
};

float xmean_init[12] = {
    0.010896, -0.005553, 0.245794, 0.687143, 0.003522, -0.007735, 0.011905, 0.085000, 0.003542, -0.007730, 0.012460, 0.117976
};

