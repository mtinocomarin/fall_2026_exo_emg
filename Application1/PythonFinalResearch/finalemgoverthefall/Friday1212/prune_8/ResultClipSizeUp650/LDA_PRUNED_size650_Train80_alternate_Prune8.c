// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.94%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:50:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.612585, 0.612645,
    -0.371029, 0.371007,
    0.510806, -0.510853,
    0.765906, -0.765891,
    0.893008, -0.893005,
    -0.728483, 0.728493,
    -0.225196, 0.225187,
    -0.144539, 0.144536,
    -0.618914, 0.618988,
    0.488524, -0.488706,
    -0.391233, 0.391293,
    0.083865, -0.083796,
};

float Cg_init[2] = {
    -0.371229, -0.371247
};

float xstd_init[12] = {
    0.003681, 0.001262, 0.105910, 0.174946, 0.001474, 0.000422, 0.022621, 0.072969, 0.001820, 0.000095, 0.016914, 0.070683
};

float xmean_init[12] = {
    0.009736, -0.006295, 0.174908, 0.584375, 0.003187, -0.007744, 0.006111, 0.049653, 0.003291, -0.007805, 0.004537, 0.070347
};

