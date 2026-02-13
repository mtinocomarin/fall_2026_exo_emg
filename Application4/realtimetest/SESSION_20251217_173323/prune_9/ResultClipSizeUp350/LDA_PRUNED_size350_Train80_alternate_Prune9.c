// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.83%
// test_accuracy: 78.33%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_14.txt', 'act1\\trial_18.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:10:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.350342, 1.350290,
    0.830165, -0.830024,
    0.610592, -0.610649,
    -0.626919, 0.626876,
    2.359344, -2.359359,
    -1.924898, 1.924904,
    -1.179840, 1.179821,
    -0.082366, 0.082368,
    -0.860428, 0.860431,
    -0.991473, 0.991464,
    0.873282, -0.873278,
    2.429796, -2.429805,
};

float Cg_init[2] = {
    -1.356378, -1.356370
};

float xstd_init[12] = {
    0.001109, 0.000117, 0.018375, 0.080123, 0.002264, 0.000538, 0.039249, 0.112324, 0.005814, 0.002376, 0.178540, 0.268837
};

float xmean_init[12] = {
    0.005397, -0.007724, 0.006667, 0.122667, 0.004078, -0.007632, 0.014444, 0.115333, 0.011719, -0.005626, 0.183555, 0.527000
};

