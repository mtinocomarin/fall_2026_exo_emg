// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.24%
// test_accuracy: 55.47%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt']}
// generated: 2025-12-17 13:44:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.543150, 0.543035,
    0.320512, -0.320215,
    0.156196, -0.156223,
    -0.183731, 0.183557,
    -0.550684, 0.550670,
    -0.197895, 0.197924,
    0.244463, -0.244460,
    0.323987, -0.323974,
    -0.608238, 0.608316,
    0.198964, -0.199122,
    -0.020450, 0.020506,
    0.197466, -0.197437,
};

float Cg_init[2] = {
    -0.225481, -0.225464
};

float xstd_init[12] = {
    0.001012, 0.000080, 0.012107, 0.081811, 0.002992, 0.000804, 0.083086, 0.179006, 0.000848, 0.000112, 0.017799, 0.071328
};

float xmean_init[12] = {
    0.006454, -0.007688, 0.004615, 0.144808, 0.008704, -0.006844, 0.101731, 0.445481, 0.004348, -0.007716, 0.008974, 0.128173
};

