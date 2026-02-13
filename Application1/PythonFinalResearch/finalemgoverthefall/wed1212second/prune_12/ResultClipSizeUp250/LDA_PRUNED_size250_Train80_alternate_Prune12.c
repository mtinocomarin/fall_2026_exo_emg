// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_12\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 70.31%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 17:05:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.444087, -0.444182,
    -0.044400, 0.044621,
    -0.330543, 0.330535,
    -0.323411, 0.323293,
    1.940436, -1.940569,
    -1.823395, 1.823536,
    -0.288356, 0.288338,
    0.345239, -0.345240,
    -0.449971, 0.449985,
    -1.171982, 1.171940,
    0.427909, -0.427880,
    2.455943, -2.455967,
};

float Cg_init[2] = {
    -0.949460, -0.949480
};

float xstd_init[12] = {
    0.000872, 0.000054, 0.004654, 0.060002, 0.000857, 0.000151, 0.016442, 0.061216, 0.003162, 0.000925, 0.118305, 0.217805
};

float xmean_init[12] = {
    0.005560, -0.007767, 0.000833, 0.086500, 0.002420, -0.007840, 0.006167, 0.056000, 0.008987, -0.006637, 0.142167, 0.482750
};

