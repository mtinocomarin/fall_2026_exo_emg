// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.48%
// test_accuracy: 77.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:03:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.217737, -0.217659,
    0.010153, -0.010348,
    -0.092876, 0.092901,
    -0.330801, 0.330915,
    1.733478, -1.733502,
    -1.573409, 1.573447,
    -0.312320, 0.312304,
    0.393076, -0.393078,
    -0.786798, 0.786800,
    -0.603296, 0.603316,
    0.175428, -0.175427,
    2.033756, -2.033776,
};

float Cg_init[2] = {
    -0.776478, -0.776495
};

float xstd_init[12] = {
    0.000905, 0.000064, 0.007345, 0.069442, 0.000727, 0.000125, 0.016449, 0.059588, 0.003237, 0.000964, 0.117261, 0.214704
};

float xmean_init[12] = {
    0.005601, -0.007760, 0.001391, 0.093913, 0.002391, -0.007846, 0.005797, 0.052870, 0.008975, -0.006636, 0.133101, 0.473392
};

