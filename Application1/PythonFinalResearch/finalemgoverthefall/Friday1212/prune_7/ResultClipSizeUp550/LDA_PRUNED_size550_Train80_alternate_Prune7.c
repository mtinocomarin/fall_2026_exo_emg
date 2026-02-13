// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.40%
// test_accuracy: 73.12%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:49:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.732741, 0.732762,
    -0.223430, 0.223427,
    0.417636, -0.417670,
    0.805520, -0.805503,
    0.830702, -0.830743,
    -0.872397, 0.872469,
    -0.002522, 0.002503,
    -0.119401, 0.119389,
    -0.534921, 0.534927,
    0.337562, -0.337541,
    -0.423139, 0.423137,
    0.297341, -0.297364,
};

float Cg_init[2] = {
    -0.369027, -0.369036
};

float xstd_init[12] = {
    0.003703, 0.001375, 0.105602, 0.175395, 0.001608, 0.000477, 0.028698, 0.080131, 0.001810, 0.000095, 0.017512, 0.067932
};

float xmean_init[12] = {
    0.009813, -0.006260, 0.174827, 0.583840, 0.003220, -0.007728, 0.007360, 0.050800, 0.003277, -0.007805, 0.004587, 0.068720
};

