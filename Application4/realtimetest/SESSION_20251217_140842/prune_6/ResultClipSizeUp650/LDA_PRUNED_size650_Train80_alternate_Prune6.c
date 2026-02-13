// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 65.62%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:41:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.862173, 1.862158,
    0.646440, -0.646394,
    0.308878, -0.308878,
    -0.268906, 0.268873,
    0.576568, -0.576532,
    -1.173410, 1.173356,
    -0.251807, 0.251813,
    0.234641, -0.234641,
    0.045652, -0.045627,
    0.357685, -0.357720,
    0.083204, -0.083196,
    -0.318617, 0.318626,
};

float Cg_init[2] = {
    -0.638916, -0.638914
};

float xstd_init[12] = {
    0.001040, 0.000174, 0.027593, 0.124268, 0.003796, 0.001153, 0.088289, 0.158456, 0.001054, 0.000162, 0.031474, 0.115430
};

float xmean_init[12] = {
    0.005906, -0.007623, 0.013889, 0.191333, 0.010609, -0.006293, 0.159333, 0.567500, 0.005022, -0.007568, 0.028444, 0.252833
};

