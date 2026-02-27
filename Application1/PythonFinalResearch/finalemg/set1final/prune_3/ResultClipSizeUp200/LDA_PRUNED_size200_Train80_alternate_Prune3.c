// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.33%
// test_accuracy: 58.33%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt']}
// generated: 2026-02-13 17:10:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.734382, 0.734383,
    -0.028975, 0.029096,
    0.000000, 0.000000,
    -0.401980, -0.401980,
    0.588263, 0.588263,
    0.363503, 0.363503,
    -0.481920, -0.481920,
    1.139008, 1.139008,
    0.174210, 0.174210,
    0.173820, 0.173820,
    0.350657, 0.350657,
    0.101872, 0.101872,
};

float Cg_init[2] = {
    -0.777211, 0.338523
};

float xstd_init[12] = {
    0.000230, 0.000013, 1.000000, 0.013830, 0.002197, 0.000670, 0.057953, 0.151036, 0.002248, 0.000572, 0.069849, 0.194286
};

float xmean_init[12] = {
    0.002656, -0.007911, 0.000000, 0.005333, 0.007952, -0.006745, 0.132444, 0.474667, 0.005958, -0.007148, 0.080889, 0.313333
};

