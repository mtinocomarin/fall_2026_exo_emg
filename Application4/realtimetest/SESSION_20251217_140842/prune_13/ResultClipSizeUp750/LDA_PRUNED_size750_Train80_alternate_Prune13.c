// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.62%
// test_accuracy: 62.50%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-17 14:43:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.459467, 6.459610,
    2.769547, -2.769754,
    0.518922, -0.518887,
    -1.097567, 1.097647,
    -0.429018, 0.429009,
    0.952422, -0.952487,
    -1.338972, 1.339013,
    0.843381, -0.843387,
    -1.334954, 1.335055,
    0.666334, -0.666451,
    0.499082, -0.499049,
    0.771310, -0.771300,
};

float Cg_init[2] = {
    -2.014009, -2.014060
};

float xstd_init[12] = {
    0.001390, 0.000242, 0.038466, 0.161513, 0.003846, 0.001122, 0.087313, 0.191931, 0.000917, 0.000140, 0.034330, 0.110613
};

float xmean_init[12] = {
    0.006181, -0.007566, 0.020635, 0.236190, 0.010301, -0.006380, 0.149841, 0.552381, 0.005114, -0.007559, 0.030159, 0.257619
};

