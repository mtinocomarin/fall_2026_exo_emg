// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.18%
// test_accuracy: 68.89%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:09:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.425944, 0.426035,
    1.104728, -1.104968,
    -0.355793, 0.355867,
    -0.157000, 0.157069,
    0.071586, -0.071460,
    0.253705, -0.253823,
    -1.472259, 1.472344,
    0.354853, -0.354887,
    -0.124996, 0.124963,
    -0.704757, 0.704782,
    0.500119, -0.500122,
    1.194429, -1.194448,
};

float Cg_init[2] = {
    -0.565789, -0.565829
};

float xstd_init[12] = {
    0.001068, 0.000139, 0.027152, 0.093153, 0.003091, 0.000943, 0.063059, 0.157501, 0.006289, 0.002573, 0.161638, 0.253670
};

float xmean_init[12] = {
    0.005556, -0.007703, 0.009459, 0.137607, 0.004505, -0.007467, 0.027236, 0.140513, 0.012415, -0.005485, 0.187693, 0.556069
};

