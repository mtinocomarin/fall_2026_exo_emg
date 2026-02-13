// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.32%
// test_accuracy: 67.43%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_10.txt', 'act2\\trial_26.txt', 'act2\\trial_17.txt', 'act2\\trial_23.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 13:17:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.562362, 0.562349,
    0.124915, -0.124911,
    0.766126, -0.766119,
    0.237524, -0.237516,
    -0.583739, 0.583478,
    0.238904, -0.238623,
    0.003443, -0.003437,
    0.269422, -0.269435,
    0.350212, -0.350139,
    -0.408764, 0.408646,
    -0.346434, 0.346474,
    0.409298, -0.409279,
};

float Cg_init[2] = {
    -0.340729, -0.340712
};

float xstd_init[12] = {
    0.003664, 0.001542, 0.331992, 0.123590, 0.000914, 0.000161, 0.040461, 0.131039, 0.000646, 0.000162, 0.048812, 0.140170
};

float xmean_init[12] = {
    0.010032, -0.005882, 0.437808, 1.042947, 0.003309, -0.007776, 0.008860, 0.612263, 0.003494, -0.007740, 0.014123, 0.690632
};

