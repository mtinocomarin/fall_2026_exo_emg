// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.84%
// test_accuracy: 73.33%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-17 17:01:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.311466, 0.311272,
    -0.082546, 0.083036,
    -0.025717, 0.025651,
    0.116505, -0.116754,
    1.321527, -1.321691,
    -0.893084, 0.893251,
    -0.065933, 0.065912,
    0.052481, -0.052506,
    -0.536632, 0.536697,
    -0.377015, 0.376934,
    0.400833, -0.400854,
    0.854835, -0.854820,
};

float Cg_init[2] = {
    -0.393643, -0.393687
};

float xstd_init[12] = {
    0.000884, 0.000071, 0.008071, 0.063620, 0.000635, 0.000098, 0.013444, 0.049856, 0.003397, 0.001022, 0.116585, 0.207968
};

float xmean_init[12] = {
    0.005504, -0.007759, 0.002074, 0.091112, 0.002328, -0.007859, 0.004016, 0.044494, 0.008980, -0.006608, 0.131754, 0.469926
};

