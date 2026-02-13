// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_13\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.09%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_1.txt']}
// generated: 2026-02-13 14:49:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.060057, 0.059875,
    -0.312220, 0.312583,
    0.053539, -0.053606,
    0.002923, -0.003062,
    2.318920, -2.318820,
    -2.210379, 2.210175,
    -0.176444, 0.176492,
    0.348293, -0.348220,
    -0.922698, 0.922700,
    -0.685421, 0.685390,
    0.205674, -0.205660,
    2.122872, -2.122877,
};

float Cg_init[2] = {
    -0.846447, -0.846416
};

float xstd_init[12] = {
    0.000898, 0.000089, 0.008793, 0.066296, 0.000846, 0.000149, 0.014975, 0.057946, 0.003494, 0.001034, 0.117362, 0.212364
};

float xmean_init[12] = {
    0.005608, -0.007755, 0.002193, 0.090921, 0.002437, -0.007843, 0.005175, 0.050789, 0.009006, -0.006608, 0.131755, 0.468421
};

