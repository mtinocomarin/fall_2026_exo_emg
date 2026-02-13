// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 70.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_14.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:08:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.288088, 0.288015,
    0.254193, -0.254049,
    -0.078100, 0.078062,
    0.170439, -0.170478,
    0.160952, -0.161051,
    -0.286576, 0.286645,
    -0.927014, 0.927033,
    0.258464, -0.258471,
    0.505933, -0.505920,
    -0.844095, 0.844105,
    0.450802, -0.450838,
    0.668685, -0.668665,
};

float Cg_init[2] = {
    -0.432032, -0.432027
};

float xstd_init[12] = {
    0.001105, 0.000148, 0.023062, 0.088303, 0.003114, 0.000947, 0.059401, 0.147059, 0.005532, 0.002194, 0.151473, 0.242530
};

float xmean_init[12] = {
    0.005597, -0.007704, 0.008190, 0.135619, 0.004507, -0.007448, 0.025397, 0.137524, 0.012052, -0.005699, 0.182159, 0.555524
};

