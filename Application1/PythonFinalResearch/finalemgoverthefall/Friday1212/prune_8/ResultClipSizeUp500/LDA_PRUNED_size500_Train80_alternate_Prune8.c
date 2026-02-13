// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.26%
// test_accuracy: 74.31%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:50:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.955078, 0.955061,
    -0.075579, 0.075625,
    0.528758, -0.528783,
    0.882849, -0.882847,
    0.847019, -0.846993,
    -1.131288, 1.131261,
    0.017276, -0.017273,
    0.073402, -0.073398,
    -0.619456, 0.619529,
    0.666389, -0.666582,
    -0.609929, 0.610015,
    0.226656, -0.226593,
};

float Cg_init[2] = {
    -0.452004, -0.452028
};

float xstd_init[12] = {
    0.003679, 0.001388, 0.105872, 0.172372, 0.001661, 0.000494, 0.028773, 0.083836, 0.001681, 0.000093, 0.018219, 0.065225
};

float xmean_init[12] = {
    0.009843, -0.006214, 0.174136, 0.588241, 0.003253, -0.007721, 0.007284, 0.053704, 0.003268, -0.007808, 0.004938, 0.066667
};

