// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.42%
// test_accuracy: 72.50%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 13:13:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.571587, 0.571597,
    0.024315, -0.024355,
    0.529543, -0.529545,
    0.303943, -0.303929,
    -0.382291, 0.382176,
    0.118722, -0.118590,
    0.000068, -0.000072,
    0.188113, -0.188112,
    0.244909, -0.244648,
    -0.311865, 0.311478,
    -0.305466, 0.305571,
    0.308514, -0.308464,
};

float Cg_init[2] = {
    -0.226239, -0.226218
};

float xstd_init[12] = {
    0.004262, 0.001901, 0.346237, 0.121037, 0.001008, 0.000180, 0.046118, 0.129329, 0.000642, 0.000157, 0.047387, 0.138281
};

float xmean_init[12] = {
    0.010252, -0.005746, 0.435885, 1.038173, 0.003350, -0.007768, 0.010700, 0.617383, 0.003526, -0.007732, 0.015226, 0.700543
};

