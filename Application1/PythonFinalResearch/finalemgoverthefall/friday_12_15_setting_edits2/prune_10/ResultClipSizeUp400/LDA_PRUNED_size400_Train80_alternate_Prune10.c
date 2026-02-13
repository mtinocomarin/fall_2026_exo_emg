// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_10\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.66%
// test_accuracy: 76.79%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 12:40:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.393628, 1.393638,
    0.403495, -0.403486,
    0.273047, -0.273073,
    1.387975, -1.387958,
    -0.589426, 0.589304,
    0.107033, -0.106899,
    0.021205, -0.021208,
    -0.017272, 0.017256,
    -0.013628, 0.013568,
    0.176638, -0.176514,
    -0.598372, 0.598338,
    -0.035855, 0.035823,
};

float Cg_init[2] = {
    -0.568683, -0.568682
};

float xstd_init[12] = {
    0.004533, 0.001953, 0.149375, 0.205220, 0.001317, 0.000251, 0.029767, 0.096133, 0.000653, 0.000154, 0.027005, 0.097938
};

float xmean_init[12] = {
    0.010883, -0.005549, 0.247620, 0.691429, 0.003560, -0.007727, 0.012294, 0.086364, 0.003543, -0.007732, 0.012727, 0.118312
};

