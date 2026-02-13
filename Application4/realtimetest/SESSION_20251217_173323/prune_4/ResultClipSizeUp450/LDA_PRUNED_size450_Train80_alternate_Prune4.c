// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.83%
// test_accuracy: 70.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:08:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.489674, 0.489649,
    0.759902, -0.759825,
    0.033784, -0.033806,
    -0.343561, 0.343531,
    0.544450, -0.544439,
    -0.222088, 0.222067,
    -1.451948, 1.451953,
    0.430906, -0.430912,
    -0.252079, 0.252085,
    -0.604571, 0.604558,
    0.325055, -0.325057,
    1.167117, -1.167110,
};

float Cg_init[2] = {
    -0.522911, -0.522903
};

float xstd_init[12] = {
    0.001091, 0.000129, 0.026461, 0.094407, 0.003189, 0.000895, 0.063259, 0.154794, 0.005984, 0.002454, 0.155551, 0.236819
};

float xmean_init[12] = {
    0.005532, -0.007711, 0.008889, 0.133333, 0.004480, -0.007481, 0.026333, 0.135667, 0.012213, -0.005566, 0.181000, 0.558000
};

