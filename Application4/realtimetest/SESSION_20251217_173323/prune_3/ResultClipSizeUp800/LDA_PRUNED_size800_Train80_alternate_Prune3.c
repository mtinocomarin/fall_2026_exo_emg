// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.88%
// test_accuracy: 70.67%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:08:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.163269, 0.163187,
    0.147588, -0.147411,
    -0.019446, 0.019409,
    0.166194, -0.166248,
    0.335502, -0.335560,
    -0.462652, 0.462667,
    -0.783344, 0.783371,
    0.174101, -0.174119,
    0.178779, -0.178741,
    -0.586584, 0.586592,
    0.309230, -0.309275,
    0.725391, -0.725375,
};

float Cg_init[2] = {
    -0.354108, -0.354103
};

float xstd_init[12] = {
    0.001108, 0.000175, 0.022742, 0.092303, 0.003239, 0.000974, 0.064718, 0.159236, 0.005705, 0.002254, 0.149228, 0.238588
};

float xmean_init[12] = {
    0.005580, -0.007699, 0.008222, 0.134417, 0.004590, -0.007420, 0.028278, 0.141834, 0.011977, -0.005715, 0.178167, 0.552417
};

