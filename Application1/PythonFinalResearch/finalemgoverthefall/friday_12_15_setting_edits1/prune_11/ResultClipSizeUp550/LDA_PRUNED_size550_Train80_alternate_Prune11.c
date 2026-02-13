// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.29%
// test_accuracy: 66.25%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-12 13:16:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.619023, 0.618997,
    -0.114032, 0.114047,
    0.827569, -0.827556,
    0.441798, -0.441796,
    -0.677106, 0.677292,
    0.116541, -0.116750,
    0.123746, -0.123734,
    0.276316, -0.276295,
    0.179536, -0.179563,
    -0.367787, 0.367796,
    -0.291674, 0.291682,
    0.468210, -0.468215,
};

float Cg_init[2] = {
    -0.416543, -0.416542
};

float xstd_init[12] = {
    0.004638, 0.002133, 0.346734, 0.126736, 0.001146, 0.000206, 0.049957, 0.137580, 0.000703, 0.000181, 0.055772, 0.137191
};

float xmean_init[12] = {
    0.010624, -0.005604, 0.454126, 1.032762, 0.003454, -0.007750, 0.014444, 0.620857, 0.003568, -0.007724, 0.016825, 0.704857
};

