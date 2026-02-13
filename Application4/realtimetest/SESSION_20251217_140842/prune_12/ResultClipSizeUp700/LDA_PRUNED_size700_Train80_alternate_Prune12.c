// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 99.04%
// test_accuracy: 69.23%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:42:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.589005, 2.588856,
    1.152881, -1.152604,
    0.257590, -0.257612,
    -0.838899, 0.838780,
    -0.721754, 0.721752,
    -0.286662, 0.286639,
    -0.308618, 0.308576,
    0.589402, -0.589329,
    0.322098, -0.322135,
    0.577504, -0.577434,
    -0.044458, 0.044464,
    -0.384046, 0.384014,
};

float Cg_init[2] = {
    -1.062651, -1.062624
};

float xstd_init[12] = {
    0.001190, 0.000160, 0.018678, 0.110595, 0.003989, 0.001161, 0.086225, 0.174282, 0.000930, 0.000153, 0.029566, 0.118330
};

float xmean_init[12] = {
    0.005972, -0.007644, 0.008462, 0.176923, 0.010480, -0.006328, 0.155385, 0.551538, 0.005088, -0.007566, 0.023590, 0.245000
};

