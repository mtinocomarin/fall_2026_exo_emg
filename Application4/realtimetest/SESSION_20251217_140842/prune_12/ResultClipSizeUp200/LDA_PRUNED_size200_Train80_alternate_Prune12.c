// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 58.33%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 14:42:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.274337, 6.274392,
    1.422889, -1.422967,
    -1.427150, 1.427165,
    -0.155362, 0.155434,
    -1.585666, 1.585610,
    -1.948138, 1.948233,
    1.888714, -1.888724,
    0.576173, -0.576185,
    1.304955, -1.304854,
    0.039624, -0.039745,
    -1.300851, 1.300806,
    0.863008, -0.862968,
};

float Cg_init[2] = {
    -3.153096, -3.153114
};

float xstd_init[12] = {
    0.000852, 0.000127, 0.010152, 0.100304, 0.003441, 0.001303, 0.096889, 0.127484, 0.001624, 0.000210, 0.030938, 0.109173
};

float xmean_init[12] = {
    0.005752, -0.007636, 0.004444, 0.195000, 0.009491, -0.006423, 0.143333, 0.545000, 0.005038, -0.007561, 0.025556, 0.226667
};

