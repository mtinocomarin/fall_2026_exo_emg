// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 58.33%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 14:43:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.145322, 6.145310,
    0.559784, -0.560127,
    -1.806412, 1.806496,
    0.635085, -0.634816,
    0.175253, -0.175245,
    -6.347064, 6.347145,
    4.468004, -4.468086,
    1.452449, -1.452473,
    5.937641, -5.937497,
    -2.301507, 2.301359,
    0.586055, -0.585919,
    -4.430474, 4.430483,
};

float Cg_init[2] = {
    -3.521813, -3.521810
};

float xstd_init[12] = {
    0.000870, 0.000135, 0.010226, 0.108802, 0.003920, 0.001502, 0.100981, 0.139785, 0.001798, 0.000219, 0.032979, 0.102262
};

float xmean_init[12] = {
    0.005803, -0.007617, 0.004444, 0.204444, 0.009562, -0.006384, 0.136296, 0.548889, 0.005287, -0.007515, 0.026667, 0.248889
};

