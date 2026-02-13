// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 53.12%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_16.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:43:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.623997, 6.624047,
    2.507540, -2.507582,
    -0.448339, 0.448345,
    0.082667, -0.082658,
    3.662888, -3.662985,
    -3.916745, 3.916841,
    -0.055198, 0.055201,
    0.387374, -0.387382,
    -0.261301, 0.261308,
    0.848169, -0.848196,
    0.188617, -0.188605,
    0.099917, -0.099898,
};

float Cg_init[2] = {
    -2.083464, -2.083488
};

float xstd_init[12] = {
    0.001348, 0.000240, 0.034349, 0.145661, 0.004835, 0.001389, 0.093352, 0.182603, 0.000834, 0.000123, 0.033442, 0.099070
};

float xmean_init[12] = {
    0.006396, -0.007507, 0.022778, 0.255000, 0.010508, -0.006237, 0.147222, 0.535833, 0.005276, -0.007541, 0.038889, 0.267500
};

