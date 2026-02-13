// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.93%
// test_accuracy: 54.17%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-17 13:45:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.607027, 0.607043,
    0.245283, -0.245330,
    0.112347, -0.112340,
    -0.169678, 0.169702,
    -0.544021, 0.544037,
    -0.130756, 0.130750,
    0.130904, -0.130912,
    0.195269, -0.195273,
    -0.545500, 0.545510,
    0.228587, -0.228588,
    -0.048699, 0.048700,
    0.234097, -0.234110,
};

float Cg_init[2] = {
    -0.248263, -0.248269
};

float xstd_init[12] = {
    0.001015, 0.000079, 0.010874, 0.079740, 0.003032, 0.000829, 0.085944, 0.174319, 0.000845, 0.000107, 0.017265, 0.073500
};

float xmean_init[12] = {
    0.006424, -0.007690, 0.003704, 0.143426, 0.008559, -0.006884, 0.098333, 0.431944, 0.004399, -0.007714, 0.009012, 0.131667
};

