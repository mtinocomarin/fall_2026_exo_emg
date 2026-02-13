// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.58%
// test_accuracy: 49.48%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt']}
// generated: 2025-12-17 13:47:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.797599, 0.797686,
    0.557475, -0.557615,
    -0.001831, 0.001840,
    -0.304064, 0.304133,
    -0.601968, 0.601989,
    -0.184826, 0.184794,
    0.258882, -0.258880,
    0.236426, -0.236392,
    -0.649933, 0.650058,
    0.344436, -0.344642,
    -0.019223, 0.019264,
    0.184231, -0.184179,
};

float Cg_init[2] = {
    -0.284197, -0.284242
};

float xstd_init[12] = {
    0.001079, 0.000082, 0.012802, 0.081951, 0.003075, 0.000842, 0.091542, 0.181197, 0.000867, 0.000108, 0.018210, 0.071812
};

float xmean_init[12] = {
    0.006465, -0.007685, 0.004762, 0.145238, 0.008577, -0.006853, 0.105238, 0.442698, 0.004395, -0.007717, 0.009683, 0.127302
};

