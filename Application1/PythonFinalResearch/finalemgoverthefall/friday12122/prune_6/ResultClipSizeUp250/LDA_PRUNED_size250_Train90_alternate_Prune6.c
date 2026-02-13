// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.08%
// test_accuracy: 84.38%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:04:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.739827, 0.739821,
    -0.114898, 0.114896,
    0.423596, -0.423608,
    0.718390, -0.718376,
    0.912176, -0.912326,
    -1.385274, 1.385501,
    0.378549, -0.378611,
    -0.194314, 0.194304,
    0.949839, -0.949859,
    -0.418956, 0.419041,
    -0.371429, 0.371402,
    0.250815, -0.250847,
};

float Cg_init[2] = {
    -0.566846, -0.566866
};

float xstd_init[12] = {
    0.003822, 0.001391, 0.096398, 0.169045, 0.001717, 0.000529, 0.032832, 0.087803, 0.000565, 0.000091, 0.019000, 0.067259
};

float xmean_init[12] = {
    0.009851, -0.006252, 0.165111, 0.567500, 0.003288, -0.007690, 0.008556, 0.051667, 0.003123, -0.007809, 0.004444, 0.065333
};

