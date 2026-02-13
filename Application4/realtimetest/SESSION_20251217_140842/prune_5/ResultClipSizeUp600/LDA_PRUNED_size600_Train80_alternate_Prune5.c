// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.91%
// test_accuracy: 68.18%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 14:40:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.070061, 2.070110,
    0.843404, -0.843516,
    0.161250, -0.161220,
    -0.026456, 0.026494,
    0.367572, -0.367542,
    -1.022341, 1.022290,
    -0.080193, 0.080189,
    0.113977, -0.113973,
    0.050613, -0.050561,
    0.179616, -0.179651,
    0.182795, -0.182789,
    -0.010751, 0.010751,
};

float Cg_init[2] = {
    -0.626046, -0.626055
};

float xstd_init[12] = {
    0.000998, 0.000177, 0.028144, 0.115703, 0.003780, 0.001163, 0.089123, 0.158308, 0.001097, 0.000173, 0.033057, 0.113970
};

float xmean_init[12] = {
    0.005934, -0.007625, 0.013774, 0.188926, 0.010515, -0.006318, 0.154821, 0.572892, 0.005016, -0.007563, 0.028871, 0.247934
};

