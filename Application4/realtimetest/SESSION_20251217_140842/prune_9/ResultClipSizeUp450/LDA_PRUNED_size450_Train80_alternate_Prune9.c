// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.64%
// test_accuracy: 59.38%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 14:41:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.532639, 4.532845,
    2.485162, -2.485444,
    0.025446, -0.025416,
    -0.284533, 0.284619,
    1.590069, -1.590131,
    -2.333905, 2.333947,
    0.282011, -0.282009,
    0.037329, -0.037341,
    -0.518613, 0.518766,
    0.585303, -0.585484,
    0.164731, -0.164687,
    -0.346191, 0.346238,
};

float Cg_init[2] = {
    -1.322509, -1.322586
};

float xstd_init[12] = {
    0.001103, 0.000197, 0.026507, 0.130221, 0.004276, 0.001340, 0.084490, 0.153334, 0.001305, 0.000166, 0.032382, 0.115901
};

float xmean_init[12] = {
    0.006033, -0.007606, 0.014762, 0.192857, 0.010896, -0.006198, 0.157857, 0.546429, 0.005239, -0.007552, 0.031905, 0.258929
};

