// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.53%
// test_accuracy: 60.94%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:41:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.998176, 3.998381,
    1.948837, -1.949159,
    -0.135812, 0.135869,
    -0.019282, 0.019393,
    1.224853, -1.224907,
    -1.734374, 1.734415,
    -0.090721, 0.090721,
    0.264420, -0.264440,
    -0.481293, 0.481415,
    0.492474, -0.492582,
    0.252598, -0.252573,
    -0.303919, 0.303937,
};

float Cg_init[2] = {
    -1.198561, -1.198631
};

float xstd_init[12] = {
    0.001052, 0.000187, 0.025482, 0.124281, 0.004166, 0.001296, 0.084929, 0.153140, 0.001275, 0.000164, 0.032032, 0.116115
};

float xmean_init[12] = {
    0.006023, -0.007615, 0.013750, 0.190000, 0.010858, -0.006222, 0.156042, 0.547500, 0.005135, -0.007569, 0.029792, 0.245938
};

