// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.14%
// test_accuracy: 64.29%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_5.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt']}
// generated: 2026-02-13 17:10:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.129369, 1.129366,
    -0.231581, 0.231365,
    0.000000, 0.000000,
    -0.421129, -0.421129,
    0.267746, 0.267746,
    0.953183, 0.953183,
    -0.953068, -0.953068,
    -0.817154, -0.817154,
    -0.627160, -0.627160,
    -0.581705, -0.581705,
    -0.866291, -0.866291,
    -0.763009, -0.763009,
};

float Cg_init[2] = {
    0.800222, -1.755118
};

float xstd_init[12] = {
    0.000333, 0.000016, 1.000000, 0.014663, 0.002231, 0.000739, 0.072197, 0.134019, 0.002177, 0.000585, 0.073863, 0.205904
};

float xmean_init[12] = {
    0.002577, -0.007915, 0.000000, 0.006286, 0.008208, -0.006638, 0.142476, 0.445714, 0.006341, -0.007077, 0.092190, 0.345143
};

