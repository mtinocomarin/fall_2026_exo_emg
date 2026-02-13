// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 90.66%
// test_accuracy: 77.78%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:09:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.029713, 1.029714,
    -0.181026, 0.181060,
    0.668197, -0.668231,
    0.986120, -0.986116,
    1.315874, -1.315811,
    -1.495669, 1.495560,
    -0.142340, 0.142362,
    -0.180680, 0.180704,
    1.180118, -1.180010,
    0.102826, -0.103096,
    -0.732950, 0.733048,
    -0.091126, 0.091208,
};

float Cg_init[2] = {
    -0.875020, -0.875014
};

float xstd_init[12] = {
    0.003501, 0.001168, 0.101103, 0.169281, 0.001626, 0.000508, 0.024944, 0.080825, 0.000533, 0.000084, 0.018338, 0.063918
};

float xmean_init[12] = {
    0.009803, -0.006297, 0.165859, 0.585151, 0.003325, -0.007693, 0.007744, 0.055859, 0.003120, -0.007812, 0.005051, 0.067071
};

