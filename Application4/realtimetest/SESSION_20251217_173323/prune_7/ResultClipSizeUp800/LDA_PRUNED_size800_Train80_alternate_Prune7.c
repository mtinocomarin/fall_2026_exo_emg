// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.83%
// test_accuracy: 69.33%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_14.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:09:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.371320, 0.371314,
    0.278314, -0.278296,
    0.056914, -0.056913,
    0.192039, -0.192051,
    0.399685, -0.399640,
    -0.472980, 0.472926,
    -1.023789, 1.023812,
    0.345172, -0.345193,
    0.247778, -0.247784,
    -0.776798, 0.776817,
    0.472547, -0.472572,
    0.895571, -0.895560,
};

float Cg_init[2] = {
    -0.515753, -0.515754
};

float xstd_init[12] = {
    0.001109, 0.000153, 0.024417, 0.086246, 0.002951, 0.000921, 0.053145, 0.142622, 0.005724, 0.002291, 0.159396, 0.255764
};

float xmean_init[12] = {
    0.005572, -0.007707, 0.008667, 0.133667, 0.004405, -0.007476, 0.021778, 0.133334, 0.012014, -0.005652, 0.185852, 0.555556
};

