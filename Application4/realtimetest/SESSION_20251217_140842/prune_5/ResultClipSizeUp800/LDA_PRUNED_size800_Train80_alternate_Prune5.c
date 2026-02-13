// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.48%
// test_accuracy: 69.17%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:40:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.793424, 1.793392,
    0.635431, -0.635410,
    0.379377, -0.379367,
    -0.297268, 0.297253,
    0.205289, -0.205266,
    -0.852571, 0.852518,
    -0.152693, 0.152700,
    0.527583, -0.527578,
    0.111892, -0.111821,
    -0.024185, 0.024070,
    0.215271, -0.215251,
    0.006979, -0.006944,
};

float Cg_init[2] = {
    -0.565438, -0.565424
};

float xstd_init[12] = {
    0.001041, 0.000180, 0.027194, 0.123858, 0.003641, 0.001028, 0.086168, 0.167185, 0.000867, 0.000151, 0.031836, 0.111676
};

float xmean_init[12] = {
    0.005899, -0.007626, 0.012444, 0.196485, 0.010328, -0.006382, 0.152404, 0.561697, 0.004926, -0.007575, 0.027071, 0.243515
};

