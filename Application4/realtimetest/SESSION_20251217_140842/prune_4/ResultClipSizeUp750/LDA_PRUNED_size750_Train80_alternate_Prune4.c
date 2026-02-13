// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 67.86%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 14:40:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.640723, 1.640765,
    0.764649, -0.764703,
    0.182207, -0.182197,
    -0.233754, 0.233765,
    0.425465, -0.425466,
    -0.856228, 0.856230,
    -0.319665, 0.319655,
    0.375175, -0.375169,
    -0.115696, 0.115701,
    0.415234, -0.415231,
    0.047724, -0.047723,
    -0.214818, 0.214810,
};

float Cg_init[2] = {
    -0.500747, -0.500756
};

float xstd_init[12] = {
    0.001000, 0.000167, 0.025816, 0.119877, 0.003771, 0.001100, 0.087858, 0.165716, 0.000996, 0.000158, 0.030955, 0.115183
};

float xmean_init[12] = {
    0.005909, -0.007624, 0.013095, 0.196786, 0.010410, -0.006361, 0.154841, 0.560952, 0.004970, -0.007567, 0.027778, 0.247619
};

