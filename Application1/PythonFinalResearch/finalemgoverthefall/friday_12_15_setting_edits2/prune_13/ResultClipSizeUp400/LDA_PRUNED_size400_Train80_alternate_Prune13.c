// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.72%
// test_accuracy: 76.79%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-17 12:42:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.393418, 1.393422,
    0.434412, -0.434409,
    0.374493, -0.374509,
    1.478339, -1.478328,
    -0.610936, 0.611048,
    0.234494, -0.234630,
    -0.097507, 0.097515,
    -0.109432, 0.109447,
    0.191576, -0.191581,
    -0.200972, 0.200967,
    -0.439972, 0.439978,
    0.078081, -0.078092,
};

float Cg_init[2] = {
    -0.650051, -0.650056
};

float xstd_init[12] = {
    0.004547, 0.001969, 0.154571, 0.210284, 0.001389, 0.000265, 0.031446, 0.099914, 0.000666, 0.000157, 0.026981, 0.095748
};

float xmean_init[12] = {
    0.010889, -0.005554, 0.250527, 0.692782, 0.003615, -0.007721, 0.013233, 0.086767, 0.003545, -0.007736, 0.011529, 0.114737
};

