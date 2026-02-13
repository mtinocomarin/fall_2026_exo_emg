// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.78%
// test_accuracy: 65.28%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_8.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:42:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.462580, 4.462492,
    1.001231, -1.001051,
    0.341721, -0.341749,
    0.302927, -0.303015,
    0.214744, -0.214801,
    -1.738595, 1.738648,
    0.033793, -0.033787,
    0.475128, -0.475104,
    0.515229, -0.515259,
    0.449614, -0.449580,
    0.482868, -0.482864,
    -0.207040, 0.207016,
};

float Cg_init[2] = {
    -1.731226, -1.731206
};

float xstd_init[12] = {
    0.000976, 0.000142, 0.020654, 0.108965, 0.004301, 0.001235, 0.079023, 0.163097, 0.000950, 0.000141, 0.030765, 0.112058
};

float xmean_init[12] = {
    0.006016, -0.007628, 0.010370, 0.179111, 0.010794, -0.006213, 0.154074, 0.555111, 0.005144, -0.007571, 0.028741, 0.251556
};

