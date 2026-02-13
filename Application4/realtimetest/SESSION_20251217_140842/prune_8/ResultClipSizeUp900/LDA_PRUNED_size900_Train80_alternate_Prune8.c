// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.54%
// test_accuracy: 72.79%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:41:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.715677, 2.715738,
    1.235489, -1.235657,
    0.366808, -0.366753,
    -0.440167, 0.440232,
    -0.374261, 0.374292,
    -0.549630, 0.549575,
    -0.279226, 0.279233,
    0.950264, -0.950269,
    0.644180, -0.644132,
    -0.089639, 0.089589,
    0.043746, -0.043743,
    -0.175517, 0.175530,
};

float Cg_init[2] = {
    -0.882302, -0.882307
};

float xstd_init[12] = {
    0.001122, 0.000197, 0.031221, 0.134005, 0.003691, 0.001078, 0.084384, 0.174997, 0.000867, 0.000163, 0.033539, 0.120613
};

float xmean_init[12] = {
    0.006016, -0.007611, 0.014510, 0.207059, 0.009806, -0.006475, 0.139020, 0.542500, 0.005105, -0.007549, 0.029608, 0.259559
};

