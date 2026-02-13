// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.00%
// test_accuracy: 73.12%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_20.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_24.txt', 'act2\\trial_37.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt']}
// generated: 2026-02-13 14:49:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.153439, 0.153318,
    -0.208621, 0.208929,
    -0.028724, 0.028669,
    0.066494, -0.066630,
    2.166842, -2.166966,
    -1.950853, 1.950962,
    -0.139361, 0.139362,
    0.280614, -0.280617,
    -0.661658, 0.661749,
    -0.752453, 0.752324,
    0.236372, -0.236352,
    1.754879, -1.754873,
};

float Cg_init[2] = {
    -0.736286, -0.736314
};

float xstd_init[12] = {
    0.000929, 0.000085, 0.008849, 0.066770, 0.000795, 0.000134, 0.014877, 0.054990, 0.003531, 0.001021, 0.117382, 0.209158
};

float xmean_init[12] = {
    0.005631, -0.007753, 0.002333, 0.093600, 0.002431, -0.007847, 0.005133, 0.048700, 0.008987, -0.006622, 0.128734, 0.463200
};

