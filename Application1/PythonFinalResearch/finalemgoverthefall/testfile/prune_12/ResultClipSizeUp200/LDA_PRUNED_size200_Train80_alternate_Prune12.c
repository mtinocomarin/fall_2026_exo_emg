// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.83%
// test_accuracy: 64.58%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt']}
// generated: 2026-02-13 14:48:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.924164, -0.924148,
    0.173306, -0.173358,
    -0.451202, 0.451206,
    -0.925135, 0.925168,
    2.771847, -2.771729,
    -2.078202, 2.078057,
    -0.367648, 0.367672,
    0.115017, -0.115005,
    -1.617451, 1.617439,
    -0.470938, 0.470966,
    0.346112, -0.346132,
    3.629860, -3.629843,
};

float Cg_init[2] = {
    -1.430604, -1.430573
};

float xstd_init[12] = {
    0.000869, 0.000050, 0.004181, 0.060681, 0.000822, 0.000139, 0.018454, 0.061531, 0.003060, 0.000947, 0.123278, 0.224340
};

float xmean_init[12] = {
    0.005541, -0.007768, 0.000667, 0.085333, 0.002416, -0.007842, 0.006889, 0.054333, 0.008780, -0.006644, 0.141333, 0.483333
};

