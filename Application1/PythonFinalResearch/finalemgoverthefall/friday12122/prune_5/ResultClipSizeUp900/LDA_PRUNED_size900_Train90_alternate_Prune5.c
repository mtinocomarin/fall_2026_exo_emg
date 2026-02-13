// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.55%
// test_accuracy: 77.21%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 16:04:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.400992, 0.400992,
    -0.325768, 0.325779,
    0.294091, -0.294131,
    0.520295, -0.520271,
    0.709015, -0.709136,
    -0.853737, 0.853933,
    0.011714, -0.011762,
    -0.065234, 0.065206,
    0.574033, -0.574067,
    -0.096537, 0.096671,
    -0.250382, 0.250348,
    0.056265, -0.056344,
};

float Cg_init[2] = {
    -0.327603, -0.327626
};

float xstd_init[12] = {
    0.003295, 0.001292, 0.100560, 0.163364, 0.001241, 0.000377, 0.021732, 0.068984, 0.000495, 0.000070, 0.013126, 0.059546
};

float xmean_init[12] = {
    0.009540, -0.006327, 0.170829, 0.582353, 0.003039, -0.007762, 0.005364, 0.046300, 0.003067, -0.007816, 0.003061, 0.062999
};

