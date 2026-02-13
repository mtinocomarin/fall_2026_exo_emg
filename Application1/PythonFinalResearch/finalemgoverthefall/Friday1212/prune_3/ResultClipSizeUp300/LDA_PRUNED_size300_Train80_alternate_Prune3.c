// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.07%
// test_accuracy: 75.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:46:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.699327, 0.699335,
    -0.140477, 0.140514,
    0.553125, -0.553145,
    0.594913, -0.594917,
    1.011339, -1.011371,
    -1.384807, 1.384871,
    0.088727, -0.088760,
    0.102525, -0.102526,
    -0.240937, 0.240982,
    0.480748, -0.480912,
    -0.463977, 0.464035,
    0.103216, -0.103145,
};

float Cg_init[2] = {
    -0.339212, -0.339229
};

float xstd_init[12] = {
    0.003517, 0.001254, 0.099673, 0.168562, 0.001645, 0.000505, 0.030771, 0.085214, 0.000928, 0.000099, 0.020130, 0.067345
};

float xmean_init[12] = {
    0.009668, -0.006298, 0.169196, 0.569931, 0.003218, -0.007720, 0.007540, 0.050345, 0.003192, -0.007806, 0.004782, 0.066345
};

