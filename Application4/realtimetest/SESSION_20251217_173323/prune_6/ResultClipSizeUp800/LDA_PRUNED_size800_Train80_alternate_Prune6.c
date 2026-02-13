// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.15%
// test_accuracy: 70.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_14.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:09:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.395543, 0.395505,
    0.373489, -0.373427,
    -0.035794, 0.035782,
    0.214002, -0.214019,
    0.342809, -0.342832,
    -0.426670, 0.426681,
    -0.928358, 0.928374,
    0.174535, -0.174549,
    0.421898, -0.421894,
    -0.811101, 0.811114,
    0.405419, -0.405448,
    0.796403, -0.796391,
};

float Cg_init[2] = {
    -0.477609, -0.477607
};

float xstd_init[12] = {
    0.001090, 0.000148, 0.023601, 0.085043, 0.002951, 0.000905, 0.055435, 0.144984, 0.005586, 0.002233, 0.155235, 0.249102
};

float xmean_init[12] = {
    0.005514, -0.007711, 0.008137, 0.130257, 0.004414, -0.007477, 0.023111, 0.133949, 0.012039, -0.005674, 0.184069, 0.554769
};

