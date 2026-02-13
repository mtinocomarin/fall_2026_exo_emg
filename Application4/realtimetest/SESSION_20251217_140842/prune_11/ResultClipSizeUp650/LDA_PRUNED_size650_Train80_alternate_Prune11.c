// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 99.17%
// test_accuracy: 64.58%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 14:42:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -4.749821, 4.750031,
    2.117576, -2.117895,
    -0.037627, 0.037665,
    -0.183357, 0.183496,
    -0.859114, 0.859084,
    0.181915, -0.181932,
    -0.082228, 0.082266,
    0.730133, -0.730162,
    0.066705, -0.066607,
    0.031274, -0.031417,
    0.449603, -0.449567,
    0.061764, -0.061739,
};

float Cg_init[2] = {
    -1.391411, -1.391474
};

float xstd_init[12] = {
    0.001244, 0.000210, 0.033506, 0.145820, 0.003788, 0.001127, 0.083300, 0.174374, 0.000859, 0.000136, 0.033012, 0.110487
};

float xmean_init[12] = {
    0.006186, -0.007584, 0.016889, 0.210667, 0.010357, -0.006364, 0.144444, 0.550667, 0.005215, -0.007552, 0.032444, 0.269000
};

