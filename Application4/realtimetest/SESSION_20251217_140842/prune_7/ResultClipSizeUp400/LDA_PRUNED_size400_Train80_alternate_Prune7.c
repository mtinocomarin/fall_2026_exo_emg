// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.44%
// test_accuracy: 69.64%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.520339, 2.520332,
    0.330166, -0.330157,
    0.528109, -0.528106,
    0.047046, -0.047051,
    -0.021905, 0.021852,
    -0.773389, 0.773437,
    0.147449, -0.147445,
    -0.203948, 0.203950,
    0.458756, -0.458747,
    -0.454970, 0.454944,
    0.504038, -0.504030,
    0.329104, -0.329097,
};

float Cg_init[2] = {
    -0.879519, -0.879519
};

float xstd_init[12] = {
    0.001039, 0.000190, 0.026635, 0.117236, 0.003814, 0.001091, 0.081762, 0.158714, 0.000859, 0.000170, 0.030704, 0.110387
};

float xmean_init[12] = {
    0.005912, -0.007618, 0.015450, 0.191111, 0.010519, -0.006317, 0.148148, 0.560635, 0.005016, -0.007562, 0.027936, 0.245079
};

