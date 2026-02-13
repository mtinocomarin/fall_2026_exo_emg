// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.34%
// test_accuracy: 53.41%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 13:43:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.358651, 0.358648,
    0.169175, -0.169171,
    0.019175, -0.019174,
    -0.102796, 0.102783,
    -0.439657, 0.439688,
    -0.108170, 0.108165,
    0.062384, -0.062404,
    0.292291, -0.292286,
    -0.460597, 0.460653,
    0.183709, -0.183804,
    0.016711, -0.016687,
    0.149836, -0.149819,
};

float Cg_init[2] = {
    -0.131268, -0.131276
};

float xstd_init[12] = {
    0.000995, 0.000079, 0.011602, 0.080650, 0.003017, 0.000838, 0.090355, 0.180268, 0.000836, 0.000108, 0.018760, 0.073403
};

float xmean_init[12] = {
    0.006457, -0.007690, 0.004242, 0.143897, 0.008622, -0.006848, 0.105931, 0.440585, 0.004330, -0.007719, 0.010000, 0.127208
};

