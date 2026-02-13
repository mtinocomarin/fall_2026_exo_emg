// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.00%
// test_accuracy: 75.00%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 16:08:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.823454, 0.823490,
    -0.210714, 0.210755,
    0.474077, -0.474117,
    1.039626, -1.039635,
    0.994829, -0.994879,
    -0.827166, 0.827202,
    -0.204434, 0.204429,
    -0.216967, 0.216978,
    -0.586703, 0.586999,
    0.337566, -0.338229,
    -0.378567, 0.378777,
    0.224893, -0.224607,
};

float Cg_init[2] = {
    -0.469177, -0.469221
};

float xstd_init[12] = {
    0.003545, 0.001183, 0.102691, 0.173342, 0.001562, 0.000452, 0.023427, 0.074146, 0.001847, 0.000093, 0.017730, 0.067744
};

float xmean_init[12] = {
    0.009806, -0.006316, 0.171334, 0.585333, 0.003221, -0.007734, 0.006000, 0.049333, 0.003281, -0.007808, 0.005056, 0.068584
};

