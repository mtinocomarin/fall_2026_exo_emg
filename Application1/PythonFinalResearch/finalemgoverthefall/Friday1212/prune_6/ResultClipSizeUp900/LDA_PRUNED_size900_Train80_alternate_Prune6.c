// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.39%
// test_accuracy: 69.12%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:49:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.737793, 0.737764,
    -0.145906, 0.145913,
    0.535471, -0.535492,
    0.522969, -0.522945,
    0.758520, -0.758490,
    -0.867213, 0.867179,
    -0.004413, 0.004428,
    -0.009197, 0.009185,
    -0.486075, 0.485971,
    0.561688, -0.561418,
    -0.374590, 0.374505,
    0.045948, -0.046086,
};

float Cg_init[2] = {
    -0.287395, -0.287377
};

float xstd_init[12] = {
    0.003336, 0.001320, 0.103852, 0.167810, 0.001340, 0.000384, 0.022431, 0.072590, 0.001475, 0.000081, 0.014034, 0.064651
};

float xmean_init[12] = {
    0.009552, -0.006305, 0.174148, 0.584299, 0.003098, -0.007760, 0.005400, 0.049321, 0.003201, -0.007812, 0.003409, 0.065430
};

