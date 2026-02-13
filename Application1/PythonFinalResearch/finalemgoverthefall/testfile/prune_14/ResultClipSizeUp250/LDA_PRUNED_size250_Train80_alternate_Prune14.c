// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.83%
// test_accuracy: 70.31%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt']}
// generated: 2026-02-13 14:49:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.623499, -0.623677,
    -0.001872, 0.002328,
    -0.378736, 0.378718,
    -0.454766, 0.454511,
    2.025641, -2.025932,
    -1.936545, 1.936870,
    -0.557721, 0.557680,
    0.607321, -0.607327,
    -0.390166, 0.390162,
    -1.404276, 1.404189,
    0.417099, -0.417029,
    2.731404, -2.731436,
};

float Cg_init[2] = {
    -1.109875, -1.109913
};

float xstd_init[12] = {
    0.000859, 0.000055, 0.004398, 0.059314, 0.000890, 0.000159, 0.016042, 0.062777, 0.003093, 0.000902, 0.113619, 0.214475
};

float xmean_init[12] = {
    0.005586, -0.007768, 0.000741, 0.082500, 0.002458, -0.007837, 0.005556, 0.055556, 0.008898, -0.006681, 0.133704, 0.474444
};

