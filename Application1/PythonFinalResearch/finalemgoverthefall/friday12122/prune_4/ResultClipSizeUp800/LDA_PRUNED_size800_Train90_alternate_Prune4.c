// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 79.69%
// test_accuracy: 76.67%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:04:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.428530, 0.428526,
    -0.363823, 0.363832,
    0.244529, -0.244563,
    0.532176, -0.532154,
    0.688809, -0.688827,
    -0.829971, 0.830013,
    0.027510, -0.027512,
    -0.092832, 0.092811,
    0.641635, -0.641686,
    -0.089810, 0.089962,
    -0.265120, 0.265079,
    0.004811, -0.004890,
};

float Cg_init[2] = {
    -0.338334, -0.338345
};

float xstd_init[12] = {
    0.003660, 0.001417, 0.104709, 0.165176, 0.001275, 0.000390, 0.022352, 0.070298, 0.000502, 0.000072, 0.013676, 0.060067
};

float xmean_init[12] = {
    0.009689, -0.006270, 0.173612, 0.585667, 0.003050, -0.007757, 0.005528, 0.046459, 0.003075, -0.007815, 0.003306, 0.063959
};

