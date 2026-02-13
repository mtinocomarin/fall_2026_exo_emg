// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.79%
// test_accuracy: 72.70%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt']}
// generated: 2026-02-13 14:47:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.269013, 0.268787,
    -0.119049, 0.119515,
    0.040877, -0.040923,
    0.181123, -0.181368,
    1.354693, -1.354558,
    -0.884891, 0.884648,
    -0.047121, 0.047189,
    0.057575, -0.057537,
    -0.516023, 0.516046,
    -0.280120, 0.280130,
    0.333043, -0.333075,
    0.895531, -0.895552,
};

float Cg_init[2] = {
    -0.409297, -0.409271
};

float xstd_init[12] = {
    0.000928, 0.000072, 0.007933, 0.063565, 0.000653, 0.000099, 0.012909, 0.049546, 0.003203, 0.001003, 0.118200, 0.205340
};

float xmean_init[12] = {
    0.005492, -0.007759, 0.002047, 0.091272, 0.002313, -0.007862, 0.003801, 0.042413, 0.008884, -0.006603, 0.135439, 0.477895
};

