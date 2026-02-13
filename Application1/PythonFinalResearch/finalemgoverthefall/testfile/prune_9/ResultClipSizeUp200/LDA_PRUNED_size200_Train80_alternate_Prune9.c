// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.75%
// test_accuracy: 70.83%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt']}
// generated: 2026-02-13 14:47:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.385186, -0.385034,
    0.273728, -0.274130,
    -0.112038, 0.112130,
    -0.754557, 0.754779,
    2.152911, -2.152887,
    -1.723285, 1.723238,
    -0.443922, 0.443912,
    0.293921, -0.293905,
    -0.956361, 0.956337,
    -0.500536, 0.500610,
    0.278836, -0.278879,
    2.376434, -2.376432,
};

float Cg_init[2] = {
    -0.978993, -0.979016
};

float xstd_init[12] = {
    0.000912, 0.000063, 0.008382, 0.070603, 0.000774, 0.000130, 0.017810, 0.059320, 0.002975, 0.000912, 0.118449, 0.217975
};

float xmean_init[12] = {
    0.005625, -0.007760, 0.001546, 0.091884, 0.002386, -0.007846, 0.006377, 0.053913, 0.008712, -0.006687, 0.133140, 0.471884
};

