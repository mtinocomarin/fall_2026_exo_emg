// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.73%
// test_accuracy: 64.00%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-17 18:09:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.143911, 1.144011,
    1.459084, -1.459377,
    -0.336079, 0.336153,
    -0.440970, 0.441042,
    1.039275, -1.039229,
    -0.514893, 0.514931,
    -1.046854, 1.046913,
    -0.554165, 0.554116,
    1.903629, -1.903622,
    -2.677041, 2.677027,
    1.307320, -1.307326,
    0.814460, -0.814453,
};

float Cg_init[2] = {
    -0.893296, -0.893323
};

float xstd_init[12] = {
    0.001189, 0.000151, 0.030285, 0.097121, 0.002690, 0.000718, 0.056981, 0.144199, 0.004973, 0.001755, 0.145091, 0.241834
};

float xmean_init[12] = {
    0.005584, -0.007703, 0.010909, 0.136364, 0.004196, -0.007564, 0.022788, 0.117455, 0.011427, -0.006035, 0.161212, 0.528364
};

