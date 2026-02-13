// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_13\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.16%
// test_accuracy: 69.12%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt']}
// generated: 2026-02-13 14:49:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.063715, 0.063610,
    -0.189660, 0.189862,
    -0.001046, 0.001030,
    0.150892, -0.151000,
    1.905828, -1.905718,
    -1.358635, 1.358466,
    0.005290, -0.005242,
    0.129577, -0.129556,
    -0.946360, 0.946401,
    -0.099622, 0.099561,
    0.680252, -0.680257,
    1.342760, -1.342736,
};

float Cg_init[2] = {
    -0.735994, -0.735956
};

float xstd_init[12] = {
    0.000936, 0.000076, 0.008737, 0.066554, 0.000712, 0.000112, 0.014444, 0.051724, 0.003268, 0.001036, 0.122320, 0.216105
};

float xmean_init[12] = {
    0.005631, -0.007751, 0.002518, 0.095047, 0.002382, -0.007852, 0.004665, 0.047121, 0.008994, -0.006529, 0.146007, 0.486935
};

