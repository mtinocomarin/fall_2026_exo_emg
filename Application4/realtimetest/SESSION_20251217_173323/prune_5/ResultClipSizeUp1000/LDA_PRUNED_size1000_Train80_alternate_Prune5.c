// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.59%
// test_accuracy: 66.84%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:09:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.214296, 0.214225,
    0.194033, -0.193897,
    0.002170, -0.002199,
    0.034842, -0.034888,
    0.380739, -0.380797,
    -0.483017, 0.483063,
    -0.887302, 0.887320,
    0.175318, -0.175343,
    0.590371, -0.590339,
    -0.858826, 0.858822,
    0.412916, -0.412950,
    0.647997, -0.647987,
};

float Cg_init[2] = {
    -0.414893, -0.414889
};

float xstd_init[12] = {
    0.001068, 0.000137, 0.021098, 0.087008, 0.003058, 0.000954, 0.057714, 0.148105, 0.005543, 0.002194, 0.151057, 0.238177
};

float xmean_init[12] = {
    0.005598, -0.007705, 0.007368, 0.134361, 0.004515, -0.007436, 0.024762, 0.136842, 0.012093, -0.005692, 0.179700, 0.553910
};

