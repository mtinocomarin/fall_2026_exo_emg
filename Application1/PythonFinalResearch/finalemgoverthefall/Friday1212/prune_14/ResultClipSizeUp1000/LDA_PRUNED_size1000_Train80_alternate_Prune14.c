// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.43%
// test_accuracy: 75.33%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt', 'act1\\trial_26.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_10.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:53:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.861305, 0.861248,
    -0.129550, 0.129589,
    0.773752, -0.773757,
    0.547214, -0.547201,
    1.229989, -1.229907,
    -1.136791, 1.136609,
    -0.121133, 0.121220,
    -0.084969, 0.084983,
    0.617556, -0.617640,
    0.049612, -0.049331,
    -0.385049, 0.384947,
    0.082062, -0.082186,
};

float Cg_init[2] = {
    -0.589613, -0.589599
};

float xstd_init[12] = {
    0.002909, 0.001052, 0.096870, 0.161341, 0.001136, 0.000332, 0.016354, 0.064951, 0.000544, 0.000078, 0.015771, 0.062541
};

float xmean_init[12] = {
    0.009309, -0.006407, 0.171268, 0.578421, 0.002970, -0.007791, 0.003548, 0.044094, 0.003095, -0.007813, 0.004094, 0.065147
};

