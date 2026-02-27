// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 66.67%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_3.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:11:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.844050, 1.844052,
    -0.389915, 0.390057,
    0.000000, 0.000000,
    -0.400213, -0.400213,
    -0.929927, -0.929927,
    -0.995852, -0.995852,
    -0.224586, -0.224586,
    0.099342, 0.099342,
    1.273212, 1.273212,
    0.825390, 0.825390,
    0.995469, 0.995469,
    0.351306, 0.351306,
};

float Cg_init[2] = {
    -2.310467, 0.402566
};

float xstd_init[12] = {
    0.000273, 0.000017, 1.000000, 1.000000, 0.002443, 0.000635, 0.058009, 0.157314, 0.002173, 0.000496, 0.070140, 0.216930
};

float xmean_init[12] = {
    0.002853, -0.007911, 0.000000, 0.000000, 0.007384, -0.006883, 0.094815, 0.357778, 0.005931, -0.007171, 0.087407, 0.306667
};

