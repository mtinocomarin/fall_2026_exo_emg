// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.33%
// test_accuracy: 66.25%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:41:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.526799, 2.526898,
    0.884753, -0.884937,
    0.249907, -0.249880,
    -0.041611, 0.041685,
    0.663781, -0.663797,
    -1.405979, 1.406001,
    -0.286845, 0.286838,
    0.062434, -0.062434,
    0.180725, -0.180709,
    0.276583, -0.276562,
    0.078417, -0.078419,
    -0.207882, 0.207865,
};

float Cg_init[2] = {
    -0.863096, -0.863116
};

float xstd_init[12] = {
    0.001041, 0.000176, 0.028069, 0.118395, 0.004001, 0.001234, 0.092521, 0.156621, 0.001111, 0.000170, 0.031781, 0.116400
};

float xmean_init[12] = {
    0.005924, -0.007621, 0.014963, 0.187778, 0.010788, -0.006221, 0.161037, 0.575111, 0.005121, -0.007558, 0.030519, 0.254667
};

