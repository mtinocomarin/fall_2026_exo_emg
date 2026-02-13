// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.64%
// test_accuracy: 74.43%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:51:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.518562, 0.518534,
    -0.493650, 0.493688,
    0.288592, -0.288617,
    0.809807, -0.809796,
    1.041543, -1.041555,
    -0.927593, 0.927633,
    -0.304991, 0.304974,
    -0.057489, 0.057478,
    0.989256, -0.989260,
    -0.293936, 0.293992,
    -0.440953, 0.440936,
    0.148849, -0.148888,
};

float Cg_init[2] = {
    -0.605308, -0.605314
};

float xstd_init[12] = {
    0.003810, 0.001349, 0.107113, 0.171089, 0.001354, 0.000416, 0.021050, 0.071916, 0.000526, 0.000084, 0.017750, 0.062049
};

float xmean_init[12] = {
    0.009907, -0.006217, 0.176805, 0.594628, 0.003096, -0.007755, 0.005289, 0.047438, 0.003101, -0.007812, 0.004848, 0.063967
};

