// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.69%
// test_accuracy: 80.36%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt']}
// generated: 2025-12-12 16:06:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.075095, 1.075102,
    -0.075458, 0.075489,
    0.744254, -0.744278,
    0.776413, -0.776413,
    1.116823, -1.116728,
    -1.547675, 1.547530,
    0.101336, -0.101319,
    0.039136, -0.039106,
    -0.418603, 0.418626,
    0.659328, -0.659486,
    -0.532962, 0.533024,
    0.120927, -0.120863,
};

float Cg_init[2] = {
    -0.491996, -0.492006
};

float xstd_init[12] = {
    0.003729, 0.001382, 0.100494, 0.167805, 0.001746, 0.000537, 0.031306, 0.087024, 0.001190, 0.000093, 0.018394, 0.067818
};

float xmean_init[12] = {
    0.009885, -0.006237, 0.167756, 0.578265, 0.003357, -0.007685, 0.008844, 0.056327, 0.003257, -0.007804, 0.005034, 0.069490
};

