// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.16%
// test_accuracy: 68.42%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.828797, 1.828725,
    0.720434, -0.720347,
    0.399958, -0.399954,
    -0.387035, 0.386990,
    0.217730, -0.217765,
    -1.023463, 1.023449,
    -0.259000, 0.259020,
    0.724145, -0.724136,
    0.235888, -0.235774,
    -0.018300, 0.018096,
    0.137863, -0.137831,
    0.060711, -0.060641,
};

float Cg_init[2] = {
    -0.599339, -0.599323
};

float xstd_init[12] = {
    0.001053, 0.000188, 0.030644, 0.125725, 0.003841, 0.001119, 0.091486, 0.173744, 0.000866, 0.000158, 0.033556, 0.115576
};

float xmean_init[12] = {
    0.005899, -0.007624, 0.014316, 0.198211, 0.010196, -0.006383, 0.149474, 0.550947, 0.005005, -0.007560, 0.029684, 0.249369
};

