// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.07%
// test_accuracy: 65.79%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:08:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.161175, 0.161194,
    0.182450, -0.182519,
    0.026170, -0.026146,
    0.026885, -0.026871,
    0.393168, -0.393078,
    -0.538153, 0.538110,
    -0.741555, 0.741548,
    0.140213, -0.140243,
    0.361616, -0.361624,
    -0.640135, 0.640143,
    0.360536, -0.360561,
    0.602407, -0.602393,
};

float Cg_init[2] = {
    -0.347373, -0.347377
};

float xstd_init[12] = {
    0.001059, 0.000162, 0.020826, 0.090537, 0.003069, 0.000951, 0.057077, 0.147593, 0.005411, 0.002105, 0.145760, 0.231411
};

float xmean_init[12] = {
    0.005567, -0.007702, 0.007237, 0.132698, 0.004492, -0.007433, 0.024737, 0.133553, 0.011726, -0.005827, 0.171579, 0.546908
};

