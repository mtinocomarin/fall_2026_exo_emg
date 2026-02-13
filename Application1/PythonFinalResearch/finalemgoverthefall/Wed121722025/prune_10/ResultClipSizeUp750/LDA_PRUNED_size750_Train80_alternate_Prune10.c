// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.16%
// test_accuracy: 50.00%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 13:46:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.779144, 0.779287,
    0.544190, -0.544441,
    -0.041910, 0.041931,
    -0.276960, 0.277079,
    -0.390821, 0.390827,
    -0.310095, 0.310112,
    0.148159, -0.148183,
    0.293514, -0.293490,
    -0.622826, 0.622934,
    0.373089, -0.373256,
    -0.084807, 0.084841,
    0.145389, -0.145353,
};

float Cg_init[2] = {
    -0.251696, -0.251755
};

float xstd_init[12] = {
    0.001070, 0.000082, 0.012678, 0.080777, 0.003166, 0.000849, 0.092171, 0.187268, 0.000864, 0.000107, 0.018728, 0.071860
};

float xmean_init[12] = {
    0.006497, -0.007686, 0.004805, 0.145585, 0.008484, -0.006874, 0.102987, 0.435649, 0.004400, -0.007713, 0.010173, 0.128702
};

