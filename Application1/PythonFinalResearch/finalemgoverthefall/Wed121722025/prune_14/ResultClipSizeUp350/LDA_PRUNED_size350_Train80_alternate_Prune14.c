// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.43%
// test_accuracy: 58.33%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-17 13:48:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.822368, 0.822314,
    0.288112, -0.287991,
    0.233351, -0.233353,
    -0.002709, 0.002637,
    -1.057428, 1.057461,
    0.078076, -0.078096,
    0.411587, -0.411606,
    -0.060068, 0.060051,
    -1.416202, 1.416100,
    0.786615, -0.786444,
    -0.375676, 0.375624,
    0.389883, -0.389922,
};

float Cg_init[2] = {
    -0.556336, -0.556301
};

float xstd_init[12] = {
    0.001003, 0.000076, 0.011879, 0.080253, 0.002915, 0.000830, 0.084170, 0.171378, 0.000917, 0.000129, 0.017688, 0.074239
};

float xmean_init[12] = {
    0.006464, -0.007685, 0.004568, 0.142037, 0.008686, -0.006837, 0.102222, 0.453704, 0.004327, -0.007720, 0.008395, 0.127407
};

