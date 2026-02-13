// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.52%
// test_accuracy: 69.41%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:09:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.472394, 0.472330,
    0.454959, -0.454852,
    -0.075557, 0.075531,
    0.246730, -0.246756,
    0.348180, -0.348262,
    -0.441087, 0.441155,
    -0.952208, 0.952207,
    0.164257, -0.164257,
    0.608363, -0.608346,
    -0.890302, 0.890301,
    0.482365, -0.482395,
    0.678678, -0.678660,
};

float Cg_init[2] = {
    -0.514616, -0.514607
};

float xstd_init[12] = {
    0.001083, 0.000143, 0.022720, 0.083261, 0.002930, 0.000916, 0.055072, 0.146767, 0.005560, 0.002239, 0.158513, 0.252297
};

float xmean_init[12] = {
    0.005497, -0.007713, 0.007647, 0.129412, 0.004387, -0.007477, 0.022680, 0.134902, 0.012045, -0.005649, 0.186210, 0.554020
};

