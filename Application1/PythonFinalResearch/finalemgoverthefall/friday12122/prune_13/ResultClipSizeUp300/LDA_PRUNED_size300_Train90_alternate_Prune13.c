// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 95.22%
// test_accuracy: 87.50%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-12 16:08:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.027244, 1.027244,
    -0.539665, 0.539652,
    1.208769, -1.208775,
    0.991598, -0.991587,
    2.036273, -2.036237,
    -3.065125, 3.065085,
    0.617071, -0.617061,
    -0.084776, 0.084775,
    1.217997, -1.218038,
    -0.355831, 0.355894,
    -0.443227, 0.443215,
    0.357959, -0.357975,
};

float Cg_init[2] = {
    -1.133098, -1.133103
};

float xstd_init[12] = {
    0.003872, 0.001434, 0.099389, 0.171864, 0.001857, 0.000583, 0.033383, 0.092123, 0.000547, 0.000086, 0.015794, 0.059738
};

float xmean_init[12] = {
    0.009985, -0.006184, 0.172174, 0.580000, 0.003411, -0.007658, 0.008812, 0.057565, 0.003157, -0.007808, 0.004870, 0.065739
};

