// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.15%
// test_accuracy: 63.46%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 14:43:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.424242, 2.424168,
    0.512171, -0.512026,
    0.285502, -0.285493,
    -0.496417, 0.496365,
    -1.239718, 1.239638,
    1.082018, -1.082018,
    0.444111, -0.444114,
    -0.380052, 0.380110,
    -1.083539, 1.083612,
    1.162002, -1.162103,
    -0.314992, 0.315018,
    0.001802, -0.001784,
};

float Cg_init[2] = {
    -0.935528, -0.935537
};

float xstd_init[12] = {
    0.001380, 0.000177, 0.021792, 0.110143, 0.004592, 0.001282, 0.097421, 0.199346, 0.001044, 0.000167, 0.031426, 0.137058
};

float xmean_init[12] = {
    0.005930, -0.007640, 0.009744, 0.176923, 0.010046, -0.006374, 0.154359, 0.528461, 0.005000, -0.007559, 0.028205, 0.246154
};

