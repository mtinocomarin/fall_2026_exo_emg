// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.21%
// test_accuracy: 63.82%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_28.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_3.txt', 'act2\\trial_29.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 12:47:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.650623, 0.650642,
    0.340239, -0.340231,
    0.812563, -0.812598,
    0.680644, -0.680640,
    -0.563798, 0.563935,
    0.264409, -0.264565,
    -0.077920, 0.077932,
    -0.062430, 0.062428,
    0.455554, -0.455510,
    -0.407040, 0.406994,
    -0.416078, 0.416105,
    0.015185, -0.015215,
};

float Cg_init[2] = {
    -0.505030, -0.505043
};

float xstd_init[12] = {
    0.003743, 0.001617, 0.154009, 0.209479, 0.001036, 0.000186, 0.026872, 0.081173, 0.000673, 0.000170, 0.030447, 0.104538
};

float xmean_init[12] = {
    0.010156, -0.005799, 0.255292, 0.691025, 0.003382, -0.007765, 0.008643, 0.076122, 0.003515, -0.007733, 0.012558, 0.116843
};

