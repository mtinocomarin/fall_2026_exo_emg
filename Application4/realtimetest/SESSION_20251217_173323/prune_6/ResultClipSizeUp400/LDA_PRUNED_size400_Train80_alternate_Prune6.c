// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.26%
// test_accuracy: 70.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_18.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 18:09:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.632869, 0.632981,
    1.042498, -1.042801,
    -0.229756, 0.229869,
    -0.440838, 0.440922,
    0.833100, -0.833065,
    -0.316065, 0.316048,
    -1.466728, 1.466765,
    0.141408, -0.141409,
    0.421725, -0.421709,
    -1.305182, 1.305169,
    0.824519, -0.824508,
    0.913987, -0.913999,
};

float Cg_init[2] = {
    -0.639969, -0.639998
};

float xstd_init[12] = {
    0.001105, 0.000137, 0.028553, 0.095146, 0.003038, 0.000860, 0.062554, 0.155785, 0.006042, 0.002373, 0.162512, 0.246879
};

float xmean_init[12] = {
    0.005533, -0.007706, 0.010549, 0.136484, 0.004519, -0.007483, 0.026960, 0.139121, 0.012418, -0.005527, 0.189304, 0.549670
};

