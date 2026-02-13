// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 66.32%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:08:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.209769, 0.209744,
    0.237570, -0.237530,
    -0.015803, 0.015799,
    0.064443, -0.064460,
    0.414944, -0.414904,
    -0.559118, 0.559093,
    -0.771111, 0.771110,
    0.156802, -0.156829,
    0.441415, -0.441390,
    -0.733273, 0.733268,
    0.357034, -0.357065,
    0.662107, -0.662094,
};

float Cg_init[2] = {
    -0.383141, -0.383137
};

float xstd_init[12] = {
    0.001067, 0.000165, 0.021398, 0.090991, 0.003065, 0.000958, 0.057704, 0.147705, 0.005509, 0.002150, 0.148553, 0.237415
};

float xmean_init[12] = {
    0.005609, -0.007699, 0.007626, 0.134667, 0.004509, -0.007431, 0.024842, 0.135930, 0.011836, -0.005782, 0.174316, 0.545123
};

