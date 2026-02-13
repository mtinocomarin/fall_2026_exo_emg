// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.57%
// test_accuracy: 62.50%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-17 14:41:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.512438, 2.512418,
    0.861453, -0.861407,
    -0.128984, 0.128968,
    -0.245031, 0.245007,
    -0.210501, 0.210475,
    -0.612321, 0.612354,
    0.121489, -0.121486,
    -0.383356, 0.383351,
    0.625492, -0.625506,
    -0.083147, 0.083166,
    0.617989, -0.617990,
    0.058736, -0.058736,
};

float Cg_init[2] = {
    -1.117559, -1.117551
};

float xstd_init[12] = {
    0.000894, 0.000129, 0.021569, 0.101671, 0.003776, 0.001115, 0.083175, 0.161964, 0.000897, 0.000204, 0.029761, 0.121228
};

float xmean_init[12] = {
    0.005810, -0.007648, 0.011429, 0.168571, 0.010665, -0.006252, 0.155809, 0.566286, 0.005071, -0.007542, 0.025905, 0.253714
};

