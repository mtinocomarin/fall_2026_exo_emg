// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_10\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.91%
// test_accuracy: 70.83%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-17 17:04:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.052472, -0.052578,
    -0.324226, 0.324467,
    0.055254, -0.055290,
    -0.101628, 0.101511,
    2.124562, -2.124518,
    -1.944793, 1.944694,
    -0.171479, 0.171507,
    0.323946, -0.323914,
    -0.804044, 0.804000,
    -0.415913, 0.415965,
    0.296117, -0.296130,
    1.681178, -1.681193,
};

float Cg_init[2] = {
    -0.706211, -0.706208
};

float xstd_init[12] = {
    0.000931, 0.000084, 0.008020, 0.067744, 0.000786, 0.000132, 0.016143, 0.057718, 0.003517, 0.001071, 0.120442, 0.213231
};

float xmean_init[12] = {
    0.005550, -0.007756, 0.002020, 0.093637, 0.002430, -0.007844, 0.005724, 0.051818, 0.009172, -0.006550, 0.140202, 0.477778
};

