// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.95%
// test_accuracy: 77.08%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-12 12:41:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.908634, 0.908625,
    0.132116, -0.132084,
    0.252322, -0.252344,
    0.729272, -0.729269,
    -0.275147, 0.275189,
    0.055049, -0.055076,
    -0.111063, 0.111058,
    -0.007992, 0.007980,
    0.282494, -0.282500,
    0.044807, -0.044784,
    -0.491012, 0.491016,
    -0.208553, 0.208527,
};

float Cg_init[2] = {
    -0.283967, -0.283974
};

float xstd_init[12] = {
    0.004830, 0.002261, 0.150618, 0.203715, 0.001201, 0.000214, 0.030319, 0.090451, 0.000684, 0.000167, 0.028733, 0.105469
};

float xmean_init[12] = {
    0.010807, -0.005504, 0.247355, 0.688810, 0.003458, -0.007750, 0.010476, 0.080000, 0.003549, -0.007730, 0.013228, 0.121746
};

