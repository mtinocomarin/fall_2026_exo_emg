// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.14%
// test_accuracy: 73.44%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:12:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.388543, 1.388553,
    0.484065, -0.484073,
    0.872162, -0.872162,
    0.265400, -0.265396,
    0.235502, -0.235561,
    -0.325201, 0.325256,
    -0.158196, 0.158202,
    0.136865, -0.136864,
    -0.071484, 0.071479,
    -0.405160, 0.405146,
    0.043355, -0.043343,
    0.283351, -0.283339,
};

float Cg_init[2] = {
    -0.354460, -0.354458
};

float xstd_init[12] = {
    0.004545, 0.002058, 0.342065, 0.121454, 0.001497, 0.000275, 0.067430, 0.144890, 0.000645, 0.000162, 0.050702, 0.144447
};

float xmean_init[12] = {
    0.011233, -0.005429, 0.477678, 1.040714, 0.003597, -0.007719, 0.019345, 0.640714, 0.003568, -0.007726, 0.016071, 0.703750
};

