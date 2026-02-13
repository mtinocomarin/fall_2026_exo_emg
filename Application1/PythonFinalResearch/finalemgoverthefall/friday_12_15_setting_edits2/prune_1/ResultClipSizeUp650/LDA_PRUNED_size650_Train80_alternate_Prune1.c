// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_1\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.00%
// test_accuracy: 70.31%
// prune_trials_per_label: 1
// removed_trials: {'act2': ['act2\\trial_20.txt'], 'act1': ['act1\\trial_33.txt']}
// generated: 2025-12-17 12:36:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.698198, 0.698227,
    0.053190, -0.053228,
    0.260256, -0.260297,
    0.515081, -0.515065,
    -0.373484, 0.373342,
    0.165537, -0.165370,
    -0.022972, 0.022999,
    -0.022831, 0.022783,
    0.208082, -0.207900,
    -0.105409, 0.105136,
    -0.326351, 0.326421,
    0.030622, -0.030569,
};

float Cg_init[2] = {
    -0.174751, -0.174748
};

float xstd_init[12] = {
    0.004682, 0.002207, 0.152883, 0.202785, 0.001064, 0.000187, 0.027322, 0.081222, 0.000647, 0.000156, 0.028406, 0.102660
};

float xmean_init[12] = {
    0.010546, -0.005580, 0.247420, 0.687204, 0.003375, -0.007764, 0.008746, 0.077258, 0.003516, -0.007736, 0.012401, 0.117097
};

