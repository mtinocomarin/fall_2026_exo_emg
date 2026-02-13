// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.94%
// test_accuracy: 76.00%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:08:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.259337, 0.259338,
    0.208614, -0.208604,
    0.171109, -0.171114,
    0.053563, -0.053574,
    0.636675, -0.636677,
    -0.465785, 0.465797,
    -1.065228, 1.065228,
    0.260655, -0.260664,
    -0.380577, 0.380567,
    -0.399014, 0.399028,
    0.258274, -0.258294,
    1.059741, -1.059721,
};

float Cg_init[2] = {
    -0.412907, -0.412906
};

float xstd_init[12] = {
    0.001109, 0.000152, 0.024474, 0.092807, 0.003051, 0.000910, 0.064614, 0.152472, 0.005802, 0.002386, 0.149907, 0.238862
};

float xmean_init[12] = {
    0.005538, -0.007711, 0.007500, 0.128875, 0.004456, -0.007466, 0.027250, 0.137750, 0.011949, -0.005658, 0.176000, 0.554250
};

