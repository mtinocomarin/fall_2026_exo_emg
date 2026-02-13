// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.90%
// test_accuracy: 75.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:05:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.664590, 0.664630,
    -0.281547, 0.281538,
    0.416951, -0.416990,
    0.805263, -0.805249,
    0.877390, -0.877460,
    -0.776265, 0.776358,
    -0.163933, 0.163915,
    -0.153719, 0.153710,
    -0.480283, 0.480353,
    0.321932, -0.322048,
    -0.361786, 0.361825,
    0.201462, -0.201422,
};

float Cg_init[2] = {
    -0.361703, -0.361721
};

float xstd_init[12] = {
    0.003544, 0.001235, 0.101117, 0.169502, 0.001525, 0.000447, 0.023605, 0.072680, 0.001694, 0.000091, 0.016809, 0.068058
};

float xmean_init[12] = {
    0.009790, -0.006309, 0.169840, 0.579931, 0.003205, -0.007730, 0.006391, 0.049310, 0.003256, -0.007806, 0.004690, 0.069517
};

