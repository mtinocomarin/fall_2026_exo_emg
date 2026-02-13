// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.30%
// test_accuracy: 69.20%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 12:39:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.615120, 0.615135,
    -0.032546, 0.032554,
    0.382291, -0.382320,
    0.581721, -0.581704,
    -0.301105, 0.301210,
    0.102117, -0.102243,
    -0.054398, 0.054391,
    -0.072861, 0.072869,
    0.301309, -0.301328,
    -0.112616, 0.112768,
    -0.484580, 0.484545,
    0.007511, -0.007617,
};

float Cg_init[2] = {
    -0.235708, -0.235713
};

float xstd_init[12] = {
    0.004486, 0.002142, 0.154994, 0.207777, 0.001063, 0.000188, 0.027357, 0.081020, 0.000646, 0.000160, 0.029966, 0.105819
};

float xmean_init[12] = {
    0.010514, -0.005582, 0.253261, 0.697857, 0.003368, -0.007765, 0.008608, 0.075220, 0.003525, -0.007733, 0.013370, 0.119781
};

