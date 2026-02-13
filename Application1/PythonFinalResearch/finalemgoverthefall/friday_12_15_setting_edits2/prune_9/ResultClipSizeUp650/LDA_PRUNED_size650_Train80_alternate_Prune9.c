// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.42%
// test_accuracy: 69.27%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_33.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 12:40:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.761005, 0.761016,
    0.168496, -0.168510,
    0.431737, -0.431765,
    0.764597, -0.764576,
    -0.372876, 0.372954,
    0.149989, -0.150076,
    -0.031924, 0.031937,
    -0.198816, 0.198814,
    0.283547, -0.283462,
    -0.090087, 0.089936,
    -0.620388, 0.620431,
    -0.008302, 0.008328,
};

float Cg_init[2] = {
    -0.354450, -0.354449
};

float xstd_init[12] = {
    0.004129, 0.001775, 0.149848, 0.204648, 0.001164, 0.000201, 0.030411, 0.084981, 0.000676, 0.000171, 0.030483, 0.106716
};

float xmean_init[12] = {
    0.010327, -0.005725, 0.245363, 0.689058, 0.003437, -0.007755, 0.009855, 0.080073, 0.003539, -0.007728, 0.013333, 0.120580
};

