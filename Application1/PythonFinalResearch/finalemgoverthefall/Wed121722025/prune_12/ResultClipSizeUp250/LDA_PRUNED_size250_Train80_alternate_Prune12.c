// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 59.38%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 13:47:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.490919, 1.490764,
    0.333869, -0.333631,
    -0.119579, 0.119550,
    0.110724, -0.110837,
    -0.875028, 0.875077,
    0.323343, -0.323327,
    -0.251557, 0.251510,
    -0.258066, 0.258028,
    -1.297365, 1.297242,
    0.880944, -0.880744,
    -0.529993, 0.529910,
    0.506034, -0.506066,
};

float Cg_init[2] = {
    -0.766403, -0.766353
};

float xstd_init[12] = {
    0.001084, 0.000079, 0.010294, 0.080232, 0.002391, 0.000673, 0.076540, 0.155457, 0.000901, 0.000130, 0.019810, 0.070076
};

float xmean_init[12] = {
    0.006524, -0.007685, 0.003833, 0.141750, 0.008337, -0.006954, 0.094000, 0.436250, 0.004419, -0.007704, 0.010167, 0.140250
};

