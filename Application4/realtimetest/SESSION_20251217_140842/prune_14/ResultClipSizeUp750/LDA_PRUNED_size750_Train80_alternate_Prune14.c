// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 66.07%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:43:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.750539, 4.750551,
    2.568591, -2.568614,
    -0.461099, 0.461096,
    -1.382486, 1.382506,
    -1.982150, 1.982120,
    1.108225, -1.108207,
    -1.248377, 1.248386,
    -0.007672, 0.007670,
    -0.079610, 0.079625,
    0.371461, -0.371490,
    0.453328, -0.453319,
    1.470789, -1.470779,
};

float Cg_init[2] = {
    -2.625566, -2.625571
};

float xstd_init[12] = {
    0.001057, 0.000136, 0.018807, 0.111388, 0.003850, 0.001077, 0.089964, 0.191148, 0.000811, 0.000133, 0.028439, 0.096567
};

float xmean_init[12] = {
    0.005916, -0.007631, 0.010476, 0.190000, 0.010204, -0.006405, 0.153809, 0.539286, 0.005139, -0.007559, 0.024286, 0.253571
};

