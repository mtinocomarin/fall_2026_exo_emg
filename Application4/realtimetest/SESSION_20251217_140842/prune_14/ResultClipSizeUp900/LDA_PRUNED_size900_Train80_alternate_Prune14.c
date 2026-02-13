// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.59%
// test_accuracy: 75.74%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_13.txt', 'act2\\trial_1.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 14:43:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.284163, 4.284030,
    3.023703, -3.023506,
    -0.070914, 0.070885,
    -1.741180, 1.741094,
    -3.463654, 3.463622,
    1.468985, -1.468962,
    -0.723206, 0.723181,
    2.602930, -2.602876,
    0.457392, -0.457401,
    1.218824, -1.218796,
    -0.556859, 0.556842,
    -0.707242, 0.707244,
};

float Cg_init[2] = {
    -1.412152, -1.412116
};

float xstd_init[12] = {
    0.001310, 0.000181, 0.022050, 0.128824, 0.003806, 0.001110, 0.098957, 0.208870, 0.000923, 0.000164, 0.035537, 0.122627
};

float xmean_init[12] = {
    0.006029, -0.007638, 0.009804, 0.178823, 0.009145, -0.006593, 0.135294, 0.498235, 0.005251, -0.007535, 0.027059, 0.268823
};

