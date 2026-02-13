// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.36%
// test_accuracy: 73.86%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt', 'act2\\trial_23.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-12 13:18:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.881493, 0.881469,
    0.363430, -0.363434,
    0.914961, -0.914943,
    0.536961, -0.536949,
    -0.610245, 0.610224,
    -0.008780, 0.008811,
    0.043514, -0.043519,
    0.459351, -0.459343,
    0.254192, -0.254147,
    -0.515086, 0.515019,
    -0.403897, 0.403912,
    0.495722, -0.495707,
};

float Cg_init[2] = {
    -0.564647, -0.564629
};

float xstd_init[12] = {
    0.004225, 0.001778, 0.345152, 0.124220, 0.001082, 0.000187, 0.051359, 0.136401, 0.000720, 0.000192, 0.054144, 0.143367
};

float xmean_init[12] = {
    0.010321, -0.005738, 0.448821, 1.035252, 0.003418, -0.007756, 0.013636, 0.610605, 0.003558, -0.007722, 0.018182, 0.698283
};

