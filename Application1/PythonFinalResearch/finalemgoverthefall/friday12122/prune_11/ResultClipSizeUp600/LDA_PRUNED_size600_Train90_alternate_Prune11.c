// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.64%
// test_accuracy: 80.68%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 16:08:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.641357, 0.641334,
    -0.226601, 0.226615,
    0.273749, -0.273752,
    0.832608, -0.832602,
    0.972559, -0.972377,
    -1.116199, 1.115920,
    -0.111205, 0.111276,
    -0.109244, 0.109268,
    1.156124, -1.156178,
    -0.263911, 0.264031,
    -0.447227, 0.447189,
    -0.002975, 0.002923,
};

float Cg_init[2] = {
    -0.642510, -0.642493
};

float xstd_init[12] = {
    0.003582, 0.001266, 0.105075, 0.170318, 0.001443, 0.000446, 0.021775, 0.073760, 0.000527, 0.000081, 0.017002, 0.063697
};

float xmean_init[12] = {
    0.009782, -0.006291, 0.170619, 0.586837, 0.003182, -0.007727, 0.006012, 0.050546, 0.003098, -0.007812, 0.004800, 0.065746
};

