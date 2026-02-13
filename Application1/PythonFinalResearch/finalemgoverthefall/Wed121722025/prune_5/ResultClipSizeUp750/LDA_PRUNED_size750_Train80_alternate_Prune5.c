// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.24%
// test_accuracy: 52.23%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 13:43:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.445644, 0.445713,
    0.302830, -0.302955,
    -0.033963, 0.033973,
    -0.164940, 0.164994,
    -0.323073, 0.323078,
    -0.235926, 0.235943,
    -0.031149, 0.031121,
    0.332777, -0.332738,
    -0.464020, 0.464188,
    0.268911, -0.269213,
    -0.041826, 0.041895,
    0.098277, -0.098194,
};

float Cg_init[2] = {
    -0.149487, -0.149521
};

float xstd_init[12] = {
    0.001018, 0.000081, 0.012991, 0.081609, 0.003100, 0.000832, 0.090068, 0.183109, 0.000854, 0.000112, 0.019893, 0.073867
};

float xmean_init[12] = {
    0.006489, -0.007687, 0.005115, 0.145874, 0.008573, -0.006862, 0.103034, 0.438836, 0.004360, -0.007713, 0.010794, 0.129683
};

