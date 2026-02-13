// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.47%
// test_accuracy: 53.33%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 13:45:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.484784, 0.484759,
    0.345993, -0.345944,
    -0.059775, 0.059773,
    -0.173304, 0.173269,
    -0.300009, 0.300083,
    -0.237654, 0.237591,
    -0.055631, 0.055627,
    0.302782, -0.302793,
    -0.569972, 0.570000,
    0.317792, -0.317829,
    0.014209, -0.014193,
    0.053392, -0.053398,
};

float Cg_init[2] = {
    -0.175607, -0.175606
};

float xstd_init[12] = {
    0.001051, 0.000081, 0.012068, 0.081167, 0.003220, 0.000872, 0.093408, 0.187379, 0.000880, 0.000115, 0.019893, 0.075681
};

float xmean_init[12] = {
    0.006531, -0.007685, 0.004741, 0.147223, 0.008475, -0.006876, 0.101889, 0.429667, 0.004371, -0.007711, 0.010926, 0.129445
};

