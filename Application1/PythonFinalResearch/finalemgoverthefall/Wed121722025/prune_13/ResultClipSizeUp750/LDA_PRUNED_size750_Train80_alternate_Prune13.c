// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.38%
// test_accuracy: 52.68%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:48:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.924004, 0.923943,
    0.609777, -0.609611,
    -0.092273, 0.092258,
    -0.263684, 0.263584,
    -0.477256, 0.477269,
    -0.176590, 0.176589,
    0.125279, -0.125303,
    0.220784, -0.220774,
    -0.756945, 0.756985,
    0.410823, -0.410898,
    -0.046011, 0.046037,
    0.081113, -0.081099,
};

float Cg_init[2] = {
    -0.317963, -0.317951
};

float xstd_init[12] = {
    0.001091, 0.000083, 0.012779, 0.081323, 0.003187, 0.000872, 0.092905, 0.184554, 0.000857, 0.000109, 0.019226, 0.070919
};

float xmean_init[12] = {
    0.006536, -0.007682, 0.004912, 0.144963, 0.008394, -0.006887, 0.099649, 0.430301, 0.004434, -0.007711, 0.010276, 0.130527
};

