// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.25%
// test_accuracy: 70.00%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:08:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.470213, 0.470194,
    0.871619, -0.871569,
    -0.229485, 0.229470,
    -0.248570, 0.248548,
    0.151795, -0.151833,
    0.105113, -0.105068,
    -1.093278, 1.093269,
    0.126527, -0.126531,
    -0.016649, 0.016631,
    -0.566281, 0.566311,
    0.390984, -0.391010,
    0.871503, -0.871484,
};

float Cg_init[2] = {
    -0.421812, -0.421809
};

float xstd_init[12] = {
    0.001055, 0.000134, 0.025036, 0.092445, 0.003140, 0.000965, 0.065429, 0.158062, 0.005964, 0.002408, 0.150939, 0.237847
};

float xmean_init[12] = {
    0.005513, -0.007709, 0.008611, 0.133750, 0.004530, -0.007454, 0.028426, 0.141806, 0.012124, -0.005625, 0.180556, 0.551667
};

