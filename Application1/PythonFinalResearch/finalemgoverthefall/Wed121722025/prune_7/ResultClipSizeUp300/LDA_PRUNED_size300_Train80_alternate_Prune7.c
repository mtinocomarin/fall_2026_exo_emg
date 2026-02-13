// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.00%
// test_accuracy: 57.50%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 13:44:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.702899, 0.702811,
    0.393775, -0.393596,
    0.219252, -0.219278,
    -0.185473, 0.185385,
    -0.567856, 0.567832,
    -0.358173, 0.358188,
    0.375095, -0.375075,
    0.284830, -0.284827,
    -0.914311, 0.914322,
    0.307418, -0.307459,
    -0.205054, 0.205073,
    0.473016, -0.473002,
};

float Cg_init[2] = {
    -0.316132, -0.316113
};

float xstd_init[12] = {
    0.001046, 0.000081, 0.010718, 0.079050, 0.002586, 0.000745, 0.080983, 0.169971, 0.000898, 0.000117, 0.017966, 0.075395
};

float xmean_init[12] = {
    0.006480, -0.007687, 0.004053, 0.140320, 0.008508, -0.006890, 0.099200, 0.449120, 0.004339, -0.007713, 0.009387, 0.129920
};

