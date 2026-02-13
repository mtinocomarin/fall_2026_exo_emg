// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.00%
// test_accuracy: 75.00%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:11:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.927350, 0.927370,
    0.188201, -0.188207,
    0.543843, -0.543849,
    0.300522, -0.300525,
    -0.268822, 0.268665,
    -0.014098, 0.014241,
    -0.033651, 0.033668,
    0.254694, -0.254684,
    -0.059578, 0.059457,
    -0.068955, 0.069148,
    -0.306709, 0.306638,
    0.246625, -0.246629,
};

float Cg_init[2] = {
    -0.286715, -0.286712
};

float xstd_init[12] = {
    0.004868, 0.002292, 0.340091, 0.122968, 0.001406, 0.000254, 0.064590, 0.140478, 0.000653, 0.000150, 0.049931, 0.149741
};

float xmean_init[12] = {
    0.011178, -0.005386, 0.470222, 1.036533, 0.003548, -0.007730, 0.017778, 0.624133, 0.003553, -0.007733, 0.017333, 0.696133
};

