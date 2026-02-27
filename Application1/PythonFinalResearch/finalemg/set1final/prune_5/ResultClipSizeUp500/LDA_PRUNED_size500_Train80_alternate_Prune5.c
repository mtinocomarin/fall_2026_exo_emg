// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.22%
// test_accuracy: 63.89%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.912758, 0.912762,
    -0.312536, 0.312579,
    0.000000, 0.000000,
    -0.400213, -0.400213,
    0.432110, 0.432110,
    0.058484, 0.058484,
    0.126942, 0.126942,
    0.099342, 0.099342,
    0.144558, 0.144558,
    -0.177362, -0.177362,
    0.060595, 0.060595,
    1.144847, 1.144847,
};

float Cg_init[2] = {
    -0.929430, 0.159417
};

float xstd_init[12] = {
    0.000259, 0.000014, 1.000000, 0.012689, 0.002155, 0.000677, 0.065457, 0.148044, 0.001932, 0.000481, 0.064733, 0.186445
};

float xmean_init[12] = {
    0.002739, -0.007909, 0.000000, 0.004444, 0.008131, -0.006656, 0.130370, 0.440000, 0.006194, -0.007141, 0.089383, 0.340741
};

