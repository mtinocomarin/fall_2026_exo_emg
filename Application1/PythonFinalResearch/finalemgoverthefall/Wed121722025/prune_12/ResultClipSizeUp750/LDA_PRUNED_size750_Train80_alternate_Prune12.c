// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.04%
// test_accuracy: 52.23%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_3.txt']}
// generated: 2025-12-17 13:47:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.943309, 0.943308,
    0.543573, -0.543537,
    -0.051026, 0.051025,
    -0.250601, 0.250570,
    -0.417526, 0.417535,
    -0.287062, 0.287079,
    0.125334, -0.125363,
    0.334287, -0.334288,
    -0.661304, 0.661321,
    0.358689, -0.358688,
    -0.046760, 0.046762,
    0.090621, -0.090639,
};

float Cg_init[2] = {
    -0.305539, -0.305544
};

float xstd_init[12] = {
    0.001090, 0.000083, 0.013053, 0.082145, 0.003188, 0.000861, 0.092272, 0.186789, 0.000862, 0.000108, 0.018923, 0.070685
};

float xmean_init[12] = {
    0.006536, -0.007682, 0.005048, 0.146429, 0.008419, -0.006884, 0.100905, 0.432214, 0.004453, -0.007709, 0.010048, 0.132000
};

