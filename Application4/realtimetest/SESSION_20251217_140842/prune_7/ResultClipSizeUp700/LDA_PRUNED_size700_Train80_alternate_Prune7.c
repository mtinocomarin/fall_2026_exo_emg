// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.60%
// test_accuracy: 71.15%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:41:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.985630, 1.985633,
    0.613239, -0.613280,
    0.441147, -0.441125,
    -0.327985, 0.327993,
    -0.112755, 0.112781,
    -0.834779, 0.834718,
    -0.048618, 0.048641,
    0.408470, -0.408473,
    0.455392, -0.455336,
    0.065617, -0.065731,
    0.212770, -0.212751,
    -0.231805, 0.231852,
};

float Cg_init[2] = {
    -0.690697, -0.690691
};

float xstd_init[12] = {
    0.001110, 0.000189, 0.029662, 0.128398, 0.003639, 0.001054, 0.084462, 0.160987, 0.000826, 0.000154, 0.031513, 0.111684
};

float xmean_init[12] = {
    0.005932, -0.007616, 0.014131, 0.198804, 0.010360, -0.006358, 0.151909, 0.568205, 0.005048, -0.007560, 0.028034, 0.259316
};

