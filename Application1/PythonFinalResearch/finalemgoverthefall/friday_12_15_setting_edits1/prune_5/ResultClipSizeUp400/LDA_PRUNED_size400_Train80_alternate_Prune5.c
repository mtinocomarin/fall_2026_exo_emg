// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.60%
// test_accuracy: 74.11%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:13:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.837079, 0.837075,
    0.128966, -0.128957,
    0.588523, -0.588518,
    0.447765, -0.447768,
    -0.319029, 0.319004,
    -0.004192, 0.004215,
    0.008442, -0.008439,
    0.226268, -0.226259,
    -0.069688, 0.069597,
    -0.016545, 0.016678,
    -0.409471, 0.409426,
    0.275157, -0.275159,
};

float Cg_init[2] = {
    -0.329245, -0.329241
};

float xstd_init[12] = {
    0.004737, 0.002168, 0.343315, 0.119611, 0.001273, 0.000224, 0.058824, 0.132931, 0.000678, 0.000161, 0.052177, 0.144965
};

float xmean_init[12] = {
    0.011003, -0.005470, 0.467724, 1.032593, 0.003506, -0.007742, 0.015520, 0.621904, 0.003580, -0.007725, 0.018166, 0.703492
};

