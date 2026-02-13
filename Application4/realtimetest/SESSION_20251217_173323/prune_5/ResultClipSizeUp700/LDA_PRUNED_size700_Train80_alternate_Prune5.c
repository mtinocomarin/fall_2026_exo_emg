// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.62%
// test_accuracy: 71.54%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:08:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.429095, 0.429031,
    0.325938, -0.325787,
    -0.077537, 0.077502,
    0.210163, -0.210213,
    0.252559, -0.252627,
    -0.374384, 0.374395,
    -0.774140, 0.774177,
    0.231825, -0.231831,
    0.209911, -0.209888,
    -0.656527, 0.656546,
    0.405449, -0.405494,
    0.769302, -0.769280,
};

float Cg_init[2] = {
    -0.437443, -0.437436
};

float xstd_init[12] = {
    0.001140, 0.000181, 0.024962, 0.096460, 0.003215, 0.001004, 0.058839, 0.147900, 0.005695, 0.002263, 0.151709, 0.246946
};

float xmean_init[12] = {
    0.005638, -0.007692, 0.009158, 0.140440, 0.004522, -0.007430, 0.024835, 0.133297, 0.011796, -0.005754, 0.177363, 0.547143
};

