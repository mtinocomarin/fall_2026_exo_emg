// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_11\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.97%
// test_accuracy: 67.86%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 12:41:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.679883, 0.679898,
    0.118671, -0.118677,
    0.509868, -0.509907,
    0.689620, -0.689600,
    -0.375094, 0.375060,
    0.126397, -0.126352,
    -0.042263, 0.042269,
    -0.106123, 0.106103,
    0.287795, -0.287737,
    -0.088793, 0.088756,
    -0.651848, 0.651857,
    0.001072, -0.001094,
};

float Cg_init[2] = {
    -0.344667, -0.344670
};

float xstd_init[12] = {
    0.004060, 0.001774, 0.152449, 0.203815, 0.001120, 0.000193, 0.029511, 0.082045, 0.000673, 0.000171, 0.031757, 0.108405
};

float xmean_init[12] = {
    0.010391, -0.005684, 0.254150, 0.698503, 0.003406, -0.007760, 0.009206, 0.078027, 0.003540, -0.007725, 0.014104, 0.124558
};

