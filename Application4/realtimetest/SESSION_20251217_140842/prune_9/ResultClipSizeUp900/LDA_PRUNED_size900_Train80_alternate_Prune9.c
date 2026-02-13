// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.54%
// test_accuracy: 77.21%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:42:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.116684, 3.116783,
    1.596537, -1.596761,
    0.221383, -0.221325,
    -0.456205, 0.456298,
    -0.830761, 0.830772,
    -0.351159, 0.351148,
    -0.241960, 0.241959,
    0.948373, -0.948383,
    0.963083, -0.963069,
    -0.054725, 0.054746,
    0.025417, -0.025418,
    -0.199803, 0.199779,
};

float Cg_init[2] = {
    -1.038776, -1.038796
};

float xstd_init[12] = {
    0.001155, 0.000202, 0.031313, 0.132017, 0.003788, 0.001091, 0.083630, 0.176421, 0.000850, 0.000163, 0.033631, 0.120686
};

float xmean_init[12] = {
    0.006057, -0.007609, 0.014790, 0.204034, 0.009791, -0.006483, 0.136807, 0.542857, 0.005158, -0.007544, 0.030140, 0.263698
};

