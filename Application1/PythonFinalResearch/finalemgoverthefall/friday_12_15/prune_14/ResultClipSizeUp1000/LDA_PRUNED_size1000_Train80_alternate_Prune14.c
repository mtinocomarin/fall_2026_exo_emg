// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.38%
// test_accuracy: 63.16%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_28.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_3.txt', 'act2\\trial_29.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 12:47:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.595446, 0.595461,
    0.294874, -0.294861,
    0.895352, -0.895386,
    0.734742, -0.734738,
    -0.644896, 0.644917,
    0.267930, -0.267941,
    -0.046310, 0.046311,
    -0.044496, 0.044476,
    0.499439, -0.499418,
    -0.468248, 0.468237,
    -0.429991, 0.430006,
    0.022031, -0.022060,
};

float Cg_init[2] = {
    -0.570396, -0.570405
};

float xstd_init[12] = {
    0.003760, 0.001641, 0.156017, 0.209762, 0.001050, 0.000189, 0.027156, 0.081005, 0.000677, 0.000173, 0.030615, 0.105504
};

float xmean_init[12] = {
    0.010242, -0.005752, 0.259104, 0.696082, 0.003391, -0.007763, 0.008694, 0.076608, 0.003516, -0.007732, 0.012437, 0.118188
};

