// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_13\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.27%
// test_accuracy: 73.61%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_27.txt']}
// generated: 2026-02-13 14:49:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.003745, -0.003755,
    -0.418195, 0.418172,
    0.059240, -0.059230,
    -0.066564, 0.066564,
    2.499834, -2.499672,
    -2.334950, 2.334743,
    -0.175071, 0.175099,
    0.363415, -0.363380,
    -0.687827, 0.687780,
    -0.677494, 0.677555,
    0.210189, -0.210222,
    1.745747, -1.745725,
};

float Cg_init[2] = {
    -0.785261, -0.785210
};

float xstd_init[12] = {
    0.000936, 0.000087, 0.008384, 0.069210, 0.000824, 0.000140, 0.016209, 0.059065, 0.003588, 0.001032, 0.113708, 0.210887
};

float xmean_init[12] = {
    0.005663, -0.007750, 0.002183, 0.096491, 0.002458, -0.007842, 0.005770, 0.052515, 0.009099, -0.006604, 0.129045, 0.467836
};

