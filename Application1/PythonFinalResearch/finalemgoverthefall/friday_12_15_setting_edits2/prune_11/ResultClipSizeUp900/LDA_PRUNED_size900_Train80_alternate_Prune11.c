// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_11\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.65%
// test_accuracy: 66.91%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_31.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 12:41:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.792867, 0.792898,
    0.355238, -0.355227,
    0.668519, -0.668560,
    0.692846, -0.692840,
    -0.546838, 0.546698,
    0.313442, -0.313270,
    -0.172930, 0.172926,
    0.055570, -0.055609,
    0.382407, -0.382432,
    -0.382866, 0.382930,
    -0.384780, 0.384773,
    0.110930, -0.110966,
};

float Cg_init[2] = {
    -0.414227, -0.414236
};

float xstd_init[12] = {
    0.003852, 0.001652, 0.152850, 0.210511, 0.001033, 0.000179, 0.027185, 0.078997, 0.000661, 0.000166, 0.029489, 0.104065
};

float xmean_init[12] = {
    0.010018, -0.005856, 0.244557, 0.680672, 0.003367, -0.007768, 0.008926, 0.074006, 0.003504, -0.007735, 0.011727, 0.116303
};

