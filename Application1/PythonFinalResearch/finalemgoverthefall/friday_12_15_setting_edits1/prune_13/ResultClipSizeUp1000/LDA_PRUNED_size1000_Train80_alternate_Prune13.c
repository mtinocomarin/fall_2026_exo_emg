// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.30%
// test_accuracy: 67.43%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_10.txt', 'act2\\trial_26.txt', 'act2\\trial_17.txt', 'act2\\trial_23.txt', 'act2\\trial_3.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:17:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.590193, 0.590224,
    0.095559, -0.095577,
    0.828795, -0.828811,
    0.222933, -0.222928,
    -0.524733, 0.524803,
    0.208831, -0.208913,
    -0.005704, 0.005707,
    0.268902, -0.268895,
    0.347272, -0.347277,
    -0.390307, 0.390303,
    -0.373429, 0.373440,
    0.416014, -0.416025,
};

float Cg_init[2] = {
    -0.343960, -0.343970
};

float xstd_init[12] = {
    0.003687, 0.001557, 0.338262, 0.124454, 0.000892, 0.000160, 0.038702, 0.131464, 0.000654, 0.000164, 0.048689, 0.140379
};

float xmean_init[12] = {
    0.010060, -0.005874, 0.439705, 1.042714, 0.003299, -0.007777, 0.007849, 0.612354, 0.003497, -0.007739, 0.014127, 0.692078
};

