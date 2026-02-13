// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.23%
// test_accuracy: 73.08%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_24.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_19.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 18:10:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.652088, 0.652121,
    0.118856, -0.118920,
    0.412196, -0.412167,
    0.262400, -0.262393,
    0.923646, -0.923554,
    -0.431826, 0.431737,
    -1.397003, 1.397021,
    0.260711, -0.260732,
    -0.423762, 0.423731,
    -0.614924, 0.614955,
    0.577600, -0.577617,
    1.380585, -1.380569,
};

float Cg_init[2] = {
    -0.727700, -0.727700
};

float xstd_init[12] = {
    0.001178, 0.000149, 0.026088, 0.090543, 0.002826, 0.000902, 0.049949, 0.136661, 0.006108, 0.002514, 0.169017, 0.270596
};

float xmean_init[12] = {
    0.005499, -0.007714, 0.008923, 0.128923, 0.004333, -0.007511, 0.019590, 0.129539, 0.012082, -0.005513, 0.192513, 0.558923
};

