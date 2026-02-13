// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_10\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.80%
// test_accuracy: 80.21%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 12:40:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.274281, 1.274328,
    0.196651, -0.196673,
    0.240823, -0.240855,
    1.793747, -1.793730,
    -0.605380, 0.605189,
    0.123556, -0.123360,
    0.145385, -0.145355,
    -0.343045, 0.343002,
    -0.112042, 0.112029,
    -0.193871, 0.193880,
    -0.508048, 0.508044,
    0.187927, -0.187916,
};

float Cg_init[2] = {
    -0.743977, -0.743978
};

float xstd_init[12] = {
    0.004462, 0.001862, 0.150453, 0.205543, 0.001447, 0.000254, 0.037852, 0.097498, 0.000695, 0.000178, 0.031967, 0.109287
};

float xmean_init[12] = {
    0.010939, -0.005566, 0.250910, 0.694242, 0.003579, -0.007726, 0.013838, 0.087576, 0.003578, -0.007718, 0.013737, 0.125909
};

