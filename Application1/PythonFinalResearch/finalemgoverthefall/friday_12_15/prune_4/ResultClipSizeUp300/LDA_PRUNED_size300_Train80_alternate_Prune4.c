// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.29%
// test_accuracy: 80.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-12 12:40:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.180527, 1.180541,
    0.298495, -0.298482,
    0.354162, -0.354177,
    0.960414, -0.960410,
    -0.348502, 0.348450,
    -0.066200, 0.066245,
    0.065535, -0.065533,
    -0.059712, 0.059710,
    -0.126771, 0.126711,
    0.067047, -0.066900,
    -0.404713, 0.404676,
    -0.080161, 0.080100,
};

float Cg_init[2] = {
    -0.425816, -0.425818
};

float xstd_init[12] = {
    0.004740, 0.002141, 0.140298, 0.196030, 0.001446, 0.000262, 0.036195, 0.097130, 0.000670, 0.000156, 0.027651, 0.103358
};

float xmean_init[12] = {
    0.011024, -0.005506, 0.251524, 0.697429, 0.003590, -0.007724, 0.013238, 0.086714, 0.003552, -0.007731, 0.013143, 0.122572
};

