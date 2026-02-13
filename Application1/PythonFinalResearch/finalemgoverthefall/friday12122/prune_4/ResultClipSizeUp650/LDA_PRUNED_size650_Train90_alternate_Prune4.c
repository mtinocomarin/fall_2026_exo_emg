// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 78.26%
// test_accuracy: 72.92%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-12 16:04:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.530451, 0.530432,
    -0.312605, 0.312583,
    0.374440, -0.374455,
    0.656804, -0.656777,
    0.687418, -0.687235,
    -0.750818, 0.750630,
    0.006927, -0.006902,
    -0.085583, 0.085570,
    -0.389806, 0.389510,
    0.281795, -0.281199,
    -0.277281, 0.277115,
    0.112583, -0.112874,
};

float Cg_init[2] = {
    -0.268434, -0.268400
};

float xstd_init[12] = {
    0.003714, 0.001352, 0.104890, 0.167943, 0.001464, 0.000430, 0.025068, 0.073446, 0.001599, 0.000088, 0.015175, 0.067814
};

float xmean_init[12] = {
    0.009836, -0.006257, 0.174445, 0.585260, 0.003143, -0.007743, 0.006250, 0.047917, 0.003220, -0.007810, 0.003924, 0.066042
};

