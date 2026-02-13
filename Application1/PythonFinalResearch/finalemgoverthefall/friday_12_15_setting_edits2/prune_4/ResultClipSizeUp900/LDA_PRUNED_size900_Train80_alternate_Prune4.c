// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.05%
// test_accuracy: 67.28%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 12:38:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.649123, 0.649143,
    0.183671, -0.183661,
    0.396090, -0.396119,
    0.458174, -0.458181,
    -0.397742, 0.397900,
    0.188077, -0.188257,
    -0.061937, 0.061950,
    0.033838, -0.033839,
    0.245288, -0.245259,
    -0.066344, 0.066353,
    -0.452663, 0.452675,
    0.003155, -0.003210,
};

float Cg_init[2] = {
    -0.198878, -0.198891
};

float xstd_init[12] = {
    0.003838, 0.001644, 0.146434, 0.203829, 0.000945, 0.000168, 0.024176, 0.076366, 0.000629, 0.000154, 0.028998, 0.102303
};

float xmean_init[12] = {
    0.009975, -0.005889, 0.237648, 0.676597, 0.003300, -0.007776, 0.007451, 0.071429, 0.003483, -0.007743, 0.012297, 0.111975
};

