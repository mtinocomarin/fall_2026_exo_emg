// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_11\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.26%
// test_accuracy: 71.88%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt']}
// generated: 2026-02-13 14:48:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.002508, -0.002579,
    -0.256011, 0.256228,
    0.070219, -0.070264,
    -0.145095, 0.145001,
    2.181507, -2.181724,
    -2.058554, 2.058809,
    -0.220332, 0.220309,
    0.362738, -0.362769,
    -1.074995, 1.075041,
    -0.542172, 0.542129,
    0.332625, -0.332621,
    2.036338, -2.036372,
};

float Cg_init[2] = {
    -0.825848, -0.825921
};

float xstd_init[12] = {
    0.000924, 0.000088, 0.008387, 0.068193, 0.000823, 0.000144, 0.015116, 0.056771, 0.003593, 0.001081, 0.122451, 0.213147
};

float xmean_init[12] = {
    0.005613, -0.007754, 0.001984, 0.092976, 0.002442, -0.007842, 0.005317, 0.050952, 0.009123, -0.006568, 0.135556, 0.471905
};

