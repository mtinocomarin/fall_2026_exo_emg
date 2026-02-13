// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.56%
// test_accuracy: 73.75%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt', 'act2\\trial_31.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:53:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.814131, 1.814152,
    -0.106082, 0.106142,
    1.463920, -1.463922,
    1.243721, -1.243763,
    2.822400, -2.822430,
    -3.508643, 3.508693,
    0.388763, -0.388803,
    -0.024139, 0.024167,
    -0.807240, 0.807328,
    0.786194, -0.786529,
    -0.428456, 0.428543,
    0.299826, -0.299663,
};

float Cg_init[2] = {
    -1.058436, -1.058476
};

float xstd_init[12] = {
    0.003763, 0.001397, 0.098893, 0.173426, 0.001825, 0.000572, 0.034899, 0.095567, 0.001087, 0.000093, 0.016550, 0.058876
};

float xmean_init[12] = {
    0.010004, -0.006184, 0.171111, 0.578667, 0.003355, -0.007696, 0.008296, 0.056667, 0.003321, -0.007800, 0.004889, 0.068000
};

