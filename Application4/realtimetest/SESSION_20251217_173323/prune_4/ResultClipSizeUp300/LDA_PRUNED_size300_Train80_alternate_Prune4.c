// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.33%
// test_accuracy: 72.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_18.txt']}
// generated: 2025-12-17 18:08:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.369365, 0.369415,
    0.693853, -0.694003,
    -0.326465, 0.326513,
    -0.283866, 0.283907,
    1.519133, -1.519121,
    -0.130732, 0.130758,
    -1.092719, 1.092731,
    -1.102318, 1.102301,
    0.582371, -0.582361,
    -1.172861, 1.172852,
    0.714748, -0.714741,
    0.859299, -0.859300,
};

float Cg_init[2] = {
    -0.556989, -0.556999
};

float xstd_init[12] = {
    0.001103, 0.000135, 0.028429, 0.089942, 0.002595, 0.000691, 0.059811, 0.148346, 0.005189, 0.001947, 0.156645, 0.241770
};

float xmean_init[12] = {
    0.005547, -0.007711, 0.010133, 0.133333, 0.004232, -0.007549, 0.025244, 0.129600, 0.011794, -0.005850, 0.181511, 0.538933
};

