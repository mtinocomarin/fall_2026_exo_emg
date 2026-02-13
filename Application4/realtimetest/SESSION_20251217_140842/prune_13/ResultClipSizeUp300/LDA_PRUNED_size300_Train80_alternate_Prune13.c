// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 60.00%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 14:43:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.628578, 5.628676,
    2.583190, -2.583291,
    1.667654, -1.667667,
    -1.456255, 1.456313,
    0.932442, -0.932431,
    -4.773996, 4.774019,
    0.387254, -0.387242,
    0.662435, -0.662446,
    0.509505, -0.509458,
    2.461226, -2.461358,
    1.306377, -1.306406,
    -0.914048, 0.914102,
};

float Cg_init[2] = {
    -1.994894, -1.994949
};

float xstd_init[12] = {
    0.000951, 0.000125, 0.021792, 0.092615, 0.003926, 0.001053, 0.102429, 0.200340, 0.000903, 0.000153, 0.028817, 0.106962
};

float xmean_init[12] = {
    0.005887, -0.007614, 0.006222, 0.194667, 0.010164, -0.006328, 0.161778, 0.554667, 0.005119, -0.007565, 0.028444, 0.230667
};

