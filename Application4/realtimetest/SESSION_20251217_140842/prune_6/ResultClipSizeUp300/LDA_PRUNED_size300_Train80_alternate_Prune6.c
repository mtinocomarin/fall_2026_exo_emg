// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.00%
// test_accuracy: 57.50%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 14:41:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.478907, 2.478899,
    0.914604, -0.914504,
    0.023601, -0.023641,
    -0.256539, 0.256486,
    0.385605, -0.385591,
    -1.391189, 1.391198,
    0.594786, -0.594783,
    -0.307516, 0.307509,
    0.040787, -0.040858,
    -0.401530, 0.401619,
    0.428564, -0.428585,
    0.670410, -0.670427,
};

float Cg_init[2] = {
    -0.902863, -0.902862
};

float xstd_init[12] = {
    0.000991, 0.000180, 0.024121, 0.116689, 0.003849, 0.001293, 0.089358, 0.150748, 0.001360, 0.000208, 0.034997, 0.122024
};

float xmean_init[12] = {
    0.005903, -0.007623, 0.013333, 0.182800, 0.010794, -0.006206, 0.158400, 0.573200, 0.005157, -0.007539, 0.028533, 0.254800
};

