// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.45%
// test_accuracy: 70.77%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:08:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.229938, 0.229848,
    0.219551, -0.219326,
    -0.080609, 0.080553,
    0.180930, -0.181000,
    0.309388, -0.309486,
    -0.350730, 0.350763,
    -0.787306, 0.787345,
    0.111471, -0.111486,
    0.086674, -0.086626,
    -0.527395, 0.527397,
    0.322214, -0.322263,
    0.764878, -0.764851,
};

float Cg_init[2] = {
    -0.370330, -0.370320
};

float xstd_init[12] = {
    0.001102, 0.000172, 0.023599, 0.093816, 0.003258, 0.000991, 0.066018, 0.160883, 0.005743, 0.002286, 0.147792, 0.238870
};

float xmean_init[12] = {
    0.005569, -0.007701, 0.008269, 0.133462, 0.004580, -0.007421, 0.028718, 0.141346, 0.011980, -0.005708, 0.179295, 0.555481
};

