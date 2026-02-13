// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_2\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.21%
// test_accuracy: 73.30%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 12:37:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.851662, 0.851712,
    0.185355, -0.185413,
    0.322662, -0.322716,
    0.612701, -0.612679,
    -0.419199, 0.419193,
    0.273594, -0.273562,
    -0.066975, 0.066992,
    -0.086554, 0.086516,
    0.138277, -0.138108,
    -0.047401, 0.047038,
    -0.350473, 0.350575,
    -0.025298, 0.025421,
};

float Cg_init[2] = {
    -0.222819, -0.222823
};

float xstd_init[12] = {
    0.004538, 0.002095, 0.150114, 0.202398, 0.001093, 0.000195, 0.027843, 0.084168, 0.000668, 0.000163, 0.028036, 0.105112
};

float xmean_init[12] = {
    0.010511, -0.005633, 0.244163, 0.682485, 0.003390, -0.007761, 0.009374, 0.077697, 0.003519, -0.007736, 0.012525, 0.116061
};

