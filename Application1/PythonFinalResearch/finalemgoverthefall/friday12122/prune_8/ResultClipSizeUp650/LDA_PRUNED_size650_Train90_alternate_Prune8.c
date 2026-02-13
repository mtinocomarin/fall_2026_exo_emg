// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.06%
// test_accuracy: 72.92%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-12 16:06:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.736626, 0.736617,
    -0.140209, 0.140204,
    0.496019, -0.496042,
    0.671745, -0.671721,
    0.864350, -0.864244,
    -0.872966, 0.872845,
    -0.041610, 0.041637,
    -0.126511, 0.126504,
    -0.467064, 0.466941,
    0.314764, -0.314536,
    -0.308020, 0.307959,
    0.149189, -0.149307,
};

float Cg_init[2] = {
    -0.327905, -0.327891
};

float xstd_init[12] = {
    0.003554, 0.001291, 0.101235, 0.168379, 0.001540, 0.000455, 0.026645, 0.077059, 0.001699, 0.000092, 0.015814, 0.069561
};

float xmean_init[12] = {
    0.009710, -0.006315, 0.170159, 0.580535, 0.003211, -0.007728, 0.006984, 0.051310, 0.003252, -0.007807, 0.004246, 0.068274
};

