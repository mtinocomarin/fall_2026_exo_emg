// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 59.09%
// test_accuracy: 54.55%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt']}
// generated: 2026-02-13 17:10:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.471609, 0.471608,
    -0.298181, 0.298164,
    0.000000, 0.000000,
    -0.408453, -0.408453,
    -0.995941, -0.995941,
    -0.556870, -0.556870,
    -0.610534, -0.610534,
    -0.836379, -0.836379,
    -1.403920, -1.403920,
    -1.066439, -1.066439,
    0.030089, 0.030089,
    -1.075842, -1.075842,
};

float Cg_init[2] = {
    0.863845, -1.186953
};

float xstd_init[12] = {
    0.000221, 0.000014, 1.000000, 0.014800, 0.001923, 0.000688, 0.074146, 0.150253, 0.001740, 0.000471, 0.065950, 0.167721
};

float xmean_init[12] = {
    0.002718, -0.007911, 0.000000, 0.006364, 0.008400, -0.006592, 0.136364, 0.469091, 0.006279, -0.007114, 0.093333, 0.360000
};

