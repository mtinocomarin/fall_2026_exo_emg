// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.67%
// test_accuracy: 70.00%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:43:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.028653, 5.028384,
    3.888407, -3.888020,
    -0.371777, 0.371735,
    -2.849685, 2.849511,
    -2.735478, 2.735461,
    0.508301, -0.508311,
    0.036540, -0.036579,
    1.954147, -1.954061,
    1.054512, -1.054524,
    -0.364037, 0.364072,
    0.057136, -0.057157,
    -0.736714, 0.736708,
};

float Cg_init[2] = {
    -2.103195, -2.103100
};

float xstd_init[12] = {
    0.001454, 0.000195, 0.020946, 0.141884, 0.004083, 0.001227, 0.095414, 0.197680, 0.000850, 0.000142, 0.033042, 0.118262
};

float xmean_init[12] = {
    0.006216, -0.007606, 0.010667, 0.206667, 0.009786, -0.006450, 0.142222, 0.507333, 0.005371, -0.007521, 0.028889, 0.277333
};

