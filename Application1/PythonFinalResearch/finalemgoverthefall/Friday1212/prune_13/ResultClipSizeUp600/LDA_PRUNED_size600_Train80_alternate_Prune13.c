// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.43%
// test_accuracy: 73.86%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:52:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.775144, 0.775125,
    -0.246480, 0.246507,
    0.413683, -0.413702,
    0.892752, -0.892744,
    1.070819, -1.070786,
    -1.089931, 1.089867,
    -0.296760, 0.296786,
    -0.006609, 0.006614,
    1.164022, -1.164039,
    -0.384640, 0.384722,
    -0.559412, 0.559381,
    0.247810, -0.247852,
};

float Cg_init[2] = {
    -0.747537, -0.747537
};

float xstd_init[12] = {
    0.003394, 0.001202, 0.102825, 0.171708, 0.001443, 0.000445, 0.022520, 0.075436, 0.000527, 0.000087, 0.018442, 0.061842
};

float xmean_init[12] = {
    0.009726, -0.006287, 0.171292, 0.590048, 0.003148, -0.007740, 0.006061, 0.049761, 0.003097, -0.007811, 0.004976, 0.064689
};

