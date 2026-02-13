// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.91%
// test_accuracy: 49.48%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 13:46:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.727637, 0.727619,
    0.445909, -0.445837,
    -0.006453, 0.006446,
    -0.267297, 0.267252,
    -0.532901, 0.532958,
    -0.216935, 0.216887,
    0.244563, -0.244576,
    0.261744, -0.261729,
    -0.602904, 0.602988,
    0.347899, -0.348030,
    -0.054342, 0.054381,
    0.154219, -0.154194,
};

float Cg_init[2] = {
    -0.256737, -0.256749
};

float xstd_init[12] = {
    0.001052, 0.000082, 0.012478, 0.081647, 0.003035, 0.000821, 0.089905, 0.180212, 0.000844, 0.000106, 0.018860, 0.071803
};

float xmean_init[12] = {
    0.006468, -0.007686, 0.004589, 0.144276, 0.008564, -0.006867, 0.103672, 0.438333, 0.004403, -0.007714, 0.010048, 0.130000
};

