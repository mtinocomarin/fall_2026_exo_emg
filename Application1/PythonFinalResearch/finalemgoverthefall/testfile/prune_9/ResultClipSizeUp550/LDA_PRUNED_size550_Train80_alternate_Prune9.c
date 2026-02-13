// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.70%
// test_accuracy: 72.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_24.txt', 'act2\\trial_37.txt']}
// generated: 2026-02-13 14:47:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.261112, 0.261177,
    -0.085788, 0.085674,
    -0.041468, 0.041490,
    0.010289, -0.010250,
    1.922963, -1.923026,
    -1.752247, 1.752334,
    -0.084759, 0.084747,
    0.212773, -0.212794,
    -0.637539, 0.637562,
    -0.513444, 0.513441,
    0.185150, -0.185181,
    1.514872, -1.514860,
};

float Cg_init[2] = {
    -0.599104, -0.599128
};

float xstd_init[12] = {
    0.000911, 0.000081, 0.008774, 0.065666, 0.000788, 0.000137, 0.014651, 0.053973, 0.003491, 0.001046, 0.121394, 0.211793
};

float xmean_init[12] = {
    0.005551, -0.007757, 0.002261, 0.092087, 0.002418, -0.007845, 0.005043, 0.048609, 0.009079, -0.006579, 0.137276, 0.473044
};

