// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.72%
// test_accuracy: 75.69%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-17 12:42:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.257071, 1.257086,
    0.415638, -0.415621,
    0.433344, -0.433368,
    1.293966, -1.293962,
    -0.530691, 0.530702,
    0.260570, -0.260582,
    -0.033263, 0.033259,
    -0.302293, 0.302289,
    0.415532, -0.415591,
    -0.249443, 0.249557,
    -0.390568, 0.390547,
    -0.041625, 0.041576,
};

float Cg_init[2] = {
    -0.574325, -0.574335
};

float xstd_init[12] = {
    0.004455, 0.001962, 0.156494, 0.211181, 0.001375, 0.000248, 0.035761, 0.100240, 0.000666, 0.000164, 0.025161, 0.100586
};

float xmean_init[12] = {
    0.010668, -0.005599, 0.245225, 0.684912, 0.003616, -0.007724, 0.014035, 0.091345, 0.003531, -0.007734, 0.009825, 0.117193
};

