// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 80.00%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 12:43:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.581531, 1.581539,
    0.474356, -0.474351,
    0.577832, -0.577855,
    1.181132, -1.181114,
    -0.394704, 0.394740,
    0.003017, -0.003071,
    0.160450, -0.160450,
    -0.274554, 0.274564,
    -0.089350, 0.089316,
    0.088193, -0.088102,
    -0.436817, 0.436793,
    -0.135738, 0.135694,
};

float Cg_init[2] = {
    -0.599613, -0.599615
};

float xstd_init[12] = {
    0.004622, 0.001985, 0.145075, 0.198397, 0.001505, 0.000275, 0.038021, 0.099717, 0.000649, 0.000140, 0.025660, 0.096148
};

float xmean_init[12] = {
    0.011148, -0.005499, 0.254334, 0.701667, 0.003626, -0.007716, 0.014000, 0.088833, 0.003549, -0.007737, 0.011889, 0.119167
};

