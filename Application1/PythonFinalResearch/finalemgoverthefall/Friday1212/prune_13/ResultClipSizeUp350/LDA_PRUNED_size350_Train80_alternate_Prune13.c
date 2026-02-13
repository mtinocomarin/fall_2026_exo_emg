// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.98%
// test_accuracy: 70.83%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 15:52:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.496651, 1.496622,
    -0.181399, 0.181323,
    0.856193, -0.856200,
    1.373424, -1.373370,
    1.587519, -1.587506,
    -1.740122, 1.740068,
    0.181798, -0.181744,
    -0.259930, 0.259931,
    -0.548392, 0.548269,
    0.672923, -0.672469,
    -0.708979, 0.708814,
    0.222678, -0.222880,
};

float Cg_init[2] = {
    -0.768654, -0.768614
};

float xstd_init[12] = {
    0.004046, 0.001537, 0.105430, 0.178404, 0.001848, 0.000568, 0.036307, 0.096415, 0.001182, 0.000102, 0.023059, 0.068359
};

float xmean_init[12] = {
    0.010085, -0.006149, 0.174854, 0.576842, 0.003402, -0.007689, 0.009708, 0.058947, 0.003343, -0.007795, 0.006433, 0.072982
};

