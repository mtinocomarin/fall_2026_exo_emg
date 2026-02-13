// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.71%
// test_accuracy: 67.86%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:41:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.231115, 2.231127,
    0.402096, -0.402082,
    0.432530, -0.432537,
    0.056214, -0.056227,
    -0.205228, 0.205210,
    -0.509795, 0.509815,
    0.185595, -0.185591,
    -0.245584, 0.245585,
    0.022591, -0.022600,
    -0.265168, 0.265175,
    0.487654, -0.487654,
    0.235211, -0.235216,
};

float Cg_init[2] = {
    -0.768768, -0.768775
};

float xstd_init[12] = {
    0.001010, 0.000187, 0.025664, 0.116591, 0.004002, 0.001265, 0.084678, 0.154483, 0.001251, 0.000189, 0.033594, 0.116473
};

float xmean_init[12] = {
    0.005905, -0.007623, 0.014476, 0.184857, 0.010836, -0.006232, 0.154286, 0.562857, 0.005060, -0.007562, 0.029333, 0.246286
};

