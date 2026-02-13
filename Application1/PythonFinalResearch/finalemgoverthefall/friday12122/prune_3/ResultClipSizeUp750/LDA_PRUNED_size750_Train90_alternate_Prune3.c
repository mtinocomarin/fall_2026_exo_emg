// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 76.52%
// test_accuracy: 73.21%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 16:03:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.470889, 0.470822,
    -0.354341, 0.354366,
    0.367643, -0.367667,
    0.582893, -0.582860,
    0.638492, -0.638436,
    -0.674670, 0.674631,
    -0.014248, 0.014260,
    -0.087522, 0.087497,
    -0.341648, 0.341366,
    0.281779, -0.281103,
    -0.249292, 0.249109,
    0.079957, -0.080292,
};

float Cg_init[2] = {
    -0.237187, -0.237158
};

float xstd_init[12] = {
    0.003689, 0.001398, 0.103764, 0.168384, 0.001380, 0.000404, 0.023689, 0.071166, 0.001478, 0.000083, 0.014049, 0.066029
};

float xmean_init[12] = {
    0.009784, -0.006254, 0.175066, 0.585714, 0.003097, -0.007754, 0.005859, 0.046753, 0.003188, -0.007812, 0.003377, 0.064546
};

