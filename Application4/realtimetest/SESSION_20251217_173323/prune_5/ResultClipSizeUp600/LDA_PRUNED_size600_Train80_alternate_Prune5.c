// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.74%
// test_accuracy: 70.91%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:08:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.399325, 0.399216,
    0.862836, -0.862538,
    -0.347344, 0.347230,
    -0.024258, 0.024155,
    0.417263, -0.417332,
    -0.212743, 0.212790,
    -1.076050, 1.076021,
    0.121213, -0.121197,
    -0.294922, 0.294881,
    -0.393782, 0.393825,
    0.331837, -0.331857,
    1.000033, -1.000021,
};

float Cg_init[2] = {
    -0.466560, -0.466533
};

float xstd_init[12] = {
    0.001054, 0.000114, 0.024753, 0.087939, 0.002997, 0.000917, 0.063138, 0.156770, 0.006003, 0.002485, 0.155968, 0.245534
};

float xmean_init[12] = {
    0.005493, -0.007721, 0.007965, 0.127273, 0.004423, -0.007478, 0.026580, 0.137403, 0.012174, -0.005562, 0.186321, 0.565325
};

