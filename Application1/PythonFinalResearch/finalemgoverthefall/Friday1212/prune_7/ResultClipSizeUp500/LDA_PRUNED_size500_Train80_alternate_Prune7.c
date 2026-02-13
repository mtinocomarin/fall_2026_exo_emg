// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.67%
// test_accuracy: 75.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 15:49:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.979970, 0.979951,
    -0.079083, 0.079162,
    0.577066, -0.577094,
    0.820172, -0.820179,
    0.955821, -0.955806,
    -1.210514, 1.210488,
    0.037576, -0.037575,
    0.054815, -0.054803,
    -0.572979, 0.573110,
    0.545842, -0.546196,
    -0.508046, 0.508187,
    0.213649, -0.213518,
};

float Cg_init[2] = {
    -0.427703, -0.427737
};

float xstd_init[12] = {
    0.003704, 0.001403, 0.104912, 0.170397, 0.001635, 0.000486, 0.028226, 0.082607, 0.001654, 0.000095, 0.017933, 0.065347
};

float xmean_init[12] = {
    0.009844, -0.006208, 0.174519, 0.586667, 0.003229, -0.007725, 0.006993, 0.053067, 0.003258, -0.007807, 0.004859, 0.066578
};

