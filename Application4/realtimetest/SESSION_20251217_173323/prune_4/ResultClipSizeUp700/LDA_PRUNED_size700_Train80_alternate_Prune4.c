// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.62%
// test_accuracy: 70.77%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:08:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.335796, 0.335723,
    0.296191, -0.296024,
    -0.093330, 0.093293,
    0.213146, -0.213198,
    0.291541, -0.291606,
    -0.351882, 0.351892,
    -0.748981, 0.749014,
    0.101148, -0.101159,
    0.142389, -0.142356,
    -0.574217, 0.574227,
    0.336862, -0.336909,
    0.796130, -0.796107,
};

float Cg_init[2] = {
    -0.403938, -0.403928
};

float xstd_init[12] = {
    0.001122, 0.000177, 0.024248, 0.095238, 0.003197, 0.000985, 0.060643, 0.149441, 0.005588, 0.002215, 0.148466, 0.241485
};

float xmean_init[12] = {
    0.005595, -0.007698, 0.008684, 0.135795, 0.004516, -0.007435, 0.025983, 0.135077, 0.011734, -0.005787, 0.175932, 0.548513
};

