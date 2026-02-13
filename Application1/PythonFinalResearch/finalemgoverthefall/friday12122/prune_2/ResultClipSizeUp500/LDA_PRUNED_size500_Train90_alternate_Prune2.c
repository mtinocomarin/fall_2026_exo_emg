// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_2\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 77.45%
// test_accuracy: 79.17%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:02:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.619666, 0.619609,
    -0.217517, 0.217523,
    0.337733, -0.337749,
    0.628777, -0.628749,
    0.656021, -0.655987,
    -0.887768, 0.887793,
    0.023109, -0.023131,
    0.043866, -0.043914,
    -0.352502, 0.352246,
    0.380203, -0.379472,
    -0.354773, 0.354519,
    0.122594, -0.122932,
};

float Cg_init[2] = {
    -0.269819, -0.269781
};

float xstd_init[12] = {
    0.003836, 0.001432, 0.102219, 0.165714, 0.001536, 0.000455, 0.026143, 0.076448, 0.001444, 0.000087, 0.016134, 0.065259
};

float xmean_init[12] = {
    0.009806, -0.006251, 0.166580, 0.577582, 0.003163, -0.007732, 0.006536, 0.048431, 0.003210, -0.007809, 0.004357, 0.066994
};

