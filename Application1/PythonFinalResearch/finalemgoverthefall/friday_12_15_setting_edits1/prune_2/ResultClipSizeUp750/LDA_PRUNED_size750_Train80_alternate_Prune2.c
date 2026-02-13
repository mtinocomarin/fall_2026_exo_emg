// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.33%
// test_accuracy: 65.18%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:12:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.472004, 0.472021,
    -0.039514, 0.039525,
    0.464997, -0.465018,
    0.221025, -0.221027,
    -0.282043, 0.281903,
    0.045149, -0.045003,
    0.010125, -0.010125,
    0.055950, -0.055972,
    0.166094, -0.166190,
    -0.254011, 0.254209,
    -0.218186, 0.218103,
    0.296519, -0.296539,
};

float Cg_init[2] = {
    -0.166905, -0.166911
};

float xstd_init[12] = {
    0.004354, 0.002005, 0.345249, 0.123047, 0.001013, 0.000178, 0.044302, 0.132770, 0.000638, 0.000154, 0.047136, 0.139477
};

float xmean_init[12] = {
    0.010333, -0.005701, 0.436985, 1.035286, 0.003346, -0.007769, 0.010159, 0.620858, 0.003511, -0.007737, 0.014286, 0.696952
};

