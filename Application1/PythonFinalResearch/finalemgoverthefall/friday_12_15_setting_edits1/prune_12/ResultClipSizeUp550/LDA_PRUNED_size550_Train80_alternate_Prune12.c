// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 66.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:17:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.656393, 0.656361,
    -0.151737, 0.151760,
    0.841128, -0.841116,
    0.481266, -0.481256,
    -0.565783, 0.565906,
    0.064976, -0.065121,
    0.067555, -0.067540,
    0.285327, -0.285309,
    0.158074, -0.158105,
    -0.320770, 0.320776,
    -0.352727, 0.352736,
    0.484968, -0.484963,
};

float Cg_init[2] = {
    -0.424228, -0.424221
};

float xstd_init[12] = {
    0.004652, 0.002149, 0.347534, 0.127977, 0.001112, 0.000204, 0.048065, 0.139483, 0.000710, 0.000182, 0.054891, 0.136505
};

float xmean_init[12] = {
    0.010549, -0.005622, 0.443333, 1.030900, 0.003428, -0.007754, 0.013167, 0.621100, 0.003571, -0.007724, 0.016500, 0.703600
};

