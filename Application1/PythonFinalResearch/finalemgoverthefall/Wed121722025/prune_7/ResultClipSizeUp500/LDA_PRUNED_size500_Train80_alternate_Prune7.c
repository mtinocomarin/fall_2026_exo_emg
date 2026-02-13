// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.22%
// test_accuracy: 54.86%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 13:44:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.523430, 0.523484,
    0.264942, -0.265083,
    0.074497, -0.074477,
    -0.173956, 0.174030,
    -0.563394, 0.563425,
    -0.232699, 0.232695,
    0.209776, -0.209801,
    0.310580, -0.310589,
    -0.516493, 0.516475,
    0.204110, -0.204049,
    -0.010449, 0.010430,
    0.194777, -0.194810,
};

float Cg_init[2] = {
    -0.214914, -0.214926
};

float xstd_init[12] = {
    0.001024, 0.000079, 0.010786, 0.079493, 0.003017, 0.000824, 0.086168, 0.178835, 0.000835, 0.000108, 0.017482, 0.072692
};

float xmean_init[12] = {
    0.006438, -0.007690, 0.003674, 0.143378, 0.008597, -0.006873, 0.099793, 0.435733, 0.004392, -0.007713, 0.009067, 0.131645
};

