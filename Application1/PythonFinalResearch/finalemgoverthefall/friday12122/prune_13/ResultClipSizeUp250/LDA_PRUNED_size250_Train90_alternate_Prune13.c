// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 93.48%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 16:08:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.778777, 1.778781,
    0.392843, -0.392908,
    0.608084, -0.608101,
    1.304485, -1.304436,
    1.585767, -1.585781,
    -1.855371, 1.855392,
    0.433675, -0.433656,
    -0.642670, 0.642676,
    1.113202, -1.113372,
    -0.645728, 0.646108,
    -0.546489, 0.546389,
    0.517170, -0.517301,
};

float Cg_init[2] = {
    -0.985735, -0.985766
};

float xstd_init[12] = {
    0.004173, 0.001542, 0.100407, 0.176947, 0.001895, 0.000593, 0.037121, 0.097167, 0.000588, 0.000100, 0.021427, 0.070065
};

float xmean_init[12] = {
    0.010203, -0.006116, 0.170869, 0.575000, 0.003511, -0.007638, 0.011014, 0.061087, 0.003177, -0.007802, 0.005507, 0.070435
};

