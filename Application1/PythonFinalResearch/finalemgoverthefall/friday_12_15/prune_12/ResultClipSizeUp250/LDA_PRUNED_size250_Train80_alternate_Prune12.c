// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.63%
// test_accuracy: 75.00%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_8.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 12:45:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.705332, 2.705354,
    1.180161, -1.180160,
    0.361096, -0.361112,
    2.529222, -2.529217,
    0.231756, -0.231877,
    -0.126079, 0.126186,
    0.300015, -0.299996,
    -1.236876, 1.236868,
    -0.079681, 0.079635,
    -0.059958, 0.060032,
    -0.890997, 0.890979,
    0.371521, -0.371540,
};

float Cg_init[2] = {
    -1.203448, -1.203450
};

float xstd_init[12] = {
    0.004328, 0.001926, 0.155716, 0.199571, 0.001636, 0.000291, 0.041975, 0.105071, 0.000606, 0.000143, 0.025461, 0.096780
};

float xmean_init[12] = {
    0.011416, -0.005344, 0.264167, 0.719500, 0.003711, -0.007700, 0.013833, 0.093000, 0.003543, -0.007730, 0.011167, 0.123500
};

