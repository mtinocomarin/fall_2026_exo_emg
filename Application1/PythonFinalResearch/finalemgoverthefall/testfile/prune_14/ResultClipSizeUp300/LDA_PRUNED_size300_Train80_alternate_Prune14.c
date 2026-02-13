// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.11%
// test_accuracy: 80.00%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_11.txt', 'act1\\trial_19.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_27.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt']}
// generated: 2026-02-13 14:49:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.009817, 0.010010,
    -0.211877, 0.211344,
    -0.112159, 0.112243,
    -0.067119, 0.067429,
    2.752000, -2.751766,
    -2.412026, 2.411730,
    -0.310037, 0.310068,
    0.291706, -0.291675,
    -1.015691, 1.015671,
    -0.103887, 0.103988,
    -0.147800, 0.147719,
    2.270913, -2.270895,
};

float Cg_init[2] = {
    -1.012914, -1.012853
};

float xstd_init[12] = {
    0.000901, 0.000066, 0.008266, 0.073775, 0.000778, 0.000136, 0.017209, 0.062123, 0.003250, 0.000978, 0.117269, 0.224469
};

float xmean_init[12] = {
    0.005773, -0.007753, 0.001778, 0.099111, 0.002425, -0.007840, 0.005778, 0.056667, 0.008784, -0.006664, 0.129185, 0.467334
};

