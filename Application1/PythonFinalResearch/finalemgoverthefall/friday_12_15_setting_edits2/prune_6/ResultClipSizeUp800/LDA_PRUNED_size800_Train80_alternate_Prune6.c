// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.95%
// test_accuracy: 67.08%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 12:39:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.742706, 0.742750,
    0.306531, -0.306561,
    0.404593, -0.404640,
    0.611784, -0.611769,
    -0.367377, 0.367059,
    0.144899, -0.144484,
    -0.088105, 0.088098,
    -0.032088, 0.032002,
    0.279143, -0.279027,
    -0.120436, 0.120219,
    -0.495891, 0.495943,
    0.006133, -0.006058,
};

float Cg_init[2] = {
    -0.278005, -0.278004
};

float xstd_init[12] = {
    0.003921, 0.001666, 0.147634, 0.202946, 0.001027, 0.000184, 0.026255, 0.080004, 0.000647, 0.000160, 0.029174, 0.104846
};

float xmean_init[12] = {
    0.010030, -0.005869, 0.237403, 0.679539, 0.003349, -0.007769, 0.008479, 0.073026, 0.003496, -0.007738, 0.012581, 0.115488
};

