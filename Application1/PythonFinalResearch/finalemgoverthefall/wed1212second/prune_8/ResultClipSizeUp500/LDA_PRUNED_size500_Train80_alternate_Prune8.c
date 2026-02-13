// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.81%
// test_accuracy: 73.61%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 17:02:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.050662, -0.050755,
    -0.263904, 0.264137,
    0.039624, -0.039659,
    -0.049237, 0.049123,
    1.775843, -1.775881,
    -1.567198, 1.567214,
    -0.264310, 0.264321,
    0.311662, -0.311656,
    -0.676176, 0.676159,
    -0.459660, 0.459680,
    0.413421, -0.413433,
    1.490283, -1.490298,
};

float Cg_init[2] = {
    -0.621830, -0.621851
};

float xstd_init[12] = {
    0.000902, 0.000081, 0.007790, 0.067052, 0.000765, 0.000127, 0.015931, 0.056255, 0.003455, 0.001052, 0.120185, 0.213364
};

float xmean_init[12] = {
    0.005526, -0.007757, 0.001914, 0.091204, 0.002415, -0.007846, 0.005617, 0.050278, 0.009101, -0.006573, 0.137840, 0.476204
};

