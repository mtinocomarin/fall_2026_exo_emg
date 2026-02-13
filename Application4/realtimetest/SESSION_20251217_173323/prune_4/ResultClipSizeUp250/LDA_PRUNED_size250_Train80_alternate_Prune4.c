// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 72.50%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 18:08:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.339677, 0.339701,
    0.045147, -0.045221,
    0.194596, -0.194578,
    0.060007, -0.059979,
    1.294453, -1.294434,
    -0.011037, 0.011042,
    -1.086274, 1.086275,
    -1.078370, 1.078357,
    -0.044726, 0.044746,
    -0.975628, 0.975611,
    0.392621, -0.392616,
    1.825739, -1.825739,
};

float Cg_init[2] = {
    -0.671272, -0.671270
};

float xstd_init[12] = {
    0.001106, 0.000125, 0.023438, 0.091692, 0.002444, 0.000665, 0.059494, 0.143377, 0.004889, 0.001852, 0.158953, 0.241526
};

float xmean_init[12] = {
    0.005468, -0.007722, 0.007333, 0.126000, 0.004102, -0.007578, 0.024667, 0.129000, 0.011424, -0.005942, 0.176667, 0.533333
};

