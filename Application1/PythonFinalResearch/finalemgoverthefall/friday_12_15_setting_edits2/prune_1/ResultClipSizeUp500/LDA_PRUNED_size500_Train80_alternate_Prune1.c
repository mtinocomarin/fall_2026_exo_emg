// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_1\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.70%
// test_accuracy: 76.39%
// prune_trials_per_label: 1
// removed_trials: {'act2': ['act2\\trial_15.txt'], 'act1': ['act1\\trial_33.txt']}
// generated: 2025-12-17 12:36:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.945446, 0.945441,
    0.208777, -0.208809,
    0.206140, -0.206171,
    0.690961, -0.690949,
    -0.322634, 0.322705,
    0.125208, -0.125233,
    -0.054400, 0.054396,
    -0.029885, 0.029860,
    0.200751, -0.200544,
    -0.033887, 0.033470,
    -0.369819, 0.369930,
    -0.059890, 0.060022,
};

float Cg_init[2] = {
    -0.230324, -0.230327
};

float xstd_init[12] = {
    0.004777, 0.002218, 0.150527, 0.204187, 0.001157, 0.000205, 0.029262, 0.087535, 0.000666, 0.000161, 0.028614, 0.104139
};

float xmean_init[12] = {
    0.010753, -0.005525, 0.248316, 0.686309, 0.003420, -0.007756, 0.009988, 0.077921, 0.003525, -0.007735, 0.012855, 0.117276
};

