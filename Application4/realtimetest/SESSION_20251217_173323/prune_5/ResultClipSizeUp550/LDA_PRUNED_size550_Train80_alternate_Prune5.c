// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 77.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_21.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:08:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.290550, 0.290519,
    0.164527, -0.164445,
    0.305932, -0.305953,
    -0.006491, 0.006463,
    0.802653, -0.802651,
    -0.272681, 0.272664,
    -1.448733, 1.448747,
    0.350826, -0.350839,
    -0.621165, 0.621168,
    -0.532612, 0.532624,
    0.416286, -0.416312,
    1.393230, -1.393214,
};

float Cg_init[2] = {
    -0.554992, -0.554988
};

float xstd_init[12] = {
    0.001157, 0.000161, 0.025975, 0.096522, 0.002995, 0.000906, 0.060018, 0.143482, 0.005804, 0.002400, 0.153509, 0.244638
};

float xmean_init[12] = {
    0.005535, -0.007709, 0.008476, 0.128429, 0.004444, -0.007476, 0.025333, 0.135143, 0.011810, -0.005659, 0.174286, 0.551714
};

