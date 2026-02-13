// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.46%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:14:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.622085, 1.622105,
    0.523474, -0.523475,
    1.148987, -1.148997,
    0.264385, -0.264382,
    0.239323, -0.239335,
    -0.323924, 0.323931,
    -0.196771, 0.196773,
    0.191379, -0.191376,
    -0.150218, 0.150125,
    -0.378650, 0.378786,
    0.007321, -0.007366,
    0.342917, -0.342923,
};

float Cg_init[2] = {
    -0.461513, -0.461517
};

float xstd_init[12] = {
    0.004570, 0.002064, 0.342930, 0.117920, 0.001586, 0.000290, 0.072357, 0.144483, 0.000670, 0.000168, 0.051486, 0.146439
};

float xmean_init[12] = {
    0.010981, -0.005561, 0.459722, 1.040833, 0.003664, -0.007713, 0.022569, 0.639583, 0.003557, -0.007730, 0.015278, 0.699167
};

