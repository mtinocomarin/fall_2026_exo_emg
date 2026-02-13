// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.92%
// test_accuracy: 76.56%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-12 16:05:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.785260, 0.785301,
    -0.199922, 0.199957,
    0.424213, -0.424260,
    0.853815, -0.853828,
    0.879040, -0.879229,
    -1.004401, 1.004614,
    -0.002789, 0.002769,
    -0.026890, 0.026886,
    -0.490247, 0.490413,
    0.554314, -0.554659,
    -0.547758, 0.547881,
    0.225739, -0.225591,
};

float Cg_init[2] = {
    -0.404802, -0.404859
};

float xstd_init[12] = {
    0.003684, 0.001367, 0.101431, 0.171117, 0.001596, 0.000488, 0.028168, 0.079588, 0.001415, 0.000086, 0.017765, 0.065953
};

float xmean_init[12] = {
    0.009825, -0.006265, 0.169501, 0.580167, 0.003196, -0.007727, 0.006944, 0.048500, 0.003242, -0.007808, 0.004778, 0.067250
};

