// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 58.33%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 14:42:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.188841, 6.188824,
    2.039980, -2.039995,
    -0.475464, 0.475494,
    1.505906, -1.505911,
    -0.538818, 0.538856,
    -1.103870, 1.103910,
    0.560554, -0.560574,
    0.542659, -0.542674,
    -1.721670, 1.721491,
    0.099477, -0.099255,
    1.474707, -1.474729,
    -1.178023, 1.177978,
};

float Cg_init[2] = {
    -2.644196, -2.644209
};

float xstd_init[12] = {
    0.000973, 0.000146, 0.021996, 0.110006, 0.004777, 0.001590, 0.090916, 0.165025, 0.001609, 0.000178, 0.032056, 0.108029
};

float xmean_init[12] = {
    0.006044, -0.007609, 0.013889, 0.184167, 0.011507, -0.005894, 0.168333, 0.554167, 0.005584, -0.007513, 0.034444, 0.282500
};

