// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.11%
// test_accuracy: 70.83%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_29.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_37.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_26.txt', 'act2\\trial_40.txt', 'act2\\trial_14.txt', 'act2\\trial_3.txt', 'act2\\trial_37.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:18:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.657494, 0.657512,
    0.242921, -0.242958,
    0.829033, -0.829010,
    0.464942, -0.464934,
    -0.833537, 0.833917,
    0.301629, -0.302039,
    0.102673, -0.102663,
    0.229957, -0.229934,
    0.438729, -0.438717,
    -0.584553, 0.584514,
    -0.394641, 0.394663,
    0.573429, -0.573448,
};

float Cg_init[2] = {
    -0.502676, -0.502683
};

float xstd_init[12] = {
    0.003810, 0.001568, 0.342561, 0.124329, 0.001132, 0.000207, 0.052222, 0.128894, 0.000672, 0.000172, 0.050156, 0.137885
};

float xmean_init[12] = {
    0.010080, -0.005868, 0.437035, 1.035555, 0.003415, -0.007755, 0.012593, 0.616444, 0.003494, -0.007735, 0.014321, 0.699185
};

