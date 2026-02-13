// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.85%
// test_accuracy: 76.47%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_13.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:43:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.574194, 2.574240,
    1.502697, -1.502760,
    0.268236, -0.268232,
    -0.813790, 0.813812,
    -1.080900, 1.080895,
    -0.190039, 0.190061,
    -0.747881, 0.747885,
    1.040560, -1.040574,
    0.616426, -0.616451,
    0.568635, -0.568597,
    -0.047242, 0.047237,
    -0.632816, 0.632801,
};

float Cg_init[2] = {
    -1.048919, -1.048931
};

float xstd_init[12] = {
    0.001150, 0.000162, 0.021450, 0.114045, 0.003879, 0.001105, 0.085748, 0.178605, 0.000880, 0.000148, 0.032078, 0.113131
};

float xmean_init[12] = {
    0.005994, -0.007641, 0.009608, 0.187353, 0.009993, -0.006437, 0.147451, 0.542353, 0.005103, -0.007565, 0.023725, 0.241177
};

