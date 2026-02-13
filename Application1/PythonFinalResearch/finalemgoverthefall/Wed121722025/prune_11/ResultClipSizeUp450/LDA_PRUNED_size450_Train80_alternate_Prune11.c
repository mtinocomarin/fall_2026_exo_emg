// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.25%
// test_accuracy: 57.81%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 13:46:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.759743, 0.759755,
    0.292217, -0.292200,
    0.126896, -0.126901,
    -0.161354, 0.161334,
    -0.621583, 0.621559,
    -0.218783, 0.218795,
    0.352110, -0.352093,
    0.208246, -0.208227,
    -0.873241, 0.873340,
    0.344112, -0.344280,
    -0.021471, 0.021522,
    0.279067, -0.279033,
};

float Cg_init[2] = {
    -0.364027, -0.364047
};

float xstd_init[12] = {
    0.001020, 0.000078, 0.011216, 0.079920, 0.003025, 0.000808, 0.085750, 0.178577, 0.000863, 0.000116, 0.018926, 0.071719
};

float xmean_init[12] = {
    0.006494, -0.007682, 0.004048, 0.146429, 0.008586, -0.006876, 0.099841, 0.440595, 0.004384, -0.007712, 0.010000, 0.130476
};

