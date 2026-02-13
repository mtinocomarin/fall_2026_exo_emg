// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.50%
// test_accuracy: 72.50%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:08:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.341287, 0.341272,
    0.088424, -0.088368,
    0.318876, -0.318880,
    0.170968, -0.170991,
    0.714758, -0.714700,
    -0.665352, 0.665250,
    -0.958752, 0.958802,
    0.177151, -0.177177,
    -0.232729, 0.232730,
    -0.498303, 0.498317,
    0.290277, -0.290303,
    1.042417, -1.042399,
};

float Cg_init[2] = {
    -0.433347, -0.433342
};

float xstd_init[12] = {
    0.001163, 0.000183, 0.024571, 0.094494, 0.003064, 0.000934, 0.059137, 0.142996, 0.005545, 0.002226, 0.150017, 0.243718
};

float xmean_init[12] = {
    0.005570, -0.007703, 0.007852, 0.129556, 0.004456, -0.007453, 0.024963, 0.132111, 0.011649, -0.005788, 0.171111, 0.547444
};

