// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 54.17%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt']}
// generated: 2026-02-13 17:10:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.723747, 0.723745,
    -0.165649, 0.165533,
    0.000000, 0.000000,
    2.311655, 2.311655,
    0.539454, 0.539454,
    0.546452, 0.546452,
    2.311531, 2.311531,
    0.960700, 0.960700,
    -0.771049, -0.771049,
    -1.063000, -1.063000,
    -1.239631, -1.239631,
    -0.724965, -0.724965,
};

float Cg_init[2] = {
    1.699857, -2.184333
};

float xstd_init[12] = {
    0.000254, 0.000013, 1.000000, 0.015065, 0.002177, 0.000738, 0.070580, 0.120139, 0.001975, 0.000486, 0.068649, 0.177708
};

float xmean_init[12] = {
    0.002624, -0.007913, 0.000000, 0.006667, 0.008167, -0.006639, 0.150000, 0.474167, 0.006297, -0.007114, 0.090556, 0.336667
};

