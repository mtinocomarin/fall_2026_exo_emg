// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.92%
// test_accuracy: 66.67%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:42:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.680083, 3.680212,
    1.313384, -1.313582,
    0.281669, -0.281651,
    -0.164159, 0.164230,
    -0.474897, 0.474868,
    -0.172570, 0.172555,
    -0.192330, 0.192369,
    0.411541, -0.411562,
    0.089484, -0.089356,
    0.215385, -0.215572,
    0.212131, -0.212087,
    0.141074, -0.141028,
};

float Cg_init[2] = {
    -1.148442, -1.148480
};

float xstd_init[12] = {
    0.001210, 0.000203, 0.032365, 0.138640, 0.004060, 0.001185, 0.083910, 0.167844, 0.000863, 0.000140, 0.032670, 0.112321
};

float xmean_init[12] = {
    0.006118, -0.007596, 0.015926, 0.201111, 0.010522, -0.006329, 0.147407, 0.556389, 0.005204, -0.007553, 0.030741, 0.262222
};

