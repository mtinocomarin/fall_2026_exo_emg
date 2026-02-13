// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.31%
// test_accuracy: 74.58%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:47:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.518753, 0.518763,
    -0.340863, 0.340874,
    0.291801, -0.291842,
    0.524045, -0.524025,
    0.682906, -0.682943,
    -0.792619, 0.792684,
    -0.023711, 0.023698,
    -0.041292, 0.041274,
    0.579163, -0.579115,
    -0.107685, 0.107597,
    -0.250111, 0.250148,
    0.049314, -0.049305,
};

float Cg_init[2] = {
    -0.326251, -0.326255
};

float xstd_init[12] = {
    0.003655, 0.001445, 0.107317, 0.169144, 0.001253, 0.000383, 0.022517, 0.071055, 0.000499, 0.000073, 0.013987, 0.059320
};

float xmean_init[12] = {
    0.009710, -0.006239, 0.178238, 0.589471, 0.003029, -0.007764, 0.005456, 0.046621, 0.003082, -0.007815, 0.003249, 0.063403
};

