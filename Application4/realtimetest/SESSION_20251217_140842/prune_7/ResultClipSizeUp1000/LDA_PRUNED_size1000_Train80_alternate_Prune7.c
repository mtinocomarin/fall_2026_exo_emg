// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.94%
// test_accuracy: 69.08%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:41:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.368172, 2.368170,
    0.994888, -0.994956,
    0.468313, -0.468276,
    -0.492873, 0.492894,
    0.113046, -0.113073,
    -0.995790, 0.995776,
    -0.109433, 0.109454,
    0.810131, -0.810127,
    0.384084, -0.383979,
    -0.129308, 0.129121,
    0.065124, -0.065103,
    0.115413, -0.115341,
};

float Cg_init[2] = {
    -0.761154, -0.761148
};

float xstd_init[12] = {
    0.001084, 0.000195, 0.031895, 0.130370, 0.003811, 0.001113, 0.090226, 0.176677, 0.000877, 0.000163, 0.033588, 0.117931
};

float xmean_init[12] = {
    0.005963, -0.007616, 0.015205, 0.202807, 0.009910, -0.006446, 0.143860, 0.541988, 0.005066, -0.007552, 0.029552, 0.254971
};

