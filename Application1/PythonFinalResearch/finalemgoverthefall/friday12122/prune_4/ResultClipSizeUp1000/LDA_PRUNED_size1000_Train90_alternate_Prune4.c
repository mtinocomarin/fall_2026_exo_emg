// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 74.34%
// test_accuracy: 74.34%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:04:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.402317, 0.402345,
    -0.277310, 0.277324,
    0.363565, -0.363620,
    0.474701, -0.474680,
    0.598444, -0.598605,
    -0.657645, 0.657876,
    0.011007, -0.011061,
    -0.070716, 0.070690,
    -0.259610, 0.259757,
    0.246529, -0.246762,
    -0.204185, 0.204265,
    0.100641, -0.100560,
};

float Cg_init[2] = {
    -0.200662, -0.200696
};

float xstd_init[12] = {
    0.003190, 0.001244, 0.098788, 0.160955, 0.001245, 0.000353, 0.020427, 0.066798, 0.001285, 0.000075, 0.012600, 0.062622
};

float xmean_init[12] = {
    0.009501, -0.006343, 0.171207, 0.581283, 0.003031, -0.007773, 0.004781, 0.044967, 0.003148, -0.007816, 0.002939, 0.062829
};

