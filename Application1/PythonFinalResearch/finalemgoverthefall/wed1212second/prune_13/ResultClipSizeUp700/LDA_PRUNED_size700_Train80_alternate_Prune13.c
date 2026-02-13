// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.69%
// test_accuracy: 71.15%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt']}
// generated: 2025-12-17 17:06:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.217365, 0.217267,
    -0.307129, 0.307307,
    -0.001030, 0.001006,
    0.111951, -0.112043,
    2.027651, -2.027536,
    -1.490309, 1.490109,
    -0.132083, 0.132137,
    0.321317, -0.321261,
    -0.977035, 0.977002,
    -0.195594, 0.195663,
    0.529073, -0.529109,
    1.490925, -1.490931,
};

float Cg_init[2] = {
    -0.782755, -0.782725
};

float xstd_init[12] = {
    0.000933, 0.000080, 0.009094, 0.067471, 0.000684, 0.000099, 0.015226, 0.053057, 0.003464, 0.001063, 0.123865, 0.219835
};

float xmean_init[12] = {
    0.005666, -0.007748, 0.002591, 0.098381, 0.002392, -0.007852, 0.005128, 0.050122, 0.009086, -0.006535, 0.143104, 0.481943
};

