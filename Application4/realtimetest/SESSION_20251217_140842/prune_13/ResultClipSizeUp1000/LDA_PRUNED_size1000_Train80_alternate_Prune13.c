// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.49%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_19.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:43:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.943094, 2.943069,
    2.178758, -2.178710,
    0.145811, -0.145818,
    -1.431006, 1.430986,
    -1.197269, 1.197250,
    -0.304812, 0.304815,
    -0.607876, 0.607884,
    0.837816, -0.837812,
    0.936218, -0.936215,
    0.373624, -0.373621,
    0.063293, -0.063290,
    -0.581479, 0.581471,
};

float Cg_init[2] = {
    -1.285679, -1.285671
};

float xstd_init[12] = {
    0.001245, 0.000170, 0.024122, 0.121716, 0.004110, 0.001165, 0.088900, 0.178766, 0.000869, 0.000179, 0.035685, 0.123579
};

float xmean_init[12] = {
    0.005974, -0.007629, 0.012865, 0.196842, 0.009725, -0.006487, 0.134269, 0.519649, 0.005201, -0.007514, 0.032047, 0.269123
};

