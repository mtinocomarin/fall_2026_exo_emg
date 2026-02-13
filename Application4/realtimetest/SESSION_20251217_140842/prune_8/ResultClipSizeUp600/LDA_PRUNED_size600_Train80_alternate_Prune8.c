// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.02%
// test_accuracy: 63.64%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 14:41:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.153068, 3.153162,
    1.018775, -1.019003,
    0.335368, -0.335298,
    -0.133180, 0.133270,
    0.164825, -0.164811,
    -0.889815, 0.889764,
    0.096038, -0.096028,
    0.117587, -0.117594,
    0.327706, -0.327642,
    -0.218275, 0.218159,
    0.479080, -0.479065,
    0.170890, -0.170847,
};

float Cg_init[2] = {
    -1.011002, -1.011019
};

float xstd_init[12] = {
    0.001106, 0.000194, 0.031068, 0.124136, 0.003804, 0.001084, 0.082989, 0.156751, 0.000867, 0.000165, 0.032338, 0.117090
};

float xmean_init[12] = {
    0.006010, -0.007609, 0.014697, 0.197727, 0.010200, -0.006395, 0.142121, 0.565682, 0.005110, -0.007550, 0.029242, 0.257955
};

