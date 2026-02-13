// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.61%
// test_accuracy: 80.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:03:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.717891, 0.717883,
    -0.077851, 0.077891,
    0.436419, -0.436439,
    0.636806, -0.636802,
    0.954858, -0.954779,
    -1.343573, 1.343461,
    0.125371, -0.125359,
    0.061237, -0.061220,
    -0.162496, 0.162515,
    0.339011, -0.339136,
    -0.418882, 0.418926,
    0.198349, -0.198295,
};

float Cg_init[2] = {
    -0.329778, -0.329778
};

float xstd_init[12] = {
    0.003619, 0.001309, 0.097843, 0.164231, 0.001688, 0.000520, 0.030504, 0.084370, 0.000896, 0.000096, 0.019307, 0.067588
};

float xmean_init[12] = {
    0.009732, -0.006291, 0.165657, 0.570545, 0.003273, -0.007699, 0.007838, 0.052121, 0.003187, -0.007807, 0.004768, 0.066667
};

