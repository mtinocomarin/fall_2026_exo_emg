// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_12\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.23%
// test_accuracy: 74.43%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt']}
// generated: 2025-12-17 17:05:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.011214, 0.011078,
    -0.333648, 0.333992,
    0.044636, -0.044690,
    0.000251, -0.000410,
    2.102455, -2.102573,
    -1.796593, 1.796701,
    -0.218170, 0.218180,
    0.302459, -0.302471,
    -0.888404, 0.888399,
    -0.282072, 0.282083,
    0.420899, -0.420916,
    1.557924, -1.557953,
};

float Cg_init[2] = {
    -0.721822, -0.721878
};

float xstd_init[12] = {
    0.000931, 0.000082, 0.008398, 0.067538, 0.000777, 0.000126, 0.015760, 0.055614, 0.003538, 0.001072, 0.123775, 0.220025
};

float xmean_init[12] = {
    0.005624, -0.007750, 0.002364, 0.097000, 0.002437, -0.007845, 0.005636, 0.051182, 0.009224, -0.006517, 0.143031, 0.484364
};

