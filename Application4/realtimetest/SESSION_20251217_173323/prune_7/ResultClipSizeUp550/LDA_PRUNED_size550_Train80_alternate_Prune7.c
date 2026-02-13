// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.92%
// test_accuracy: 79.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_21.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:09:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.487302, 0.487278,
    0.186021, -0.185965,
    0.760171, -0.760185,
    0.091551, -0.091569,
    1.061931, -1.061939,
    -0.647279, 0.647278,
    -1.747482, 1.747488,
    0.570707, -0.570713,
    -1.010668, 1.010678,
    -0.570448, 0.570447,
    0.571747, -0.571758,
    1.732227, -1.732222,
};

float Cg_init[2] = {
    -0.739933, -0.739930
};

float xstd_init[12] = {
    0.001181, 0.000168, 0.027487, 0.096152, 0.002865, 0.000883, 0.053516, 0.138393, 0.006011, 0.002512, 0.161867, 0.257785
};

float xmean_init[12] = {
    0.005516, -0.007711, 0.008444, 0.125167, 0.004360, -0.007501, 0.021667, 0.129333, 0.011714, -0.005622, 0.178222, 0.548000
};

