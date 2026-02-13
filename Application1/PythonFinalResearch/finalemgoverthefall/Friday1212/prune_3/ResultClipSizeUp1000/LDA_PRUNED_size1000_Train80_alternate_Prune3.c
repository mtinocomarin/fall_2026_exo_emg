// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.32%
// test_accuracy: 71.05%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:47:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.416846, 0.416873,
    -0.292761, 0.292770,
    0.407092, -0.407144,
    0.412051, -0.412030,
    0.615260, -0.615379,
    -0.646858, 0.647039,
    -0.034177, 0.034135,
    -0.046362, 0.046333,
    -0.288966, 0.289071,
    0.239509, -0.239653,
    -0.201878, 0.201933,
    0.089223, -0.089184,
};

float Cg_init[2] = {
    -0.192838, -0.192865
};

float xstd_init[12] = {
    0.003374, 0.001314, 0.102027, 0.166796, 0.001234, 0.000347, 0.020404, 0.067710, 0.001341, 0.000077, 0.013029, 0.062569
};

float xmean_init[12] = {
    0.009581, -0.006292, 0.176625, 0.585554, 0.003027, -0.007777, 0.004574, 0.045409, 0.003160, -0.007815, 0.003025, 0.062832
};

