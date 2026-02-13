// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.14%
// test_accuracy: 79.46%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 12:37:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.014984, 1.014981,
    0.223228, -0.223182,
    0.282343, -0.282371,
    0.848106, -0.848096,
    -0.455297, 0.455287,
    0.082888, -0.082900,
    -0.021053, 0.021058,
    0.004896, -0.004891,
    0.020025, -0.020110,
    0.137353, -0.137152,
    -0.485002, 0.484955,
    -0.131379, 0.131290,
};

float Cg_init[2] = {
    -0.354653, -0.354655
};

float xstd_init[12] = {
    0.004710, 0.002128, 0.144991, 0.202260, 0.001303, 0.000236, 0.033066, 0.093934, 0.000682, 0.000161, 0.028544, 0.103741
};

float xmean_init[12] = {
    0.010776, -0.005577, 0.246327, 0.682755, 0.003506, -0.007739, 0.012109, 0.082653, 0.003536, -0.007732, 0.013401, 0.119796
};

