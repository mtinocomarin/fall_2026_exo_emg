// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 70.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-17 18:08:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.128677, 0.128659,
    -0.084848, 0.084876,
    0.214871, -0.214880,
    -0.030056, 0.030054,
    1.210218, -1.210222,
    -0.024603, 0.024600,
    -1.122781, 1.122783,
    -0.887148, 0.887150,
    0.036156, -0.036139,
    -0.730981, 0.730952,
    0.225858, -0.225844,
    1.580859, -1.580868,
};

float Cg_init[2] = {
    -0.563902, -0.563901
};

float xstd_init[12] = {
    0.001083, 0.000122, 0.022816, 0.090440, 0.002392, 0.000648, 0.058293, 0.140819, 0.004812, 0.001817, 0.156888, 0.235575
};

float xmean_init[12] = {
    0.005477, -0.007723, 0.007083, 0.124687, 0.004060, -0.007590, 0.024167, 0.125000, 0.011223, -0.006010, 0.172500, 0.530625
};

