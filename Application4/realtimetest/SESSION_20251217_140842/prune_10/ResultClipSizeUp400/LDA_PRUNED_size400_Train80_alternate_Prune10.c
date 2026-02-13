// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 60.71%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-17 14:42:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.844472, 4.844453,
    2.559621, -2.559581,
    0.140325, -0.140323,
    -0.519360, 0.519342,
    -0.608918, 0.608878,
    -0.347854, 0.347917,
    0.395156, -0.395165,
    0.161505, -0.161507,
    0.415335, -0.415399,
    0.042705, -0.042610,
    0.696749, -0.696763,
    0.195848, -0.195877,
};

float Cg_init[2] = {
    -1.450037, -1.450034
};

float xstd_init[12] = {
    0.001135, 0.000222, 0.029705, 0.130710, 0.003949, 0.001136, 0.071132, 0.149214, 0.000847, 0.000134, 0.032700, 0.105586
};

float xmean_init[12] = {
    0.006039, -0.007606, 0.017460, 0.194286, 0.010642, -0.006293, 0.148571, 0.546191, 0.005111, -0.007576, 0.029841, 0.252857
};

