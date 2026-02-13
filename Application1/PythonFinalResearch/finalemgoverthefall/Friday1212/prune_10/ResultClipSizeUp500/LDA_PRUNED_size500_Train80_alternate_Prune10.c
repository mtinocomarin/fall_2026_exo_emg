// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.14%
// test_accuracy: 73.61%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:51:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.808468, 0.808451,
    -0.239809, 0.239848,
    0.511918, -0.511946,
    0.836838, -0.836832,
    1.070220, -1.070204,
    -1.332664, 1.332657,
    -0.053601, 0.053590,
    -0.041864, 0.041860,
    0.979555, -0.979516,
    -0.145610, 0.145567,
    -0.637793, 0.637808,
    0.208287, -0.208294,
};

float Cg_init[2] = {
    -0.685845, -0.685842
};

float xstd_init[12] = {
    0.003678, 0.001396, 0.105487, 0.174534, 0.001637, 0.000515, 0.029967, 0.086236, 0.000510, 0.000086, 0.018852, 0.062104
};

float xmean_init[12] = {
    0.009825, -0.006221, 0.171448, 0.588687, 0.003248, -0.007710, 0.007946, 0.054646, 0.003100, -0.007811, 0.005118, 0.065253
};

