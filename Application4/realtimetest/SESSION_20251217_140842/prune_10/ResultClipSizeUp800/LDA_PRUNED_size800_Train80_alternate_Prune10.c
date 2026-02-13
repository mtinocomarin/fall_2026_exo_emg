// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 74.17%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:42:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.177554, 2.177618,
    0.813085, -0.813221,
    0.471904, -0.471865,
    -0.714499, 0.714549,
    -1.266706, 1.266731,
    -0.084835, 0.084803,
    -0.697028, 0.697034,
    0.876575, -0.876579,
    1.022624, -1.022623,
    0.074215, -0.074226,
    -0.006404, 0.006411,
    -0.313946, 0.313951,
};

float Cg_init[2] = {
    -0.992258, -0.992271
};

float xstd_init[12] = {
    0.001291, 0.000216, 0.032944, 0.134681, 0.004003, 0.001182, 0.091681, 0.174851, 0.000841, 0.000163, 0.032225, 0.116356
};

float xmean_init[12] = {
    0.006019, -0.007594, 0.016000, 0.212889, 0.010361, -0.006337, 0.152000, 0.566444, 0.005195, -0.007537, 0.029185, 0.266222
};

