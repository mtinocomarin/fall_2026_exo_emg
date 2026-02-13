// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.05%
// test_accuracy: 62.50%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_16.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt']}
// generated: 2025-12-17 14:40:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.034053, 2.034077,
    1.178780, -1.178856,
    -0.308256, 0.308276,
    -0.404478, 0.404517,
    0.797539, -0.797569,
    -1.894398, 1.894419,
    0.140565, -0.140566,
    -0.277316, 0.277323,
    0.208511, -0.208475,
    0.091197, -0.091254,
    -0.097037, 0.097060,
    0.352120, -0.352109,
};

float Cg_init[2] = {
    -0.813042, -0.813056
};

float xstd_init[12] = {
    0.000951, 0.000168, 0.023194, 0.114429, 0.003441, 0.001140, 0.093567, 0.150788, 0.001289, 0.000207, 0.032323, 0.121302
};

float xmean_init[12] = {
    0.005900, -0.007620, 0.014545, 0.190454, 0.010782, -0.006233, 0.168485, 0.568182, 0.005150, -0.007536, 0.027879, 0.254091
};

