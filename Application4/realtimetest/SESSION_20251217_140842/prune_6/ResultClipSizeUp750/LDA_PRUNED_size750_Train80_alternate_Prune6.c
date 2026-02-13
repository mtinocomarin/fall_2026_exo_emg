// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.29%
// test_accuracy: 69.64%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.907651, 1.907655,
    0.673156, -0.673137,
    0.360386, -0.360383,
    -0.270876, 0.270853,
    0.293166, -0.293144,
    -0.806332, 0.806288,
    -0.398949, 0.398959,
    0.506585, -0.506586,
    0.139819, -0.139779,
    0.236796, -0.236869,
    0.059149, -0.059136,
    -0.174598, 0.174622,
};

float Cg_init[2] = {
    -0.610992, -0.610996
};

float xstd_init[12] = {
    0.001070, 0.000175, 0.026898, 0.123506, 0.003661, 0.001044, 0.086108, 0.168970, 0.000832, 0.000152, 0.030777, 0.116100
};

float xmean_init[12] = {
    0.005908, -0.007627, 0.012762, 0.195143, 0.010271, -0.006394, 0.150857, 0.558429, 0.004973, -0.007570, 0.027619, 0.250572
};

