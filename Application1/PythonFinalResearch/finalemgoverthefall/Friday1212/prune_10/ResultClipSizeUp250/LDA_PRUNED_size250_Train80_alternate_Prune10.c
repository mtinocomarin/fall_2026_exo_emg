// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.05%
// test_accuracy: 78.12%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:51:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.826069, 1.826113,
    0.380757, -0.380881,
    0.958631, -0.958647,
    1.051291, -1.051255,
    1.754888, -1.754903,
    -1.141004, 1.140832,
    -0.276439, 0.276618,
    -0.468431, 0.468462,
    -0.256617, 0.256509,
    -0.052497, 0.052940,
    -0.389295, 0.389158,
    0.630608, -0.630824,
};

float Cg_init[2] = {
    -0.700674, -0.700676
};

float xstd_init[12] = {
    0.003854, 0.001416, 0.100093, 0.168649, 0.001782, 0.000553, 0.036880, 0.094780, 0.000937, 0.000101, 0.021411, 0.067489
};

float xmean_init[12] = {
    0.010080, -0.006162, 0.174697, 0.573182, 0.003318, -0.007701, 0.009697, 0.052955, 0.003277, -0.007801, 0.005000, 0.067273
};

