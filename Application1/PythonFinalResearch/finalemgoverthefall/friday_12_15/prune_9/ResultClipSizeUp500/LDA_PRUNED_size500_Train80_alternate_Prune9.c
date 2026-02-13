// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.23%
// test_accuracy: 75.69%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-12 12:44:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.015443, 1.015427,
    0.290945, -0.290914,
    0.334030, -0.334045,
    1.059748, -1.059754,
    -0.526584, 0.526678,
    0.189230, -0.189325,
    0.017966, -0.017968,
    -0.205481, 0.205485,
    0.336534, -0.336495,
    -0.045892, 0.045845,
    -0.599804, 0.599822,
    -0.210073, 0.210060,
};

float Cg_init[2] = {
    -0.463024, -0.463031
};

float xstd_init[12] = {
    0.004399, 0.001912, 0.148839, 0.203093, 0.001286, 0.000232, 0.032949, 0.094857, 0.000700, 0.000179, 0.030250, 0.108785
};

float xmean_init[12] = {
    0.010624, -0.005620, 0.244896, 0.687150, 0.003519, -0.007738, 0.012045, 0.085701, 0.003567, -0.007723, 0.013591, 0.124928
};

