// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.07%
// test_accuracy: 75.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:48:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.881134, 0.881149,
    -0.219642, 0.219656,
    0.800250, -0.800273,
    0.662474, -0.662474,
    1.039214, -1.039289,
    -1.654925, 1.655051,
    0.203411, -0.203451,
    0.237070, -0.237083,
    -0.275426, 0.275454,
    0.615637, -0.615686,
    -0.584166, 0.584184,
    0.140082, -0.140068,
};

float Cg_init[2] = {
    -0.459590, -0.459610
};

float xstd_init[12] = {
    0.003573, 0.001285, 0.099229, 0.168792, 0.001697, 0.000522, 0.031589, 0.087887, 0.000953, 0.000101, 0.020821, 0.067406
};

float xmean_init[12] = {
    0.009662, -0.006293, 0.168000, 0.567704, 0.003253, -0.007712, 0.007704, 0.051259, 0.003218, -0.007802, 0.005136, 0.068296
};

