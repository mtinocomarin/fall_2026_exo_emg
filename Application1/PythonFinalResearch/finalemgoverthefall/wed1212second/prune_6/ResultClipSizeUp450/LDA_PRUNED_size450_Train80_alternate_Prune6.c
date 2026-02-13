// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.22%
// test_accuracy: 71.88%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 17:01:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.053078, -0.053154,
    -0.104526, 0.104731,
    -0.002316, 0.002279,
    -0.118373, 0.118280,
    1.556311, -1.556445,
    -1.423962, 1.424116,
    -0.238348, 0.238336,
    0.231742, -0.231758,
    -0.640350, 0.640400,
    -0.554075, 0.554005,
    0.331212, -0.331214,
    1.522415, -1.522412,
};

float Cg_init[2] = {
    -0.555008, -0.555040
};

float xstd_init[12] = {
    0.000869, 0.000082, 0.007867, 0.065856, 0.000801, 0.000142, 0.015675, 0.056140, 0.003455, 0.001032, 0.121140, 0.211326
};

float xmean_init[12] = {
    0.005534, -0.007759, 0.001795, 0.090577, 0.002424, -0.007842, 0.005641, 0.050289, 0.009044, -0.006601, 0.136731, 0.472500
};

