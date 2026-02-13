// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.61%
// test_accuracy: 75.00%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-12 15:46:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.764757, 0.764796,
    -0.228525, 0.228628,
    0.388518, -0.388545,
    0.787470, -0.787520,
    0.754090, -0.754260,
    -1.069416, 1.069679,
    0.167822, -0.167911,
    0.029761, -0.029775,
    -0.289927, 0.290133,
    0.476062, -0.476713,
    -0.453583, 0.453811,
    0.186050, -0.185749,
};

float Cg_init[2] = {
    -0.342262, -0.342319
};

float xstd_init[12] = {
    0.003718, 0.001366, 0.102499, 0.172810, 0.001641, 0.000495, 0.031847, 0.085214, 0.001004, 0.000089, 0.019153, 0.064566
};

float xmean_init[12] = {
    0.009844, -0.006242, 0.172414, 0.575517, 0.003207, -0.007724, 0.007969, 0.048621, 0.003192, -0.007808, 0.004521, 0.065632
};

