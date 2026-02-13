// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.43%
// test_accuracy: 72.73%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:53:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.008931, 1.008922,
    -0.109554, 0.109586,
    0.693742, -0.693780,
    0.895000, -0.894986,
    1.355573, -1.355597,
    -1.343522, 1.343571,
    -0.437036, 0.437022,
    0.049668, -0.049680,
    1.311718, -1.311691,
    -0.513866, 0.513835,
    -0.604834, 0.604848,
    0.270490, -0.270498,
};

float Cg_init[2] = {
    -0.901371, -0.901378
};

float xstd_init[12] = {
    0.003352, 0.001158, 0.099727, 0.171463, 0.001471, 0.000456, 0.023092, 0.076952, 0.000532, 0.000088, 0.018910, 0.062390
};

float xmean_init[12] = {
    0.009700, -0.006305, 0.169899, 0.588283, 0.003177, -0.007734, 0.006397, 0.051212, 0.003105, -0.007810, 0.005253, 0.066970
};

