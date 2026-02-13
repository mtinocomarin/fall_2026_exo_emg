// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.09%
// test_accuracy: 72.79%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 17:00:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.322024, 0.321894,
    -0.084045, 0.084317,
    0.002762, -0.002788,
    0.118035, -0.118189,
    1.268592, -1.268488,
    -0.827115, 0.826938,
    -0.084131, 0.084182,
    0.039958, -0.039934,
    -0.442705, 0.442714,
    -0.352572, 0.352590,
    0.358434, -0.358461,
    0.696811, -0.696823,
};

float Cg_init[2] = {
    -0.340642, -0.340622
};

float xstd_init[12] = {
    0.000898, 0.000070, 0.007897, 0.063481, 0.000630, 0.000097, 0.012979, 0.049792, 0.003321, 0.000999, 0.114997, 0.204314
};

float xmean_init[12] = {
    0.005497, -0.007759, 0.002045, 0.091135, 0.002312, -0.007861, 0.003838, 0.043278, 0.008911, -0.006631, 0.130673, 0.468025
};

