// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.54%
// test_accuracy: 71.32%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 14:40:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.458837, 1.458810,
    0.614481, -0.614421,
    0.264618, -0.264622,
    -0.244694, 0.244660,
    0.031931, -0.031928,
    -0.660383, 0.660387,
    -0.216071, 0.216054,
    0.489069, -0.489061,
    -0.022067, 0.022070,
    0.260422, -0.260442,
    0.067766, -0.067761,
    -0.094664, 0.094668,
};

float Cg_init[2] = {
    -0.457094, -0.457088
};

float xstd_init[12] = {
    0.000993, 0.000175, 0.027345, 0.120775, 0.003739, 0.001108, 0.087857, 0.167020, 0.001002, 0.000162, 0.032846, 0.113503
};

float xmean_init[12] = {
    0.005899, -0.007625, 0.013072, 0.198530, 0.010370, -0.006364, 0.153922, 0.560196, 0.004974, -0.007565, 0.028758, 0.247647
};

