// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.43%
// test_accuracy: 70.00%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:09:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.713647, 0.713821,
    1.329096, -1.329535,
    -0.477041, 0.477215,
    -0.087294, 0.087412,
    0.348885, -0.348775,
    0.073396, -0.073524,
    -1.611233, 1.611343,
    0.466062, -0.466097,
    -0.137857, 0.137881,
    -0.696253, 0.696246,
    0.517365, -0.517380,
    1.158704, -1.158703,
};

float Cg_init[2] = {
    -0.663191, -0.663253
};

float xstd_init[12] = {
    0.001110, 0.000123, 0.027498, 0.091602, 0.002989, 0.000953, 0.056119, 0.144740, 0.006130, 0.002569, 0.165934, 0.262749
};

float xmean_init[12] = {
    0.005553, -0.007711, 0.009807, 0.133389, 0.004433, -0.007479, 0.022590, 0.133223, 0.012304, -0.005476, 0.189863, 0.561488
};

