// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.52%
// test_accuracy: 73.86%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:12:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.556741, 0.556738,
    -0.054677, 0.054658,
    0.402002, -0.402004,
    0.325382, -0.325360,
    -0.408103, 0.408101,
    0.078988, -0.078978,
    0.017146, -0.017146,
    0.270856, -0.270851,
    0.191033, -0.190909,
    -0.231640, 0.231447,
    -0.309479, 0.309539,
    0.261471, -0.261455,
};

float Cg_init[2] = {
    -0.221180, -0.221171
};

float xstd_init[12] = {
    0.004723, 0.002244, 0.353730, 0.120602, 0.001096, 0.000195, 0.049199, 0.132240, 0.000660, 0.000161, 0.046682, 0.141824
};

float xmean_init[12] = {
    0.010678, -0.005533, 0.454445, 1.032484, 0.003400, -0.007759, 0.011919, 0.618970, 0.003539, -0.007733, 0.015758, 0.698849
};

