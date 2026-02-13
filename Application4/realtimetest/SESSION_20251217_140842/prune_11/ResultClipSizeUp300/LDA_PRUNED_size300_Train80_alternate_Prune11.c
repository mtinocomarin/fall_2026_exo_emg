// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.00%
// test_accuracy: 60.00%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 14:42:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.056298, 3.056268,
    0.839566, -0.839476,
    0.450049, -0.450051,
    -0.025295, 0.025257,
    0.019804, -0.019859,
    -1.166539, 1.166549,
    0.178954, -0.178943,
    -0.455213, 0.455237,
    -0.400949, 0.400978,
    0.773482, -0.773573,
    0.375453, -0.375441,
    0.350701, -0.350650,
};

float Cg_init[2] = {
    -1.153696, -1.153688
};

float xstd_init[12] = {
    0.000936, 0.000138, 0.022056, 0.109348, 0.004225, 0.001249, 0.090689, 0.170810, 0.000949, 0.000141, 0.028992, 0.102695
};

float xmean_init[12] = {
    0.005949, -0.007632, 0.009600, 0.176800, 0.011167, -0.006081, 0.164267, 0.574400, 0.005125, -0.007577, 0.025600, 0.239200
};

