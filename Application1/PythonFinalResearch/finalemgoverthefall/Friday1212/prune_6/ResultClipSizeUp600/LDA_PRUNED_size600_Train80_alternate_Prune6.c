// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.99%
// test_accuracy: 72.16%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 15:48:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.726486, 0.726420,
    -0.174030, 0.174073,
    0.357995, -0.358011,
    0.781050, -0.781041,
    0.720105, -0.720083,
    -0.802224, 0.802234,
    -0.059196, 0.059178,
    0.006921, -0.006936,
    -0.463999, 0.463820,
    0.350873, -0.350390,
    -0.328632, 0.328464,
    0.149900, -0.150113,
};

float Cg_init[2] = {
    -0.322056, -0.322038
};

float xstd_init[12] = {
    0.003759, 0.001331, 0.108546, 0.170440, 0.001427, 0.000404, 0.019766, 0.070966, 0.001752, 0.000093, 0.016722, 0.065759
};

float xmean_init[12] = {
    0.009858, -0.006223, 0.176131, 0.589721, 0.003131, -0.007755, 0.004895, 0.047972, 0.003263, -0.007807, 0.004662, 0.066644
};

