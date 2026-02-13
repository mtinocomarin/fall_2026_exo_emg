// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.14%
// test_accuracy: 76.79%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:51:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.047181, 1.047217,
    -0.337817, 0.337824,
    0.835601, -0.835638,
    0.869455, -0.869453,
    1.459265, -1.459321,
    -2.034084, 2.034168,
    0.145382, -0.145406,
    0.002985, -0.002989,
    0.924337, -0.924281,
    -0.038402, 0.038263,
    -0.695237, 0.695286,
    0.209687, -0.209649,
};

float Cg_init[2] = {
    -0.806226, -0.806241
};

float xstd_init[12] = {
    0.003836, 0.001424, 0.104069, 0.175415, 0.001821, 0.000572, 0.034081, 0.094374, 0.000541, 0.000096, 0.020417, 0.063587
};

float xmean_init[12] = {
    0.009827, -0.006216, 0.168164, 0.583809, 0.003365, -0.007677, 0.009887, 0.058367, 0.003141, -0.007805, 0.005442, 0.068435
};

