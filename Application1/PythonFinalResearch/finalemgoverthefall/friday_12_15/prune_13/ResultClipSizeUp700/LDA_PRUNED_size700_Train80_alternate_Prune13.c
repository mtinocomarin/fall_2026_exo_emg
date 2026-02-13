// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.21%
// test_accuracy: 68.27%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_24.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_22.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-12 12:46:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.880464, 0.880472,
    0.472124, -0.472092,
    0.559053, -0.559082,
    0.822788, -0.822788,
    -0.765959, 0.765859,
    0.367065, -0.366946,
    -0.055520, 0.055518,
    -0.060184, 0.060162,
    0.434003, -0.434072,
    -0.178138, 0.178281,
    -0.640854, 0.640825,
    -0.118850, 0.118797,
};

float Cg_init[2] = {
    -0.473551, -0.473560
};

float xstd_init[12] = {
    0.003942, 0.001705, 0.152766, 0.210130, 0.001190, 0.000209, 0.031275, 0.085521, 0.000709, 0.000183, 0.030654, 0.112518
};

float xmean_init[12] = {
    0.010303, -0.005742, 0.251607, 0.692713, 0.003483, -0.007748, 0.011120, 0.083320, 0.003567, -0.007720, 0.013603, 0.128259
};

