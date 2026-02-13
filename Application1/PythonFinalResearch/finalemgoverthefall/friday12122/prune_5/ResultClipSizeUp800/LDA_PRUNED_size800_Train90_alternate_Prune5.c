// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.65%
// test_accuracy: 76.67%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:04:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.532383, 0.532387,
    -0.321649, 0.321649,
    0.310716, -0.310745,
    0.558642, -0.558620,
    0.734246, -0.734248,
    -0.879341, 0.879378,
    0.016320, -0.016332,
    -0.073193, 0.073169,
    0.667665, -0.667722,
    -0.079302, 0.079452,
    -0.285681, 0.285638,
    0.002356, -0.002430,
};

float Cg_init[2] = {
    -0.368838, -0.368847
};

float xstd_init[12] = {
    0.003571, 0.001383, 0.103942, 0.165894, 0.001290, 0.000396, 0.022668, 0.071001, 0.000505, 0.000073, 0.013841, 0.060336
};

float xmean_init[12] = {
    0.009668, -0.006282, 0.172933, 0.586021, 0.003065, -0.007754, 0.005649, 0.047183, 0.003083, -0.007815, 0.003355, 0.064301
};

