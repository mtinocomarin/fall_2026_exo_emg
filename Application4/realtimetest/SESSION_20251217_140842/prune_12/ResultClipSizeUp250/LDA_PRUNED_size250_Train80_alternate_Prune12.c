// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 46.88%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_17.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-17 14:42:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -8.059547, 8.059378,
    6.343530, -6.343398,
    1.433476, -1.433422,
    -2.525409, 2.525344,
    5.576927, -5.576745,
    -8.744425, 8.744259,
    -0.154477, 0.154444,
    -3.890142, 3.890051,
    -11.852825, 11.852427,
    13.134459, -13.134002,
    -1.247649, 1.247614,
    1.006199, -1.006240,
};

float Cg_init[2] = {
    -4.820222, -4.820038
};

float xstd_init[12] = {
    0.000883, 0.000138, 0.017413, 0.089731, 0.004195, 0.001525, 0.101257, 0.160719, 0.001753, 0.000193, 0.032307, 0.116730
};

float xmean_init[12] = {
    0.005832, -0.007614, 0.009167, 0.180000, 0.011200, -0.005856, 0.185833, 0.571250, 0.005270, -0.007569, 0.023333, 0.240000
};

