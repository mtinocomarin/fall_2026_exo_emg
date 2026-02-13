// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.67%
// test_accuracy: 76.25%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:13:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.894474, 0.894504,
    0.214880, -0.214894,
    0.607695, -0.607704,
    0.551175, -0.551171,
    -0.470540, 0.470404,
    0.045370, -0.045248,
    0.038548, -0.038533,
    0.265552, -0.265544,
    -0.311378, 0.311244,
    0.097225, -0.097011,
    -0.399932, 0.399849,
    0.330127, -0.330128,
};

float Cg_init[2] = {
    -0.410241, -0.410233
};

float xstd_init[12] = {
    0.004727, 0.002180, 0.333358, 0.116568, 0.001469, 0.000266, 0.067708, 0.139770, 0.000676, 0.000156, 0.051222, 0.150765
};

float xmean_init[12] = {
    0.011135, -0.005433, 0.467160, 1.037037, 0.003605, -0.007721, 0.019259, 0.625481, 0.003573, -0.007728, 0.017778, 0.700296
};

