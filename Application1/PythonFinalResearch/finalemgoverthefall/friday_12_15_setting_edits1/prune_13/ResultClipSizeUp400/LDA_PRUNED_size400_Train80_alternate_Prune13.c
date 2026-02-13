// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.47%
// test_accuracy: 71.43%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt', 'act2\\trial_24.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 13:17:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.757583, 0.757590,
    0.097698, -0.097711,
    0.691867, -0.691867,
    0.619131, -0.619118,
    -0.440684, 0.440776,
    0.045385, -0.045483,
    -0.092587, 0.092584,
    0.299920, -0.299907,
    -0.268723, 0.268723,
    -0.061431, 0.061400,
    -0.448831, 0.448848,
    0.505994, -0.505982,
};

float Cg_init[2] = {
    -0.494688, -0.494682
};

float xstd_init[12] = {
    0.004615, 0.001953, 0.347807, 0.126252, 0.001203, 0.000191, 0.056539, 0.132816, 0.000728, 0.000180, 0.058364, 0.143955
};

float xmean_init[12] = {
    0.010830, -0.005627, 0.464912, 1.032631, 0.003500, -0.007750, 0.016040, 0.617744, 0.003600, -0.007719, 0.020802, 0.701203
};

