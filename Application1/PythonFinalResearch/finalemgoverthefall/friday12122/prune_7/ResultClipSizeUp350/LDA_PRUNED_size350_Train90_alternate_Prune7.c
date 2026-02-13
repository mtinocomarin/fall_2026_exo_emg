// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.20%
// test_accuracy: 75.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 16:05:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.876245, 0.876262,
    -0.232333, 0.232402,
    0.525287, -0.525304,
    0.931008, -0.931036,
    1.003686, -1.003803,
    -1.368709, 1.368854,
    0.177996, -0.178028,
    -0.073244, 0.073241,
    -0.303114, 0.303245,
    0.373254, -0.373678,
    -0.474462, 0.474608,
    0.238772, -0.238571,
};

float Cg_init[2] = {
    -0.461942, -0.461980
};

float xstd_init[12] = {
    0.003873, 0.001432, 0.097237, 0.167989, 0.001745, 0.000534, 0.032832, 0.088524, 0.001013, 0.000090, 0.019529, 0.065797
};

float xmean_init[12] = {
    0.009912, -0.006243, 0.161610, 0.572988, 0.003336, -0.007686, 0.009042, 0.054138, 0.003222, -0.007805, 0.005134, 0.068046
};

