// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 58.33%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt']}
// generated: 2026-02-13 17:10:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.668536, 0.668539,
    -0.186108, 0.186181,
    0.000000, 0.000000,
    -0.405460, -0.405460,
    -0.241831, -0.241831,
    0.329706, 0.329706,
    0.785013, 0.785013,
    0.994109, 0.994109,
    -1.395434, -1.395434,
    -1.352227, -1.352227,
    -0.692533, -0.692533,
    -1.585479, -1.585479,
};

float Cg_init[2] = {
    1.607944, -2.023765
};

float xstd_init[12] = {
    0.000202, 0.000013, 1.000000, 0.015228, 0.002256, 0.000707, 0.060134, 0.158022, 0.002233, 0.000550, 0.072605, 0.181300
};

float xmean_init[12] = {
    0.002634, -0.007913, 0.000000, 0.006667, 0.008053, -0.006683, 0.132222, 0.491667, 0.006107, -0.007145, 0.086667, 0.310000
};

