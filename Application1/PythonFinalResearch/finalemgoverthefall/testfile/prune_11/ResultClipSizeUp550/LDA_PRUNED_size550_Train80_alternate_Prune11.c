// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_11\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.48%
// test_accuracy: 73.12%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_20.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_24.txt', 'act2\\trial_37.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2026-02-13 14:48:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.091890, 0.091843,
    -0.146541, 0.146694,
    -0.027939, 0.027912,
    -0.028387, 0.028315,
    2.033603, -2.033736,
    -1.856231, 1.856379,
    -0.150489, 0.150475,
    0.222677, -0.222693,
    -0.723846, 0.723898,
    -0.675685, 0.675621,
    0.268875, -0.268877,
    1.855777, -1.855776,
};

float Cg_init[2] = {
    -0.724823, -0.724860
};

float xstd_init[12] = {
    0.000912, 0.000083, 0.008650, 0.066893, 0.000812, 0.000142, 0.015001, 0.054951, 0.003566, 0.001068, 0.123542, 0.215274
};

float xmean_init[12] = {
    0.005616, -0.007754, 0.002222, 0.091905, 0.002457, -0.007841, 0.005270, 0.050000, 0.009037, -0.006588, 0.133270, 0.466476
};

