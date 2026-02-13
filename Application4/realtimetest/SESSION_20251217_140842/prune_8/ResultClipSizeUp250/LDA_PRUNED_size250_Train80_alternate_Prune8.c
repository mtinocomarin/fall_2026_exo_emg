// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.75%
// test_accuracy: 59.38%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt']}
// generated: 2025-12-17 14:41:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.197255, 3.197313,
    2.282502, -2.282627,
    0.045938, -0.045919,
    -1.339688, 1.339749,
    0.877936, -0.877966,
    -2.777024, 2.777107,
    1.124006, -1.124024,
    -0.494859, 0.494851,
    -0.023284, 0.023241,
    -0.636083, 0.636158,
    -0.157182, 0.157184,
    1.440032, -1.440073,
};

float Cg_init[2] = {
    -1.337725, -1.337759
};

float xstd_init[12] = {
    0.001053, 0.000191, 0.024223, 0.128098, 0.003680, 0.001238, 0.090333, 0.147438, 0.001446, 0.000185, 0.035194, 0.116558
};

float xmean_init[12] = {
    0.005973, -0.007611, 0.012917, 0.186875, 0.010905, -0.006168, 0.167500, 0.561250, 0.005288, -0.007543, 0.030417, 0.251250
};

