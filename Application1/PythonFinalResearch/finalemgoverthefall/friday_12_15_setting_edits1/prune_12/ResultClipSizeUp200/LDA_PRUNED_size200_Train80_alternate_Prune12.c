// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.50%
// test_accuracy: 85.42%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-12 13:16:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.197716, 1.197722,
    0.269020, -0.269011,
    1.128242, -1.128253,
    0.603483, -0.603483,
    -0.354191, 0.354093,
    -0.073218, 0.073314,
    -0.058894, 0.058900,
    0.353840, -0.353841,
    -0.075990, 0.075952,
    -0.150665, 0.150716,
    -0.575078, 0.575065,
    0.371174, -0.371169,
};

float Cg_init[2] = {
    -0.675005, -0.675006
};

float xstd_init[12] = {
    0.003975, 0.001758, 0.314991, 0.113192, 0.001632, 0.000291, 0.079204, 0.145998, 0.000689, 0.000169, 0.043611, 0.144542
};

float xmean_init[12] = {
    0.010567, -0.005796, 0.412778, 1.039000, 0.003678, -0.007718, 0.021111, 0.623000, 0.003574, -0.007728, 0.015000, 0.694667
};

