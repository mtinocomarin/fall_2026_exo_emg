// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.71%
// test_accuracy: 71.54%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_24.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:09:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.613782, 0.613797,
    0.394561, -0.394582,
    0.055517, -0.055505,
    0.222516, -0.222520,
    0.398919, -0.398839,
    -0.281651, 0.281569,
    -1.112812, 1.112843,
    0.280564, -0.280593,
    0.003485, -0.003514,
    -0.648618, 0.648651,
    0.564734, -0.564755,
    0.908712, -0.908694,
};

float Cg_init[2] = {
    -0.567899, -0.567901
};

float xstd_init[12] = {
    0.001141, 0.000146, 0.026333, 0.090265, 0.003074, 0.000958, 0.054443, 0.145773, 0.005976, 0.002444, 0.162839, 0.261016
};

float xmean_init[12] = {
    0.005482, -0.007712, 0.009604, 0.131748, 0.004457, -0.007470, 0.022191, 0.133147, 0.012100, -0.005556, 0.191049, 0.558321
};

