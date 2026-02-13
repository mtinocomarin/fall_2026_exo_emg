// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.24%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:13:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.782075, 0.782057,
    0.043964, -0.043962,
    0.605452, -0.605436,
    0.455486, -0.455491,
    -0.417256, 0.417346,
    0.075596, -0.075691,
    0.013633, -0.013635,
    0.230491, -0.230473,
    -0.116356, 0.116344,
    -0.029593, 0.029602,
    -0.369881, 0.369882,
    0.335784, -0.335780,
};

float Cg_init[2] = {
    -0.337340, -0.337336
};

float xstd_init[12] = {
    0.004714, 0.002112, 0.337686, 0.120878, 0.001292, 0.000227, 0.059867, 0.132697, 0.000677, 0.000162, 0.052159, 0.144098
};

float xmean_init[12] = {
    0.010845, -0.005565, 0.452930, 1.031868, 0.003509, -0.007741, 0.016117, 0.620439, 0.003558, -0.007730, 0.017399, 0.699230
};

