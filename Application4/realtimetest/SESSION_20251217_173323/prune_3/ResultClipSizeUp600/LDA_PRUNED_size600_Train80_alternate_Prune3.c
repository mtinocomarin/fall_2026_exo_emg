// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.82%
// test_accuracy: 72.73%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 18:08:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.104443, 0.104405,
    0.245565, -0.245450,
    -0.083980, 0.083953,
    0.043163, -0.043209,
    0.538402, -0.538382,
    -0.318366, 0.318335,
    -0.922684, 0.922695,
    0.071672, -0.071698,
    -0.176178, 0.176181,
    -0.402789, 0.402813,
    0.312661, -0.312695,
    0.882301, -0.882282,
};

float Cg_init[2] = {
    -0.369268, -0.369262
};

float xstd_init[12] = {
    0.001078, 0.000151, 0.024186, 0.093545, 0.003158, 0.000966, 0.065987, 0.158454, 0.005903, 0.002390, 0.150590, 0.239887
};

float xmean_init[12] = {
    0.005592, -0.007706, 0.008561, 0.131932, 0.004533, -0.007443, 0.028561, 0.140114, 0.011963, -0.005673, 0.177955, 0.557045
};

