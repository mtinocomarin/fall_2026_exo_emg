// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.73%
// test_accuracy: 77.08%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-12 16:03:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.791803, 0.791809,
    -0.184486, 0.184632,
    0.444039, -0.444063,
    0.783610, -0.783669,
    0.896082, -0.896216,
    -1.205736, 1.205909,
    0.131640, -0.131689,
    -0.018103, 0.018101,
    -0.269161, 0.269387,
    0.471404, -0.472176,
    -0.460345, 0.460611,
    0.143733, -0.143364,
};

float Cg_init[2] = {
    -0.373409, -0.373476
};

float xstd_init[12] = {
    0.003782, 0.001392, 0.099360, 0.168540, 0.001676, 0.000511, 0.031362, 0.085084, 0.000976, 0.000088, 0.018649, 0.064434
};

float xmean_init[12] = {
    0.009859, -0.006248, 0.167431, 0.572812, 0.003269, -0.007703, 0.008194, 0.051563, 0.003184, -0.007810, 0.004653, 0.064167
};

