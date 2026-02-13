// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.46%
// test_accuracy: 71.43%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:41:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.234561, 2.234516,
    0.864043, -0.863927,
    0.329550, -0.329561,
    -0.199682, 0.199615,
    -0.073839, 0.073875,
    -0.580151, 0.580082,
    -0.374540, 0.374554,
    0.435226, -0.435222,
    0.270402, -0.270363,
    0.257259, -0.257352,
    0.003582, -0.003562,
    -0.119726, 0.119762,
};

float Cg_init[2] = {
    -0.699567, -0.699563
};

float xstd_init[12] = {
    0.001107, 0.000179, 0.027810, 0.121957, 0.003751, 0.001085, 0.087295, 0.170650, 0.000840, 0.000154, 0.029873, 0.116912
};

float xmean_init[12] = {
    0.005920, -0.007628, 0.013122, 0.191746, 0.010328, -0.006378, 0.153228, 0.564762, 0.005005, -0.007569, 0.026772, 0.250318
};

