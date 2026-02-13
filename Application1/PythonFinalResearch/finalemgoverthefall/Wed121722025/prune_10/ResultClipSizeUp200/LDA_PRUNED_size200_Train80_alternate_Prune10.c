// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.12%
// test_accuracy: 62.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 13:46:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.659840, 0.659898,
    0.033002, -0.033120,
    0.235062, -0.235045,
    0.152308, -0.152256,
    -0.854770, 0.854766,
    0.046301, -0.046301,
    0.391096, -0.391103,
    -0.091999, 0.092013,
    -1.112619, 1.112655,
    0.294935, -0.295008,
    -0.402155, 0.402183,
    0.907501, -0.907495,
};

float Cg_init[2] = {
    -0.456945, -0.456949
};

float xstd_init[12] = {
    0.000991, 0.000077, 0.010506, 0.078109, 0.002393, 0.000658, 0.074749, 0.158943, 0.000934, 0.000121, 0.020380, 0.076688
};

float xmean_init[12] = {
    0.006456, -0.007688, 0.004444, 0.144242, 0.008587, -0.006925, 0.096364, 0.442727, 0.004340, -0.007718, 0.011717, 0.135758
};

