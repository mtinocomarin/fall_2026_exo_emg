// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.44%
// test_accuracy: 73.68%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_10.txt', 'act2\\trial_34.txt', 'act2\\trial_1.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 16:09:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.624313, 0.624285,
    -0.323437, 0.323467,
    0.517347, -0.517378,
    0.633719, -0.633700,
    0.840237, -0.840248,
    -0.856474, 0.856510,
    -0.109746, 0.109738,
    -0.081550, 0.081533,
    0.734172, -0.734219,
    0.092134, -0.091990,
    -0.377418, 0.377376,
    -0.011756, 0.011680,
};

float Cg_init[2] = {
    -0.510700, -0.510712
};

float xstd_init[12] = {
    0.003043, 0.001201, 0.100064, 0.163178, 0.001164, 0.000351, 0.017723, 0.064238, 0.000533, 0.000073, 0.014124, 0.061525
};

float xmean_init[12] = {
    0.009413, -0.006359, 0.173792, 0.584302, 0.003001, -0.007775, 0.004363, 0.044165, 0.003063, -0.007818, 0.003387, 0.061419
};

