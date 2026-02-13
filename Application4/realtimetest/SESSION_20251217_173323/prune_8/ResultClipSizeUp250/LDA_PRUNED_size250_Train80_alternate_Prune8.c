// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.18%
// test_accuracy: 72.50%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 18:09:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.167217, 0.167162,
    0.781305, -0.781165,
    -0.165256, 0.165179,
    -0.152732, 0.152697,
    1.554568, -1.554644,
    -0.006591, 0.006668,
    -1.612457, 1.612428,
    -1.164106, 1.164135,
    -0.994143, 0.994146,
    -0.123862, 0.123868,
    0.016724, -0.016743,
    2.582014, -2.582013,
};

float Cg_init[2] = {
    -0.880729, -0.880724
};

float xstd_init[12] = {
    0.001084, 0.000132, 0.026832, 0.096240, 0.002720, 0.000753, 0.067557, 0.156834, 0.005387, 0.002056, 0.174879, 0.261560
};

float xmean_init[12] = {
    0.005356, -0.007723, 0.009394, 0.125000, 0.004415, -0.007513, 0.030303, 0.149091, 0.012056, -0.005671, 0.198182, 0.550455
};

