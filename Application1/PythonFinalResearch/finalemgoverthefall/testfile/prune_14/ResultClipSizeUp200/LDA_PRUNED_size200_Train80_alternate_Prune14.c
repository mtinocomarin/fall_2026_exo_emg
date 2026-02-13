// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.15%
// test_accuracy: 66.67%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt']}
// generated: 2026-02-13 14:49:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    1.003952, -1.003972,
    0.086124, -0.086084,
    -0.525080, 0.525074,
    -0.679271, 0.679253,
    3.200750, -3.200692,
    -2.552627, 2.552561,
    -0.357601, 0.357616,
    0.307663, -0.307663,
    -1.762162, 1.762170,
    -0.394552, 0.394539,
    0.369846, -0.369840,
    4.143898, -4.143890,
};

float Cg_init[2] = {
    -1.695350, -1.695324
};

float xstd_init[12] = {
    0.000907, 0.000051, 0.004403, 0.060919, 0.000854, 0.000145, 0.018722, 0.063313, 0.003059, 0.000956, 0.126985, 0.233739
};

float xmean_init[12] = {
    0.005563, -0.007768, 0.000741, 0.085185, 0.002455, -0.007838, 0.006914, 0.056296, 0.008732, -0.006630, 0.142469, 0.485926
};

