// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.16%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:51:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.609379, 0.609414,
    -0.351379, 0.351380,
    0.603381, -0.603424,
    0.715246, -0.715230,
    1.115693, -1.115706,
    -0.828557, 0.828611,
    -0.324595, 0.324567,
    -0.103243, 0.103228,
    -0.696222, 0.696294,
    0.456402, -0.456557,
    -0.362977, 0.363029,
    0.091413, -0.091356,
};

float Cg_init[2] = {
    -0.392275, -0.392294
};

float xstd_init[12] = {
    0.003200, 0.001091, 0.100576, 0.172071, 0.001450, 0.000415, 0.022824, 0.073123, 0.001809, 0.000094, 0.016484, 0.071783
};

float xmean_init[12] = {
    0.009566, -0.006354, 0.170431, 0.582585, 0.003177, -0.007750, 0.006122, 0.050476, 0.003320, -0.007803, 0.004218, 0.071497
};

