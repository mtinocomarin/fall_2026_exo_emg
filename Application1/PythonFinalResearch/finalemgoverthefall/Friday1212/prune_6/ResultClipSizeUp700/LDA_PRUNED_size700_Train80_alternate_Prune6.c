// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.36%
// test_accuracy: 74.04%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:49:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.484635, 0.484696,
    -0.465928, 0.465900,
    0.359659, -0.359704,
    0.593964, -0.593953,
    0.856504, -0.856471,
    -0.825608, 0.825551,
    -0.204811, 0.204823,
    -0.084578, 0.084581,
    0.801926, -0.801814,
    -0.176379, 0.176117,
    -0.354403, 0.354497,
    0.085406, -0.085334,
};

float Cg_init[2] = {
    -0.461365, -0.461352
};

float xstd_init[12] = {
    0.003818, 0.001430, 0.109128, 0.173444, 0.001261, 0.000386, 0.019472, 0.069311, 0.000516, 0.000079, 0.015634, 0.060987
};

float xmean_init[12] = {
    0.009825, -0.006204, 0.179212, 0.592663, 0.003053, -0.007762, 0.004931, 0.047101, 0.003092, -0.007812, 0.004103, 0.063728
};

