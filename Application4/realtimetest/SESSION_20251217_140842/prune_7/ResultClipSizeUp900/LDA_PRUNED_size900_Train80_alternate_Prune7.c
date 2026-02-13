// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.87%
// test_accuracy: 73.53%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:41:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.090235, 2.090258,
    0.811120, -0.811216,
    0.445334, -0.445298,
    -0.354846, 0.354880,
    -0.251361, 0.251395,
    -0.762916, 0.762867,
    -0.240094, 0.240092,
    0.775979, -0.775977,
    0.522862, -0.522821,
    -0.074188, 0.074152,
    0.043382, -0.043377,
    -0.111069, 0.111072,
};

float Cg_init[2] = {
    -0.696319, -0.696311
};

float xstd_init[12] = {
    0.001093, 0.000189, 0.030164, 0.128992, 0.003760, 0.001093, 0.089033, 0.171914, 0.000854, 0.000159, 0.032611, 0.116540
};

float xmean_init[12] = {
    0.005927, -0.007622, 0.014118, 0.201046, 0.010170, -0.006393, 0.150588, 0.553072, 0.005039, -0.007557, 0.028758, 0.253726
};

