// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.67%
// test_accuracy: 62.50%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt']}
// generated: 2025-12-17 14:40:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.027890, 2.027898,
    0.548893, -0.548866,
    0.052178, -0.052195,
    0.054157, -0.054174,
    0.663423, -0.663395,
    -1.260009, 1.260002,
    0.178986, -0.178985,
    -0.368949, 0.368943,
    0.106991, -0.107040,
    -0.223705, 0.223804,
    0.221566, -0.221578,
    0.475565, -0.475608,
};

float Cg_init[2] = {
    -0.673827, -0.673833
};

float xstd_init[12] = {
    0.000926, 0.000169, 0.023447, 0.109726, 0.003665, 0.001230, 0.092994, 0.157074, 0.001291, 0.000197, 0.034794, 0.117879
};

float xmean_init[12] = {
    0.005846, -0.007638, 0.013333, 0.177333, 0.010852, -0.006218, 0.162222, 0.573667, 0.005024, -0.007560, 0.028222, 0.242667
};

