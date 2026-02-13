// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_11\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.96%
// test_accuracy: 69.08%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2026-02-13 14:48:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.115806, 0.115471,
    -0.167763, 0.168455,
    0.017356, -0.017430,
    0.180185, -0.180529,
    1.501116, -1.501008,
    -1.036742, 1.036499,
    -0.080209, 0.080279,
    0.131147, -0.131093,
    -0.449026, 0.449068,
    -0.302024, 0.301991,
    0.573281, -0.573292,
    1.046512, -1.046548,
};

float Cg_init[2] = {
    -0.566165, -0.566145
};

float xstd_init[12] = {
    0.000934, 0.000074, 0.007304, 0.065571, 0.000686, 0.000105, 0.013604, 0.050533, 0.003069, 0.000980, 0.118782, 0.210330
};

float xmean_init[12] = {
    0.005595, -0.007755, 0.001938, 0.092532, 0.002348, -0.007858, 0.004177, 0.044010, 0.008750, -0.006622, 0.134570, 0.474386
};

