// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 53.64%
// test_accuracy: 52.27%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt']}
// generated: 2026-02-13 17:10:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.654901, 0.654903,
    0.073040, -0.072909,
    0.000000, 0.000000,
    -0.405737, -0.405737,
    1.452238, 1.452238,
    1.933664, 1.933664,
    2.104698, 2.104698,
    1.563190, 1.563190,
    -0.384610, -0.384610,
    -0.469339, -0.469339,
    -0.622093, -0.622093,
    -0.490457, -0.490457,
};

float Cg_init[2] = {
    0.977843, -1.323622
};

float xstd_init[12] = {
    0.000283, 0.000016, 1.000000, 0.013790, 0.001968, 0.000663, 0.069838, 0.121451, 0.001871, 0.000553, 0.067067, 0.176028
};

float xmean_init[12] = {
    0.002596, -0.007913, 0.000000, 0.005455, 0.008135, -0.006686, 0.138667, 0.450182, 0.006313, -0.007047, 0.092848, 0.361091
};

