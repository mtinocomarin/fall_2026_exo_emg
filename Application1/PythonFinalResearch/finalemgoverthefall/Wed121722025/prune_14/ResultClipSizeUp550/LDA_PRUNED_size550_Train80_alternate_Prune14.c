// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.22%
// test_accuracy: 50.62%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt', 'act1\\trial_30.txt', 'act1\\trial_8.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 13:48:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.034095, 1.034243,
    0.629991, -0.630265,
    -0.029910, 0.029939,
    -0.318195, 0.318335,
    -0.606110, 0.606107,
    -0.214384, 0.214347,
    0.342663, -0.342643,
    0.137939, -0.137910,
    -0.875319, 0.875375,
    0.416583, -0.416641,
    -0.022945, 0.022937,
    0.198663, -0.198655,
};

float Cg_init[2] = {
    -0.408843, -0.408898
};

float xstd_init[12] = {
    0.001117, 0.000080, 0.011883, 0.080610, 0.003099, 0.000842, 0.092814, 0.180401, 0.000888, 0.000115, 0.018345, 0.070632
};

float xmean_init[12] = {
    0.006489, -0.007686, 0.004148, 0.143000, 0.008635, -0.006839, 0.106296, 0.448111, 0.004365, -0.007718, 0.009333, 0.125000
};

