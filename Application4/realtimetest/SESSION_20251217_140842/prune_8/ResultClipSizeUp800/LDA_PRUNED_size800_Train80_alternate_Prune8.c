// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.08%
// test_accuracy: 76.67%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:41:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.105668, 2.105679,
    0.638812, -0.638877,
    0.481107, -0.481077,
    -0.336922, 0.336942,
    -0.719289, 0.719316,
    -0.410644, 0.410582,
    -0.404330, 0.404346,
    0.775221, -0.775219,
    0.809393, -0.809348,
    -0.059361, 0.059287,
    0.137963, -0.137950,
    -0.368367, 0.368393,
};

float Cg_init[2] = {
    -0.779392, -0.779383
};

float xstd_init[12] = {
    0.001169, 0.000198, 0.030252, 0.134083, 0.003822, 0.001110, 0.084941, 0.165791, 0.000836, 0.000156, 0.032177, 0.113383
};

float xmean_init[12] = {
    0.005974, -0.007605, 0.014444, 0.210167, 0.010280, -0.006371, 0.148444, 0.562833, 0.005126, -0.007547, 0.029111, 0.263333
};

