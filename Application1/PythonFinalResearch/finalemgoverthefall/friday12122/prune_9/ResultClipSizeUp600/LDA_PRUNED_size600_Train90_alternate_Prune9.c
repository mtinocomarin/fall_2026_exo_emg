// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.03%
// test_accuracy: 80.68%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:06:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.680066, 0.680044,
    -0.288991, 0.289014,
    0.346630, -0.346642,
    0.757583, -0.757576,
    0.913267, -0.913218,
    -1.033787, 1.033716,
    -0.086363, 0.086385,
    -0.082834, 0.082834,
    0.959788, -0.959876,
    -0.143279, 0.143526,
    -0.400054, 0.399969,
    -0.045125, 0.045023,
};

float Cg_init[2] = {
    -0.554854, -0.554859
};

float xstd_init[12] = {
    0.003757, 0.001336, 0.107016, 0.169721, 0.001398, 0.000431, 0.021010, 0.071838, 0.000523, 0.000079, 0.016600, 0.062984
};

float xmean_init[12] = {
    0.009864, -0.006237, 0.174995, 0.589361, 0.003143, -0.007737, 0.005567, 0.048889, 0.003099, -0.007813, 0.004669, 0.064714
};

