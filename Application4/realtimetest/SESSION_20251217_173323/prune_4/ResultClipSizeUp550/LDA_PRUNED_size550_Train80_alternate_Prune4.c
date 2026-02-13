// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 74.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_21.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:08:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.401122, 0.401080,
    0.296999, -0.296883,
    0.342427, -0.342454,
    -0.021789, 0.021748,
    0.754726, -0.754720,
    -0.487737, 0.487717,
    -1.228640, 1.228641,
    0.267592, -0.267604,
    -0.388865, 0.388869,
    -0.528215, 0.528225,
    0.323327, -0.323351,
    1.222639, -1.222619,
};

float Cg_init[2] = {
    -0.499194, -0.499182
};

float xstd_init[12] = {
    0.001124, 0.000156, 0.025180, 0.094266, 0.002965, 0.000901, 0.058557, 0.142700, 0.005678, 0.002336, 0.150500, 0.242023
};

float xmean_init[12] = {
    0.005536, -0.007710, 0.007911, 0.128134, 0.004400, -0.007480, 0.024356, 0.132133, 0.011755, -0.005714, 0.171556, 0.548266
};

