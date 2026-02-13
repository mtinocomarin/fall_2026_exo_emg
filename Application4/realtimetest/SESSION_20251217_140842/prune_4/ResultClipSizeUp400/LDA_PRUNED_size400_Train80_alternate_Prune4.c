// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 69.64%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:40:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.629550, 1.629538,
    0.349330, -0.349285,
    0.234820, -0.234827,
    0.075798, -0.075822,
    0.368944, -0.368935,
    -1.024638, 1.024613,
    -0.139262, 0.139271,
    0.067700, -0.067694,
    0.203965, -0.203953,
    0.135335, -0.135354,
    0.260602, -0.260601,
    -0.123190, 0.123194,
};

float Cg_init[2] = {
    -0.519609, -0.519609
};

float xstd_init[12] = {
    0.000959, 0.000178, 0.024228, 0.115148, 0.003884, 0.001206, 0.085582, 0.160438, 0.001166, 0.000181, 0.032812, 0.109438
};

float xmean_init[12] = {
    0.005873, -0.007620, 0.014127, 0.192381, 0.010667, -0.006252, 0.157143, 0.566428, 0.005014, -0.007559, 0.028889, 0.244286
};

