// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.33%
// test_accuracy: 69.58%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 13:12:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.535915, 0.535932,
    -0.044762, 0.044722,
    0.484412, -0.484416,
    0.239035, -0.239024,
    -0.345853, 0.345602,
    0.123459, -0.123174,
    -0.007698, 0.007685,
    0.145771, -0.145783,
    0.179990, -0.179857,
    -0.259747, 0.259570,
    -0.255198, 0.255240,
    0.262751, -0.262717,
};

float Cg_init[2] = {
    -0.177163, -0.177151
};

float xstd_init[12] = {
    0.004418, 0.002051, 0.346095, 0.122814, 0.000971, 0.000172, 0.043866, 0.129651, 0.000639, 0.000153, 0.045730, 0.139137
};

float xmean_init[12] = {
    0.010315, -0.005695, 0.434074, 1.036222, 0.003328, -0.007772, 0.009630, 0.619289, 0.003509, -0.007737, 0.014741, 0.695466
};

