// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.59%
// test_accuracy: 64.58%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-17 14:41:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.847851, 1.847880,
    0.849530, -0.849596,
    0.090630, -0.090614,
    -0.079991, 0.080025,
    0.439709, -0.439735,
    -1.466619, 1.466631,
    -0.168181, 0.168178,
    -0.305473, 0.305482,
    0.149328, -0.149278,
    0.321510, -0.321600,
    0.350948, -0.350927,
    -0.215748, 0.215777,
};

float Cg_init[2] = {
    -0.834291, -0.834313
};

float xstd_init[12] = {
    0.000885, 0.000132, 0.021408, 0.101223, 0.004166, 0.001310, 0.093342, 0.155187, 0.001285, 0.000200, 0.029552, 0.120067
};

float xmean_init[12] = {
    0.005820, -0.007640, 0.012840, 0.170741, 0.011164, -0.006085, 0.173086, 0.582592, 0.005186, -0.007538, 0.028642, 0.256296
};

