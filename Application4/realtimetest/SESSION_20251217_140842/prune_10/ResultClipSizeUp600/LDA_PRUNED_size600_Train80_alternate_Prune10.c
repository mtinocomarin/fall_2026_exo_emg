// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.73%
// test_accuracy: 67.05%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:42:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.284947, 4.284889,
    0.956711, -0.956542,
    0.728376, -0.728421,
    0.287929, -0.288009,
    -0.458093, 0.458062,
    -0.788679, 0.788718,
    0.085948, -0.085941,
    0.395406, -0.395392,
    0.636907, -0.636923,
    -0.325210, 0.325209,
    0.299251, -0.299241,
    -0.042873, 0.042875,
};

float Cg_init[2] = {
    -1.410448, -1.410449
};

float xstd_init[12] = {
    0.001202, 0.000214, 0.034641, 0.136204, 0.004107, 0.001176, 0.084704, 0.162383, 0.000935, 0.000174, 0.032253, 0.119860
};

float xmean_init[12] = {
    0.006129, -0.007592, 0.016566, 0.203636, 0.010362, -0.006346, 0.140404, 0.556363, 0.005113, -0.007552, 0.031515, 0.256970
};

