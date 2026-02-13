// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.81%
// test_accuracy: 75.83%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:42:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.477106, 2.477153,
    0.933174, -0.933327,
    0.297959, -0.297909,
    -0.270159, 0.270222,
    -1.218603, 1.218585,
    -0.098809, 0.098800,
    -0.531963, 0.531975,
    0.735583, -0.735586,
    1.079654, -1.079616,
    -0.004026, 0.003978,
    0.126768, -0.126752,
    -0.375176, 0.375179,
};

float Cg_init[2] = {
    -0.947910, -0.947910
};

float xstd_init[12] = {
    0.001211, 0.000204, 0.031597, 0.131413, 0.003979, 0.001163, 0.087326, 0.167342, 0.000823, 0.000157, 0.031933, 0.112650
};

float xmean_init[12] = {
    0.006013, -0.007602, 0.015238, 0.206857, 0.010387, -0.006343, 0.148698, 0.568762, 0.005188, -0.007543, 0.029460, 0.267238
};

